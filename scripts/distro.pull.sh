#!/bin/bash
# Include configuration.
CONFIG_FILE="scripts/builder.conf"
if [[ -f $CONFIG_FILE ]]; then
  . $CONFIG_FILE
fi
GITURL="$(git config --get remote.$DISTRO_REMOTE.url)"
PREFIX="projects/$DISTRO"
echo "Pulling in latest updates on branch $DISTRO_BRANCH from remote $GITURL."
 
# Change to git root directory.
cd "$(git rev-parse --show-toplevel)"
find . -name ".DS_Store" -depth -exec rm {} \;
git checkout $DISTRO_BRANCH_NAME
git pull --rebase
git checkout distro_builder
git merge --squash -s subtree --no-commit $DISTRO_BRANCH_NAME
