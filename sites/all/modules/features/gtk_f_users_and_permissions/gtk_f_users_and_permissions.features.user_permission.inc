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
      'coordinator' => 'coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create activity content'.
  $permissions['create activity content'] = array(
    'name' => 'create activity content',
    'roles' => array(
      'administrator' => 'administrator',
      'coordinator' => 'coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create dexp_portfolio content'.
  $permissions['create dexp_portfolio content'] = array(
    'name' => 'create dexp_portfolio content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create event_calendar content'.
  $permissions['create event_calendar content'] = array(
    'name' => 'create event_calendar content',
    'roles' => array(
      'administrator' => 'administrator',
      'coordinator' => 'coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create gtk_blog_post content'.
  $permissions['create gtk_blog_post content'] = array(
    'name' => 'create gtk_blog_post content',
    'roles' => array(
      'administrator' => 'administrator',
      'coordinator' => 'coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create gtk_simple_page content'.
  $permissions['create gtk_simple_page content'] = array(
    'name' => 'create gtk_simple_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'coordinator' => 'coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create home_page_slideshow content'.
  $permissions['create home_page_slideshow content'] = array(
    'name' => 'create home_page_slideshow content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create iparag_elemzes content'.
  $permissions['create iparag_elemzes content'] = array(
    'name' => 'create iparag_elemzes content',
    'roles' => array(
      'administrator' => 'administrator',
      'coordinator' => 'coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create kontakt content'.
  $permissions['create kontakt content'] = array(
    'name' => 'create kontakt content',
    'roles' => array(
      'administrator' => 'administrator',
      'coordinator' => 'coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create organizations content'.
  $permissions['create organizations content'] = array(
    'name' => 'create organizations content',
    'roles' => array(
      'administrator' => 'administrator',
      'coordinator' => 'coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create person content'.
  $permissions['create person content'] = array(
    'name' => 'create person content',
    'roles' => array(
      'administrator' => 'administrator',
      'coordinator' => 'coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create result content'.
  $permissions['create result content'] = array(
    'name' => 'create result content',
    'roles' => array(
      'administrator' => 'administrator',
      'coordinator' => 'coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create simplenews content'.
  $permissions['create simplenews content'] = array(
    'name' => 'create simplenews content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any activity content'.
  $permissions['delete any activity content'] = array(
    'name' => 'delete any activity content',
    'roles' => array(
      'administrator' => 'administrator',
      'coordinator' => 'coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any dexp_portfolio content'.
  $permissions['delete any dexp_portfolio content'] = array(
    'name' => 'delete any dexp_portfolio content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any event_calendar content'.
  $permissions['delete any event_calendar content'] = array(
    'name' => 'delete any event_calendar content',
    'roles' => array(
      'administrator' => 'administrator',
      'coordinator' => 'coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any gtk_blog_post content'.
  $permissions['delete any gtk_blog_post content'] = array(
    'name' => 'delete any gtk_blog_post content',
    'roles' => array(
      'administrator' => 'administrator',
      'coordinator' => 'coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any gtk_simple_page content'.
  $permissions['delete any gtk_simple_page content'] = array(
    'name' => 'delete any gtk_simple_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'coordinator' => 'coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any home_page_slideshow content'.
  $permissions['delete any home_page_slideshow content'] = array(
    'name' => 'delete any home_page_slideshow content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any iparag_elemzes content'.
  $permissions['delete any iparag_elemzes content'] = array(
    'name' => 'delete any iparag_elemzes content',
    'roles' => array(
      'administrator' => 'administrator',
      'coordinator' => 'coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any kontakt content'.
  $permissions['delete any kontakt content'] = array(
    'name' => 'delete any kontakt content',
    'roles' => array(
      'administrator' => 'administrator',
      'coordinator' => 'coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any organizations content'.
  $permissions['delete any organizations content'] = array(
    'name' => 'delete any organizations content',
    'roles' => array(
      'administrator' => 'administrator',
      'coordinator' => 'coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any person content'.
  $permissions['delete any person content'] = array(
    'name' => 'delete any person content',
    'roles' => array(
      'administrator' => 'administrator',
      'coordinator' => 'coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any result content'.
  $permissions['delete any result content'] = array(
    'name' => 'delete any result content',
    'roles' => array(
      'administrator' => 'administrator',
      'coordinator' => 'coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any simplenews content'.
  $permissions['delete any simplenews content'] = array(
    'name' => 'delete any simplenews content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own activity content'.
  $permissions['delete own activity content'] = array(
    'name' => 'delete own activity content',
    'roles' => array(
      'administrator' => 'administrator',
      'coordinator' => 'coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own dexp_portfolio content'.
  $permissions['delete own dexp_portfolio content'] = array(
    'name' => 'delete own dexp_portfolio content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own event_calendar content'.
  $permissions['delete own event_calendar content'] = array(
    'name' => 'delete own event_calendar content',
    'roles' => array(
      'administrator' => 'administrator',
      'coordinator' => 'coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own gtk_blog_post content'.
  $permissions['delete own gtk_blog_post content'] = array(
    'name' => 'delete own gtk_blog_post content',
    'roles' => array(
      'administrator' => 'administrator',
      'coordinator' => 'coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own gtk_simple_page content'.
  $permissions['delete own gtk_simple_page content'] = array(
    'name' => 'delete own gtk_simple_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'coordinator' => 'coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own home_page_slideshow content'.
  $permissions['delete own home_page_slideshow content'] = array(
    'name' => 'delete own home_page_slideshow content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own iparag_elemzes content'.
  $permissions['delete own iparag_elemzes content'] = array(
    'name' => 'delete own iparag_elemzes content',
    'roles' => array(
      'administrator' => 'administrator',
      'coordinator' => 'coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own kontakt content'.
  $permissions['delete own kontakt content'] = array(
    'name' => 'delete own kontakt content',
    'roles' => array(
      'administrator' => 'administrator',
      'coordinator' => 'coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own organizations content'.
  $permissions['delete own organizations content'] = array(
    'name' => 'delete own organizations content',
    'roles' => array(
      'administrator' => 'administrator',
      'coordinator' => 'coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own person content'.
  $permissions['delete own person content'] = array(
    'name' => 'delete own person content',
    'roles' => array(
      'administrator' => 'administrator',
      'coordinator' => 'coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own result content'.
  $permissions['delete own result content'] = array(
    'name' => 'delete own result content',
    'roles' => array(
      'administrator' => 'administrator',
      'coordinator' => 'coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own simplenews content'.
  $permissions['delete own simplenews content'] = array(
    'name' => 'delete own simplenews content',
    'roles' => array(),
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

  // Exported permission: 'edit any activity content'.
  $permissions['edit any activity content'] = array(
    'name' => 'edit any activity content',
    'roles' => array(
      'administrator' => 'administrator',
      'coordinator' => 'coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any dexp_portfolio content'.
  $permissions['edit any dexp_portfolio content'] = array(
    'name' => 'edit any dexp_portfolio content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any event_calendar content'.
  $permissions['edit any event_calendar content'] = array(
    'name' => 'edit any event_calendar content',
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
      'administrator' => 'administrator',
      'coordinator' => 'coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any gtk_simple_page content'.
  $permissions['edit any gtk_simple_page content'] = array(
    'name' => 'edit any gtk_simple_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'coordinator' => 'coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any home_page_slideshow content'.
  $permissions['edit any home_page_slideshow content'] = array(
    'name' => 'edit any home_page_slideshow content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any iparag_elemzes content'.
  $permissions['edit any iparag_elemzes content'] = array(
    'name' => 'edit any iparag_elemzes content',
    'roles' => array(
      'administrator' => 'administrator',
      'coordinator' => 'coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any kontakt content'.
  $permissions['edit any kontakt content'] = array(
    'name' => 'edit any kontakt content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'coordinator' => 'coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any organizations content'.
  $permissions['edit any organizations content'] = array(
    'name' => 'edit any organizations content',
    'roles' => array(
      'administrator' => 'administrator',
      'coordinator' => 'coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any person content'.
  $permissions['edit any person content'] = array(
    'name' => 'edit any person content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'coordinator' => 'coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any result content'.
  $permissions['edit any result content'] = array(
    'name' => 'edit any result content',
    'roles' => array(
      'administrator' => 'administrator',
      'coordinator' => 'coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any simplenews content'.
  $permissions['edit any simplenews content'] = array(
    'name' => 'edit any simplenews content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own activity content'.
  $permissions['edit own activity content'] = array(
    'name' => 'edit own activity content',
    'roles' => array(
      'administrator' => 'administrator',
      'coordinator' => 'coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own dexp_portfolio content'.
  $permissions['edit own dexp_portfolio content'] = array(
    'name' => 'edit own dexp_portfolio content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own event_calendar content'.
  $permissions['edit own event_calendar content'] = array(
    'name' => 'edit own event_calendar content',
    'roles' => array(
      'administrator' => 'administrator',
      'coordinator' => 'coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own gtk_blog_post content'.
  $permissions['edit own gtk_blog_post content'] = array(
    'name' => 'edit own gtk_blog_post content',
    'roles' => array(
      'administrator' => 'administrator',
      'coordinator' => 'coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own gtk_simple_page content'.
  $permissions['edit own gtk_simple_page content'] = array(
    'name' => 'edit own gtk_simple_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'coordinator' => 'coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own home_page_slideshow content'.
  $permissions['edit own home_page_slideshow content'] = array(
    'name' => 'edit own home_page_slideshow content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own iparag_elemzes content'.
  $permissions['edit own iparag_elemzes content'] = array(
    'name' => 'edit own iparag_elemzes content',
    'roles' => array(
      'administrator' => 'administrator',
      'coordinator' => 'coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own kontakt content'.
  $permissions['edit own kontakt content'] = array(
    'name' => 'edit own kontakt content',
    'roles' => array(
      'administrator' => 'administrator',
      'coordinator' => 'coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own organizations content'.
  $permissions['edit own organizations content'] = array(
    'name' => 'edit own organizations content',
    'roles' => array(
      'administrator' => 'administrator',
      'coordinator' => 'coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own person content'.
  $permissions['edit own person content'] = array(
    'name' => 'edit own person content',
    'roles' => array(
      'administrator' => 'administrator',
      'coordinator' => 'coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own result content'.
  $permissions['edit own result content'] = array(
    'name' => 'edit own result content',
    'roles' => array(
      'administrator' => 'administrator',
      'coordinator' => 'coordinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own simplenews content'.
  $permissions['edit own simplenews content'] = array(
    'name' => 'edit own simplenews content',
    'roles' => array(),
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
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
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
      'authenticated user' => 'authenticated user',
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
