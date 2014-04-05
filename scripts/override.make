api = 2
core = 7.x

; Include distro's make file.
includes[opencivic] = "../projects/opencivic/build-opencivic.make"

; Add some modules, themes and libraries to sites/all
includes[] = sites-includes.make

; Use Pantheon's Pressflow version of Drupal 7.26 instead of OpenCivic's version.
projects[drupal][version] = "7.26"
projects[drupal][download][type] = git
projects[drupal][download][url] = https://github.com/pantheon-systems/drops-7.git
projects[drupal][download][branch] = master

; Use the github version of the distro makefile.
projects[opencivic][type] = profile
projects[opencivic][download][type] = git
projects[opencivic][download][url] = http://git.drupal.org/project/opencivic.git
projects[opencivic][download][branch] = 7.x-2.x
; If you want to specify a version of the distro, uncomment this line and put in the correct version, e.g., 1.2, beta1, etc.
; projects[opencivic][version] = alpha1
; If you want to specify a specific commit of the distro, uncomment this line and put in the commit SHA.
; projects[opencivic][download][revision] = 542198af65b1ec3ae7a10965ce1d3f183c46c05d
