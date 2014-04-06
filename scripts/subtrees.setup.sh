#!/bin/bash
# Include configuration.
CONFIG_FILE="config/builder.conf"
if [[ -f $CONFIG_FILE ]]; then
  . $CONFIG_FILE
fi

cd "$(git rev-parse --show-toplevel)"
mkdir projects
git read-tree --prefix=projects/$DISTRO/ -u $DISTRO_BRANCH_NAME
git read-tree --prefix=docroot/ -u master
