api = 2
core = 7.x

; Include distro's make file.
includes[opencivic] = "../projects/opencivic/build-opencivic.make"

; To put additional modules, themes and libraries in sites/all, uncomment this line and edit site-includes.make
; includes[] = sites-includes.make

; Use Pantheon's Pressflow version of Drupal 7.26 instead of OpenCivic's version.
projects[drupal][version] = "7.26"
projects[drupal][download][type] = git
projects[drupal][download][url] = https://github.com/pantheon-systems/drops-7.git
projects[drupal][download][branch] = master

; Uncomment this to use a specific git repo commit of the distro makefile.
projects[opencivic][type] = profile
projects[opencivic][download][type] = git
projects[opencivic][download][url] = http://git.drupal.org/project/opencivic.git
projects[opencivic][download][branch] = 7.x-2.x
; If you want to specify a version of the distro, uncomment this line and put in the correct version, e.g., 1.2, beta1, etc.
; projects[opencivic][version] = alpha1
; If you want to specify a specific commit of the distro, uncomment this line and put in the commit SHA.
projects[opencivic][download][revision] = fdc2b6b28df8fb1c909d471f30bd87ede936b75e


projects[link][version] = 1.2
projects[entityreference][version] = "1.1"
projects[entityreference][download][revision] = 92747d9391443fb653a0044d9926e04402293f9a
projects[search_api_db][version] = "1.0-rc2"
projects[mail_edit][patch][1826220] = http://drupal.org/files/mail_edit-undefined_index_path-1826220-2.patch