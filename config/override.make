api = 2
core = 7.x

; Include distro's make file.
includes[bear] = "../projects/bear/build-bear.make"

; Use Pantheon's Drupal 7.28 instead of Bear's version.
projects[drupal][version] = "7.28"
projects[drupal][download][type] = git
projects[drupal][download][url] = https://github.com/pantheon-systems/drops-7.git
projects[drupal][download][branch] = master
