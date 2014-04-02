#!/bin/bash
# Include configuration.
CONFIG_FILE="scripts/builder.conf"
if [[ -f $CONFIG_FILE ]]; then
  . $CONFIG_FILE
fi

# Configure push default to push to upstream remotes without requiring matching remote names.
git config --local push.default upstream

# The branch for the distro builder was added manually, so this line isn't necessary.
# git checkout -b distro_builder
# However, the origin branch should be renamed so the Pantheon website can be the origin branch.
git remote rename origin $PROJECT_INTEGRATION_REMOTE

# Set up remote and branch for $DISTRO_DISPLAYNAME $DISTRO_BRANCH
git remote add $DISTRO_REMOTE $DISTRO_REMOTE_URL
git fetch $DISTRO_REMOTE
git checkout -b $DISTRO_BRANCH_NAME $DISTRO_REMOTE/$DISTRO_BRANCH

# Use Pantheon's repo as the remote for the master branch
# These lines are unnecessary when adding distro_builder to an existing clone of the Pantheon site.
git remote add origin $WEBSITE_REMOTE_URL
git fetch origin
git checkout -b master origin/master
git checkout distro_builder
bash scripts/subtrees.setup.sh
git commit -am "Initial setup of docroot and projects subtrees"