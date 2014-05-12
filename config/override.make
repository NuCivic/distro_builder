api = 2
core = 7.x

; Include Pantheon version of the distro's make file.
includes[opencivic] = "../projects/opencivic/build-opencivic-pantheon.make"

; Use the github repository for the distro makefile.
projects[opencivic][download][url] = https://github.com/civic-commons/opencivic.git
; Specify the commit SHA for the revision of the distro used to build the site.
projects[opencivic][download][revision] = 8253b6dc484eb10d776f6067abc5ff5cf6689e4e
; projects[opencivic][patch][] = distro.patch

; To put additional modules, themes and libraries in sites/all, uncomment this line and edit site-includes.make
; includes[] = sites-includes.make

