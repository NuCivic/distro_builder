#!/bin/bash
# Include configuration.
CONFIG_FILE="scripts/builder.conf"
if [[ -f $CONFIG_FILE ]]; then
  . $CONFIG_FILE
fi

MAKEFILE="$1"
MAKEPATH="projects/$DISTRO/build-$DISTRO.make"
if [ "$MAKEFILE" == "default" ] || [ "$MAKEFILE" == "" ]; then
  MAKEPATH="projects/$DISTRO/build-$DISTRO.make"
elif [ "$MAKEFILE" == "override" ]; then
  MAKEPATH="scripts/override.make"
else
  MAKEPATH="scripts/$MAKEFILE"
fi

GIT_ROOT=$(git rev-parse --show-toplevel)
cd $GIT_ROOT
 
# Pull down latest copy of $DISTRO_DISPLAYNAME.
bash scripts/distro.pull.sh

echo "Removing docroot"
rm -rf docroot
 
echo "Building $DISTRO_DISPLAYNAME profile from makefile at path $MAKEPATH"
drush make -y "$MAKEPATH" docroot --no-gitinfofile

# Remove undesired .gitignore files.
rm docroot/profiles/$DISTRO/.gitignore
git clean -d docroot/profiles

cd docroot
echo "Copying sites directory to docroot/sites"
rm -rf sites
cp -Rfp ../sites sites
echo "Copying .htaccess to docroot/.htaccess"
rm .htaccess
cp ../.htaccess .htaccess
echo "Copying robots.txt to docroot/robots.txt"
rm robots.txt
cp ../robots.txt robots.txt
cd ../
