## Distro builder

### Initial setup

This repo lets you create a "distro builder" git repository for integrating development between
the git repository for a Drupal distribution and an individual website based on that distro,
hosted on Pantheon. To install it, edit the file 'builder.conf' with configuration to specify
your distro and website information, and then execute the following command:

````
bash scripts/remotes.setup.sh
````

### Branch structure

After installation, your repository will contain the following branches, each of which points
to a different remote (strings in brackets refer to configuration values defined in builder.conf):

| branch | remote | purpose |
| ------ | ------ | ------- |
| master | origin | website development on Pantheon |
| {PROJECT}_builder | {PROJECT}_{DISTRO}_integration | integration between the website and the distro |
| {DISTRO}_{DISTRO_BRANCH} | {DISTRO_REMOTE} | for pulling in updates to the distro |

### Structure of distro builder

The distro builder branch name will consist of your project name followed by "_builder," e.g.,
"nyc-doe_builder" or "eurocommons2_builder." It provides git subtrees and bash scripts that help perform various
operations related to pushing updates back and forth between the website project and the distro.
It contains the following files and directories:

* **README.md**
* **scripts**: various bash scripts for performing operations
* **docroot**: a subtree of the website codebase (a Drupal docroot) from the Pantheon master branch
* **projects**: contains a subtree (at projects/opencivic) of the distro
* **.htaccess**: a copy of the .htaccess file from docroot
* **robots.txt**: a copy of the robots.txt file from docroot
* **sites**: a copy of the sites directory from docroot

### Config

The distro builder _config_ directory contains several files that can be used to customize your distro. These should be the only files you need to
modify to customize distro_builder to work with your website project and distro. The files in the _config_ directory specify information including:
(1) the names and git remote URLs of the distro used to build your website, as well as of the website itself; (2) any overrides or patches that you
want made to the distro itself (such as changing the release version of Drupel modules); and (3) any libraries, modules or themes that you are
adding beyond what is provided by the distro itself. The _config_ directory contains the following files:

* **builder.conf**: Fill this in before you run scripts/remotes.setup.sh.
* **override.make**: Use this to specify that override the distro's default make files. Changes you can make here include: using a different
version of Drupal core; specifying a specific branch or release version tag for the distro; applying a patch to the distro; and specifying if
you are adding additional modules, libraries or themes beyond the standard code that is included in the distro itself.
* **distro.patch** (optional): The actual patch that you want made against the distro.
* **sites-includes.make** (optional): A makefile containing the actual list of modules, libraries and themes that should be added to the sites/all directory.

For further information about how to modify these configuration for your website project, read the comments inside each of the included files.

### Scripts

The distro builder _scripts_ directory contains the following bash scripts, which can be used to perform operations including:

* **distro.rebuild.sh**: use drush make to rebuild the docroot, after pulling the latest changes from the distro and applying overrides
* **website.get.changes.sh**: pull changes from the website to the distro builder docroot
* **website.put.changes.sh**: push changes from the distro builder docroot to the website

Other scripts perform supporting operations, as follows:

* **distro.pull.sh**: Pulls the latest version from the distro (used by distro.rebuild.sh)
* **website.pull.sh**: Pulls the latest version from the website distro on Pantheon (used by website.get.changes.sh)
* **website.push.sh**: Copies the distro builder docroot to the Pantheon branch (used by website.put.changes.sh)
* **remotes.setup.sh**: Initial setup of the distro builder and branches
* **subtrees.setup.sh**: Initial setup of the distro builder subtrees (run one after the first run of remotes.setup.sh)

### To rebuild the codebase with project overrides

    bash scripts/distro.rebuild.sh override

The "override" option tells distro builder to override the distro's drush makefile with overrides specified in file
"override.make." If you want to add modules, libraries or themes to the sites/all directory (in addition to the
distro-specific code that goes into the profiles directory), you can specify them in file "site-includes.make" and
uncomment a line in "override.make" so they get included.

If you run scripts/distro.rebuild.sh without the override option, it will rebuild a codebase based on the distro's
drush make defaults. You should therefore normally include the override option so your customizations are not lost.

The distro.rebuild script makes copies of the sites directory and the .htaccess and robots.txt files outside the Drupal
docroot, and it uses those copies to overwrite whatever is created there by drush make. This ensures that any changes
you have made affecting those files will be preserved. Sometimes, however, drush make adds its own libraries, modules
or themes to the sites directory. The distro.rebuild script therefore saves the drush make version of the sites
directory outside the docroot in a directory named sites.rebuilt so that its contents are available if you need them. 

### To pull the latest changes from the project into the distro builder branch

````
bash scripts/website.get.changes.sh
git commit -m "update with latest website changes"
git pull --rebase
git push
````

### To push the latest changes from the distro builder branch to the website repository

````
bash scripts/website.put.changes.sh
git commit -m "add latest distro changes to website"
git pull --rebase
git push
````

### Miscellaneous tricks

To remove all empty directories (which git sometimes fails to do):

    find -depth -type d -empty -exec rmdir {} \;
