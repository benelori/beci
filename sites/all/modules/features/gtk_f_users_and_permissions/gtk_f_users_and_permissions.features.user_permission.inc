<?php
/**
 * @file
 * gtk_f_users_and_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function gtk_f_users_and_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'administrator' => 'administrator',
      'coordinator' => 'coordinator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'coordinator' => 'coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'administrator' => 'administrator',
      'coordinator' => 'coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'administrator' => 'administrator',
      'coordinator' => 'coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create gtk_blog_post content'.
  $permissions['create gtk_blog_post content'] = array(
    'name' => 'create gtk_blog_post content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create gtk_simple_page content'.
  $permissions['create gtk_simple_page content'] = array(
    'name' => 'create gtk_simple_page content',
    'roles' => array(
      'coordinator' => 'coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create organizations content'.
  $permissions['create organizations content'] = array(
    'name' => 'create organizations content',
    'roles' => array(
      'coordinator' => 'coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create person content'.
  $permissions['create person content'] = array(
    'name' => 'create person content',
    'roles' => array(
      'coordinator' => 'coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any gtk_blog_post content'.
  $permissions['delete any gtk_blog_post content'] = array(
    'name' => 'delete any gtk_blog_post content',
    'roles' => array(
      'coordinator' => 'coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any gtk_simple_page content'.
  $permissions['delete any gtk_simple_page content'] = array(
    'name' => 'delete any gtk_simple_page content',
    'roles' => array(
      'coordinator' => 'coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any organizations content'.
  $permissions['delete any organizations content'] = array(
    'name' => 'delete any organizations content',
    'roles' => array(
      'coordinator' => 'coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any person content'.
  $permissions['delete any person content'] = array(
    'name' => 'delete any person content',
    'roles' => array(
      'coordinator' => 'coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own gtk_blog_post content'.
  $permissions['delete own gtk_blog_post content'] = array(
    'name' => 'delete own gtk_blog_post content',
    'roles' => array(
      'coordinator' => 'coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own gtk_simple_page content'.
  $permissions['delete own gtk_simple_page content'] = array(
    'name' => 'delete own gtk_simple_page content',
    'roles' => array(
      'coordinator' => 'coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own organizations content'.
  $permissions['delete own organizations content'] = array(
    'name' => 'delete own organizations content',
    'roles' => array(
      'coordinator' => 'coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own person content'.
  $permissions['delete own person content'] = array(
    'name' => 'delete own person content',
    'roles' => array(
      'coordinator' => 'coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'coordinator' => 'coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any gtk_blog_post content'.
  $permissions['edit any gtk_blog_post content'] = array(
    'name' => 'edit any gtk_blog_post content',
    'roles' => array(
      'coordinator' => 'coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any gtk_simple_page content'.
  $permissions['edit any gtk_simple_page content'] = array(
    'name' => 'edit any gtk_simple_page content',
    'roles' => array(
      'coordinator' => 'coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any organizations content'.
  $permissions['edit any organizations content'] = array(
    'name' => 'edit any organizations content',
    'roles' => array(
      'coordinator' => 'coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any person content'.
  $permissions['edit any person content'] = array(
    'name' => 'edit any person content',
    'roles' => array(
      'coordinator' => 'coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own gtk_blog_post content'.
  $permissions['edit own gtk_blog_post content'] = array(
    'name' => 'edit own gtk_blog_post content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own gtk_simple_page content'.
  $permissions['edit own gtk_simple_page content'] = array(
    'name' => 'edit own gtk_simple_page content',
    'roles' => array(
      'coordinator' => 'coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own organizations content'.
  $permissions['edit own organizations content'] = array(
    'name' => 'edit own organizations content',
    'roles' => array(
      'coordinator' => 'coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own person content'.
  $permissions['edit own person content'] = array(
    'name' => 'edit own person content',
    'roles' => array(
      'coordinator' => 'coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'coordinator' => 'coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'administrator' => 'administrator',
      'coordinator' => 'coordinator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'use advanced search'.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'administrator' => 'administrator',
      'coordinator' => 'coordinator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'administrator' => 'administrator',
      'coordinator' => 'coordinator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'administrator' => 'administrator',
      'coordinator' => 'coordinator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'administrator' => 'administrator',
      'coordinator' => 'coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'coordinator' => 'coordinator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
