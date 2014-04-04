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

if [ -d docroot/sites ];
then
  echo "Copying sites directory from docroot/sites"
  rm -rf sites
  cp -Rfp docroot/sites sites
fi
if [ -f docroot/.htaccess ];
then
  echo "Copying .htaccess from docroot/.htaccess"
  rm .htaccess
  cp docroot/.htaccess .htaccess
fi
if [ -f docroot/robots.txt ];
then
  echo "Copying robots.txt from docroot/robots.txt"
  rm robots.txt
  cp docroot/robots.txt robots.txt
fi

echo "Removing docroot"
rm -rf docroot
 
echo "Building $DISTRO_DISPLAYNAME profile from makefile at path $MAKEPATH"
drush make -y "$MAKEPATH" docroot --no-gitinfofile

# Remove undesired .gitignore files.
cd docroot/profiles
find . -name ".gitignore" -depth -exec rm {} \;
cd ../sites
find . -name ".gitignore" -depth -exec rm {} \;
cd ../

if [ -d sites ];
then
  echo "Copying sites directory to docroot/sites"
  rm -rf docroot/sites
  cp -Rfp sites docroot/sites
else
  cp -Rfp docroot/sites sites
fi
if [ -f .htaccess ];
then
  echo "Copying .htaccess to docroot/.htaccess"
  rm docroot/.htaccess
  cp .htaccess docroot/.htaccess
else
  cp -Rfp docroot/.htaccess .htaccess
fi
if [ -f robots.txt ];
then
  echo "Copying robots.txt to docroot/robots.txt"
  rm docroot/robots.txt
  cp robots.txt docroot/robots.txt
else
  cp docroot/robots.txt robots.txt
fi
