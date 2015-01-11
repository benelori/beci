<?php
/**
 * @file
 * gtk_f_users_and_permissions.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function gtk_f_users_and_permissions_user_default_roles() {
  $roles = array();

  // Exported role: coordinator.
  $roles['coordinator'] = array(
    'name' => 'coordinator',
    'weight' => 3,
  );

  return $roles;
}
