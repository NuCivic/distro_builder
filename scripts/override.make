api = 2
core = 7.x

; Include distro's make file.
includes[recruiter] = "../projects/recruiter/build-recruiter.make"

; Use Pantheon's Drupal 7.26 instead of 7.25.
projects[drupal][version] = "7.26"
projects[drupal][download][type] = git
projects[drupal][download][url] = https://github.com/pantheon-systems/drops-7.git
projects[drupal][download][branch] = master

; Use a patched version of the  7.x-1.x-dev version of the recruiter makefile.
projects[recruiter][type] = profile
projects[recruiter][download][type] = git
projects[recruiter][download][url] = http://git.drupal.org/project/recruiter.git
projects[recruiter][download][branch] = 7.x-1.x
projects[recruiter][download][revision] = 6fec202c617490cb4b1a0ce1322ee876a85c5b09
projects[recruiter][patch][2223717] = "http://drupal.org/files/issues/drush_make_fails_https-2223717-1.patch"
