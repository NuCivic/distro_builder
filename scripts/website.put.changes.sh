#!/bin/bash

GIT_ROOT=$(git rev-parse --show-toplevel)
cd $GIT_ROOT
 
# Pull down latest copy of website.
bash scripts/website.push.sh

# The distro.rebuild.sh script copies the external
# sites, .htaccess and robots.txt files into the docroot,
# so this script doesn't need to do that.

# echo "Copying sites directory from docroot/sites"
# rm -rf sites
# cp -Rfp docroot/sites sites
# echo "Copying .htaccess from docroot/.htaccess"
# rm .htaccess
# cp docroot/.htaccess .htaccess
# echo "Copying robots.txt from docroot/robots.txt"
# rm robots.txt
# cp docroot/robots.txt robots.txt
