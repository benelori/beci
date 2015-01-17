<?php
/**
 * @file
 * gtk_f_block_settings.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function gtk_f_block_settings_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['dexp_layerslider-dexp_layerslider_block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'dexp_layerslider_block_1',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'dexp_layerslider',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'yamato' => array(
        'region' => 'banner',
        'status' => 1,
        'theme' => 'yamato',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['dexp_menu-dexp_menu_block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'dexp_menu_block_1',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'dexp_menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'yamato' => array(
        'region' => 'navigation',
        'status' => 1,
        'theme' => 'yamato',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['dexp_page_elements-dexp_page_elements_breadcrumb'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'dexp_page_elements_breadcrumb',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'dexp_page_elements',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'yamato' => array(
        'region' => 'breadcrumb',
        'status' => 1,
        'theme' => 'yamato',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['dexp_page_elements-dexp_page_elements_page_title'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'dexp_page_elements_page_title',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'dexp_page_elements',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'yamato' => array(
        'region' => 'page_title',
        'status' => 1,
        'theme' => 'yamato',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['superfish-1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 1,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'superfish',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'yamato' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'yamato',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['views-blog_posts-block'] = array(
    'cache' => -1,
    'css_class' => 'title-center title',
    'custom' => 0,
    'delta' => 'blog_posts-block',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'yamato' => array(
        'region' => 'latestnews',
        'status' => 1,
        'theme' => 'yamato',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-blog_posts-block_homepage'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'blog_posts-block_homepage',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'yamato' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'yamato',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-home_page_slideshow-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'home_page_slideshow-block_1',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'yamato' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'yamato',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views-members-block_1'] = array(
    'cache' => -1,
    'css_class' => 'title1 title-left',
    'custom' => 0,
    'delta' => 'members-block_1',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'coordinators',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'yamato' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'yamato',
        'weight' => -20,
      ),
    ),
    'title' => 'Coordinators',
    'visibility' => 1,
  );

  $export['views-members-block_2'] = array(
    'cache' => -1,
    'css_class' => 'title1 title-left',
    'custom' => 0,
    'delta' => 'members-block_2',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'coordinators',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'yamato' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'yamato',
        'weight' => -21,
      ),
    ),
    'title' => 'Strategic, professional supporter and coordinator',
    'visibility' => 1,
  );

  $export['views-members-block_3'] = array(
    'cache' => -1,
    'css_class' => 'title1 title-left',
    'custom' => 0,
    'delta' => 'members-block_3',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'members',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'yamato' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'yamato',
        'weight' => -18,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-members-block_4'] = array(
    'cache' => -1,
    'css_class' => 'title1 title-left',
    'custom' => 0,
    'delta' => 'members-block_4',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'members',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'yamato' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'yamato',
        'weight' => -17,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-members-block_5'] = array(
    'cache' => -1,
    'css_class' => 'title1 title-left',
    'custom' => 0,
    'delta' => 'members-block_5',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'alumni',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'yamato' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'yamato',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-members-block_6'] = array(
    'cache' => -1,
    'css_class' => 'title1 title-left',
    'custom' => 0,
    'delta' => 'members-block_6',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'highschool-alumni',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'yamato' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'yamato',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-members-manager'] = array(
    'cache' => -1,
    'css_class' => 'title1 title-left',
    'custom' => 0,
    'delta' => 'members-manager',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'coordinators',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'yamato' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'yamato',
        'weight' => -19,
      ),
    ),
    'title' => 'Manager',
    'visibility' => 1,
  );

  $export['views-support-block_1'] = array(
    'cache' => -1,
    'css_class' => 'title3 title-center',
    'custom' => 0,
    'delta' => 'support-block_1',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'yamato' => array(
        'region' => 'clients',
        'status' => 1,
        'theme' => 'yamato',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
