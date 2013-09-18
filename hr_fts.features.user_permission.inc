<?php
/**
 * @file
 * hr_fts.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function hr_fts_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access bean overview'.
  $permissions['access bean overview'] = array(
    'name' => 'access bean overview',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'administer beans'.
  $permissions['administer beans'] = array(
    'name' => 'administer beans',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create any fts_visualization bean'.
  $permissions['create any fts_visualization bean'] = array(
    'name' => 'create any fts_visualization bean',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any fts_visualization bean'.
  $permissions['delete any fts_visualization bean'] = array(
    'name' => 'delete any fts_visualization bean',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any fts_visualization bean'.
  $permissions['edit any fts_visualization bean'] = array(
    'name' => 'edit any fts_visualization bean',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any fts_visualization bean'.
  $permissions['view any fts_visualization bean'] = array(
    'name' => 'view any fts_visualization bean',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view bean page'.
  $permissions['view bean page'] = array(
    'name' => 'view bean page',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'bean',
  );

  return $permissions;
}
