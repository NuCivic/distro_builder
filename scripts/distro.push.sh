#!/bin/bash
# Include configuration.
CONFIG_FILE="scripts/builder.conf"
if [[ -f $CONFIG_FILE ]]; then
  . $CONFIG_FILE
fi

GITURL="$(git config --get remote.$DISTRO_REMOTE.url)"
echo "Putting latest changes on PROJECT_BUILDER_BRANCH to distro $DISTRO_BRANCH_NAME."
 
# Change to git root directory.
cd "$(git rev-parse --show-toplevel)"
git checkout $PROJECT_BUILDER_BRANCH
git pull --rebase
git checkout $DISTRO_BRANCH_NAME
git merge --squash -s subtree --no-commit $PROJECT_BUILDER_BRANCH
