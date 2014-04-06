#!/bin/bash
# Include configuration.
CONFIG_FILE="scripts/builder.conf"
if [[ -f $CONFIG_FILE ]]; then
  . $CONFIG_FILE
fi

GITURL="$(git config --get remote.$PROJECT_INTEGRATION_REMOTE.url)"
echo "Putting changes to remote $GITURL from branch $PROJECT_BUILDER_BRANCH."
 
# Change to git root directory.
cd "$(git rev-parse --show-toplevel)"
find . -name ".DS_Store" -depth -exec rm {} \;
git checkout $PROJECT_BUILDER_BRANCH
git pull --rebase
git checkout master
git merge --squash -s subtree --no-commit $PROJECT_BUILDER_BRANCH
