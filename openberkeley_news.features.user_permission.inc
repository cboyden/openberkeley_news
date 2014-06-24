<?php
/**
 * @file
 * openberkeley_news.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function openberkeley_news_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node news_item breadcrumbs'.
  $permissions['administer panelizer node news_item breadcrumbs'] = array(
    'name' => 'administer panelizer node news_item breadcrumbs',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node news_item content'.
  $permissions['administer panelizer node news_item content'] = array(
    'name' => 'administer panelizer node news_item content',
    'roles' => array(
      'administrator' => 'administrator',
      'builder' => 'builder',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node news_item context'.
  $permissions['administer panelizer node news_item context'] = array(
    'name' => 'administer panelizer node news_item context',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node news_item defaults'.
  $permissions['administer panelizer node news_item defaults'] = array(
    'name' => 'administer panelizer node news_item defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node news_item layout'.
  $permissions['administer panelizer node news_item layout'] = array(
    'name' => 'administer panelizer node news_item layout',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node news_item overview'.
  $permissions['administer panelizer node news_item overview'] = array(
    'name' => 'administer panelizer node news_item overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node news_item settings'.
  $permissions['administer panelizer node news_item settings'] = array(
    'name' => 'administer panelizer node news_item settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term news_type defaults'.
  $permissions['administer panelizer taxonomy_term news_type defaults'] = array(
    'name' => 'administer panelizer taxonomy_term news_type defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'create news_item content'.
  $permissions['create news_item content'] = array(
    'name' => 'create news_item content',
    'roles' => array(
      'administrator' => 'administrator',
      'builder' => 'builder',
      'contributor' => 'contributor',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any news_item content'.
  $permissions['delete any news_item content'] = array(
    'name' => 'delete any news_item content',
    'roles' => array(
      'administrator' => 'administrator',
      'builder' => 'builder',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own news_item content'.
  $permissions['delete own news_item content'] = array(
    'name' => 'delete own news_item content',
    'roles' => array(
      'administrator' => 'administrator',
      'builder' => 'builder',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in news_type'.
  $permissions['delete terms in news_type'] = array(
    'name' => 'delete terms in news_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any news_item content'.
  $permissions['edit any news_item content'] = array(
    'name' => 'edit any news_item content',
    'roles' => array(
      'administrator' => 'administrator',
      'builder' => 'builder',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own news_item content'.
  $permissions['edit own news_item content'] = array(
    'name' => 'edit own news_item content',
    'roles' => array(
      'administrator' => 'administrator',
      'builder' => 'builder',
      'contributor' => 'contributor',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in news_type'.
  $permissions['edit terms in news_type'] = array(
    'name' => 'edit terms in news_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  return $permissions;
}
