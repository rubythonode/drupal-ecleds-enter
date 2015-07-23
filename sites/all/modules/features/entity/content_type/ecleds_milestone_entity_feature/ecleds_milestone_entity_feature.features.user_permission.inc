<?php
/**
 * @file
 * ecleds_milestone_entity_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ecleds_milestone_entity_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_full_milestone_name'.
  $permissions['create field_full_milestone_name'] = array(
    'name' => 'create field_full_milestone_name',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'E3' => 'E3',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_milestone_cleared'.
  $permissions['create field_milestone_cleared'] = array(
    'name' => 'create field_milestone_cleared',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_milestone_description'.
  $permissions['create field_milestone_description'] = array(
    'name' => 'create field_milestone_description',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'E3' => 'E3',
      'administrator' => 'administrator',
      'mission' => 'mission',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_milestone_type_notes'.
  $permissions['create field_milestone_type_notes'] = array(
    'name' => 'create field_milestone_type_notes',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create title_field'.
  $permissions['create title_field'] = array(
    'name' => 'create title_field',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
      'mission' => 'mission',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_full_milestone_name'.
  $permissions['edit field_full_milestone_name'] = array(
    'name' => 'edit field_full_milestone_name',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'E3' => 'E3',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_milestone_cleared'.
  $permissions['edit field_milestone_cleared'] = array(
    'name' => 'edit field_milestone_cleared',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_milestone_description'.
  $permissions['edit field_milestone_description'] = array(
    'name' => 'edit field_milestone_description',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'E3' => 'E3',
      'administrator' => 'administrator',
      'mission' => 'mission',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_milestone_type_notes'.
  $permissions['edit field_milestone_type_notes'] = array(
    'name' => 'edit field_milestone_type_notes',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_full_milestone_name'.
  $permissions['edit own field_full_milestone_name'] = array(
    'name' => 'edit own field_full_milestone_name',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'E3' => 'E3',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_milestone_cleared'.
  $permissions['edit own field_milestone_cleared'] = array(
    'name' => 'edit own field_milestone_cleared',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_milestone_description'.
  $permissions['edit own field_milestone_description'] = array(
    'name' => 'edit own field_milestone_description',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'E3' => 'E3',
      'administrator' => 'administrator',
      'mission' => 'mission',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_milestone_type_notes'.
  $permissions['edit own field_milestone_type_notes'] = array(
    'name' => 'edit own field_milestone_type_notes',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own title_field'.
  $permissions['edit own title_field'] = array(
    'name' => 'edit own title_field',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
      'mission' => 'mission',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit title_field'.
  $permissions['edit title_field'] = array(
    'name' => 'edit title_field',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
      'mission' => 'mission',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_full_milestone_name'.
  $permissions['view field_full_milestone_name'] = array(
    'name' => 'view field_full_milestone_name',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'E3' => 'E3',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_milestone_cleared'.
  $permissions['view field_milestone_cleared'] = array(
    'name' => 'view field_milestone_cleared',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_milestone_description'.
  $permissions['view field_milestone_description'] = array(
    'name' => 'view field_milestone_description',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'E3' => 'E3',
      'administrator' => 'administrator',
      'mission' => 'mission',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_milestone_type_notes'.
  $permissions['view field_milestone_type_notes'] = array(
    'name' => 'view field_milestone_type_notes',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_full_milestone_name'.
  $permissions['view own field_full_milestone_name'] = array(
    'name' => 'view own field_full_milestone_name',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'E3' => 'E3',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_milestone_cleared'.
  $permissions['view own field_milestone_cleared'] = array(
    'name' => 'view own field_milestone_cleared',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_milestone_description'.
  $permissions['view own field_milestone_description'] = array(
    'name' => 'view own field_milestone_description',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'E3' => 'E3',
      'administrator' => 'administrator',
      'mission' => 'mission',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_milestone_type_notes'.
  $permissions['view own field_milestone_type_notes'] = array(
    'name' => 'view own field_milestone_type_notes',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own title_field'.
  $permissions['view own title_field'] = array(
    'name' => 'view own title_field',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
      'mission' => 'mission',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view title_field'.
  $permissions['view title_field'] = array(
    'name' => 'view title_field',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
      'mission' => 'mission',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}