<?php
/**
 * @file
 * doe_user.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function doe_user_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  // Exported role: content editor.
  $roles['content editor'] = array(
    'name' => 'content editor',
    'weight' => 5,
  );

  // Exported role: internship administrator.
  $roles['internship administrator'] = array(
    'name' => 'internship administrator',
    'weight' => 4,
  );

  // Exported role: internship host.
  $roles['internship host'] = array(
    'name' => 'internship host',
    'weight' => 3,
  );

  return $roles;
}
