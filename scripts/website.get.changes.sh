#!/bin/bash
# Include configuration.
CONFIG_FILE="scripts/builder.conf"
if [[ -f $CONFIG_FILE ]]; then
  . $CONFIG_FILE
fi

GIT_ROOT=$(git rev-parse --show-toplevel)
cd $GIT_ROOT
 
# Pull down latest copy of website.
bash scripts/website.pull.sh

echo "Copying sites directory from docroot/sites"
rm -rf sites
cp -Rfp docroot/sites sites
echo "Copying .htaccess from docroot/.htaccess"
rm .htaccess
cp docroot/.htaccess .htaccess
echo "Copying robots.txt from docroot/robots.txt"
rm robots.txt
cp docroot/robots.txt robots.txt
