## Distro builder

### Initial setup

This repo lets you create a "distro_builder" git repository for integrating development between
the git repository for a Drupal distribution and an individual website based on that distro,
hosted on Pantheon. To install it, edit the file 'builder.conf' with configuration to specify
the distro and website information, and then execute the following command:

````
bash scripts/remotes.setup.sh
````

### Branch structure

After installation, your repository will contain the following branches, each of which points
to a different remote (strings in brackets refer to configuration values defined in builder.conf):

| branch | remote | purpose |
| ------ | ------ | ------- |
| master | origin | website development on Pantheon |
| distro_builder | {PROJECT}_{DISTRO}_integration | integration between the website and the distro |
| {DISTRO}_{DISTRO_BRANCH} | {DISTRO_REMOTE} | for pulling in updates to the distro |

### Structure of distro_builder

The distro_builder branch provides git subtrees and bash scripts that help perform various
operations related to pushing updates back and forth between the website and the distro.
It contains the following files and directories:

* **README.md**
* **scripts**: various bash scripts for performing operations
* **docroot**: a subtree of the website codebase (a Drupal docroot) from the Pantheon master branch
* **projects**: contains a subtree (at projects/opencivic) of the distro
* **.htaccess**: a copy of the .htaccess file from docroot
* **robots.txt**: a copy of the robots.txt file from docroot
* **sites**: a copy of the sites directory from docroot

### Scripts

The distro_builder _scripts_ directory contains the following bash scripts, which can be used to perform operations including the following:

* **distro.rebuild.sh**: use drush make to rebuild the docroot, after pulling the latest changes from the distro and applying overrides
* **website.get.changes.sh**: pull changes from the website to the distro_builder docroot
* **website.put.changes.sh**: push changes from the distro_builder docroot to the website

Other scripts perform supporting operations, as follows:

* **distro.pull.sh**: Pulls the latest version from the distro (used by distro.rebuild.sh)
* **website.pull.sh**: Pulls the latest version from the website distro on Pantheon (used by website.get.changes.sh)
* **website.push.sh**: Copies the distro_builder docroot to the Pantheon branch (used by website.put.changes.sh)
* **remotes.setup.sh**: Initial setup of the distro_builder and branches
* **subtrees.setup.sh**: Initial setup of the distro_builder subtrees (run one after the first run of remotes.setup.sh)

### To build the full codebase

    bash scripts/distro.rebuild.sh

### To build the codebase with project overrides

    bash scripts/distro.rebuild.sh override

### To pull the latest changes from the project into the distro_builder branch

````
bash scripts/website.get.changes.sh
git commit -m "update with latest website changes"
git pull --rebase
git push
````

### To push the latest changes from the distro_builder branch to the website repository

````
bash scripts/website.put.changes.sh
git commit -m "add latest distro changes to website"
git pull --rebase
git push
````

### Miscellaneous tricks

To remove all empty directories (which git sometimes fails to do):

    find -depth -type d -empty -exec rmdir {} \;
