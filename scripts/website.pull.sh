#!/bin/bash
# Include configuration.
CONFIG_FILE="scripts/builder.conf"
if [[ -f $CONFIG_FILE ]]; then
  . $CONFIG_FILE
fi

GITURL="$(git config --get remote.origin.url)"
echo "Pulling in latest updates on branch $DISTRO_BRANCH from remote $GITURL."
 
# Change to git root directory.
cd "$(git rev-parse --show-toplevel)"
find . -name ".DS_Store" -depth -exec rm {} \;
git checkout master
git pull --rebase
git checkout $PROJECT_BUILDER_BRANCH
git merge --squash -s subtree --no-commit master
