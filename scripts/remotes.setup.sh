#!/bin/bash
# Include configuration.
CONFIG_FILE="scripts/builder.conf"
if [[ -f $CONFIG_FILE ]]; then
  . $CONFIG_FILE
fi

# Configure push default to push to upstream remotes without requiring matching remote names.
git config --local push.default upstream

# Checkout new branch of distro_builder for this project.
BRANCH_EXISTS="$(git show-ref refs/heads/$PROJECT_BUILDER_BRANCH)"
if [[ -n "$BRANCH_EXISTS" ]]; then
  echo "Branch $PROJECT_BUILDER_BRANCH exists."
else
  git checkout -b $PROJECT_BUILDER_BRANCH
  git commit -am "Customize configuration settings for $PROJECT_BUILDER_BRANCH branch"
  git push -u origin $PROJECT_BUILDER_BRANCH
  git branch -d distro_builder
fi

# However, the origin branch should be renamed so the Pantheon website can be the origin branch.
TRACKING_REMOTE="$(git config branch.$PROJECT_BUILDER_BRANCH.remote)"
if [ "$TRACKING_REMOTE" == "origin" ]; then
  echo "Renaming $PROJECT_BUILDER_BRANCH remote to $PROJECT_INTEGRATION_REMOTE"
  git remote rename origin $PROJECT_INTEGRATION_REMOTE
else
  echo "Distro builder remote is '$TRACKING_REMOTE'"
fi

# Set up remote and branch for $DISTRO_DISPLAYNAME $DISTRO_BRANCH
TRACKING_REMOTE="$(git config branch.$DISTRO_BRANCH_NAME.remote)"
if [ "$TRACKING_REMOTE" == "$DISTRO_REMOTE" ]; then
  echo "Distro '$DISTRO_DISPLAYNAME' is being tracked on remote '$DISTRO_REMOTE' at branch '$DISTRO_BRANCH_NAME'"
else
  git remote add $DISTRO_REMOTE $DISTRO_REMOTE_URL
  git fetch $DISTRO_REMOTE
  git checkout -b $DISTRO_BRANCH_NAME $DISTRO_REMOTE/$DISTRO_BRANCH
fi

# Use Pantheon's repo as the remote for the master branch
TRACKING_REMOTE="$(git config branch.master.remote)"
if [ "$TRACKING_REMOTE" == "origin" ]; then
  echo "The website on Pantheon is being tracked on remote 'origin' at branch 'master'"
else
  git remote add origin $WEBSITE_REMOTE_URL
  git fetch origin
  git checkout -b master origin/master
  git checkout $PROJECT_BUILDER_BRANCH
fi

if [ -d docroot ]; then
  echo "The docroot and project subtrees are set up."
else
  echo "Setting up subtrees"
  bash scripts/subtrees.setup.sh
  git commit -am "Initial setup of docroot and projects subtrees"
fi
