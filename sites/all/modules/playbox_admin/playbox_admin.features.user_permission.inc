<?php
/**
 * @file
 * playbox_admin.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function playbox_admin_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'change user playbox settings'.
  $permissions['change user playbox settings'] = array(
    'name' => 'change user playbox settings',
    'roles' => array(
      'administrator' => 'administrator',
      'battle_author' => 'battle_author',
      'editor' => 'editor',
    ),
    'module' => 'playbox_admin',
  );

  // Exported permission: 'playbox battle dashboard'.
  $permissions['playbox battle dashboard'] = array(
    'name' => 'playbox battle dashboard',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'playbox_battle_author',
  );

  // Exported permission: 'create playbox_battle content'.
  $permissions['create playbox_battle content'] = array(
    'name' => 'create playbox_battle content',
    'roles' => array(
      'battle_author' => 'battle_author',
    ),
    'module' => 'playbox_battle_author',
  );

  // Exported permission: 'edit own playbox_battle content'.
  $permissions['edit own playbox_battle content'] = array(
    'name' => 'edit own playbox_battle content',
    'roles' => array(
      'battle_author' => 'battle_author',
    ),
    'module' => 'playbox_battle_author',
  );
  
  // Exported permission: 'delete own playbox_battle content'.
  $permissions['delete own playbox_battle content'] = array(
    'name' => 'delete own playbox_battle content',
    'roles' => array(
      'battle_author' => 'battle_author',
    ),
    'module' => 'playbox_battle_author',
  );

  return $permissions;
}
