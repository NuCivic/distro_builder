api = 2
core = 7.x

; Include Pantheon version of the distro's make file.
includes[opencivic] = "../projects/opencivic/build-opencivic-pantheon.make"

; Use the github repository for the distro makefile.
projects[opencivic][download][url] = https://github.com/civic-commons/opencivic.git
; Specify the commit SHA for the revision of the distro used to build the site.
projects[opencivic][download][revision] = dabe640aae87ba137db790987c63cc0a0f9c2456

projects[link][version] = 1.2
projects[entityreference][version] = "1.1"
projects[entityreference][download][revision] = 92747d9391443fb653a0044d9926e04402293f9a
projects[search_api_db][version] = "1.0-rc2"
projects[mail_edit][patch][1826220] = http://drupal.org/files/mail_edit-undefined_index_path-1826220-2.patch

; To put additional modules, themes and libraries in sites/all, uncomment this line and edit site-includes.make
; includes[] = sites-includes.make

