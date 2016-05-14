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

  $export['block-copyright'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'machine_name' => 'copyright',
    'module' => 'block',
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
        'region' => 'user9',
        'status' => 1,
        'theme' => 'yamato',
        'weight' => -30,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

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
        'region' => '',
        'status' => 0,
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
        'region' => 'page_title',
        'status' => 1,
        'theme' => 'yamato',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['fb_likebox-0'] = array(
    'cache' => -1,
    'css_class' => 'title1 title-left',
    'custom' => 0,
    'delta' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'fb_likebox',
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
        'region' => 'socials_bottom',
        'status' => 1,
        'theme' => 'yamato',
        'weight' => 0,
      ),
    ),
    'title' => 'Közösségi Háló',
    'visibility' => 0,
  );

  $export['gtk_general-contact_form'] = array(
    'cache' => -1,
    'css_class' => 'title1 title-left',
    'custom' => 0,
    'delta' => 'contact_form',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'gtk_general',
    'node_types' => array(),
    'pages' => 'contact',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'yamato' => array(
        'region' => 'user1',
        'status' => 1,
        'theme' => 'yamato',
        'weight' => 0,
      ),
    ),
    'title' => 'Lépjen kapcsolatba velünk',
    'visibility' => 1,
  );

  $export['gtk_general-contact_info'] = array(
    'cache' => -1,
    'css_class' => 'title1 title-left',
    'custom' => 0,
    'delta' => 'contact_info',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'gtk_general',
    'node_types' => array(),
    'pages' => 'contact',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'yamato' => array(
        'region' => 'user2',
        'status' => 1,
        'theme' => 'yamato',
        'weight' => 0,
      ),
    ),
    'title' => 'Elérhetőség',
    'visibility' => 1,
  );

  $export['gtk_general-google_map_block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'google_map_block',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'gtk_general',
    'node_types' => array(),
    'pages' => 'contact',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'yamato' => array(
        'region' => 'action',
        'status' => 1,
        'theme' => 'yamato',
        'weight' => -30,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['gtk_general-latest_news_block'] = array(
    'cache' => -1,
    'css_class' => 'title1 title-left',
    'custom' => 0,
    'delta' => 'latest_news_block',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'gtk_general',
    'node_types' => array(
      0 => 'activity',
      1 => 'gtk_simple_page',
    ),
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
        'region' => 'right_sidebar',
        'status' => 1,
        'theme' => 'yamato',
        'weight' => 0,
      ),
    ),
    'title' => 'Kapcsolódó cikkek',
    'visibility' => 0,
  );

  $export['gtk_general-site_map'] = array(
    'cache' => -1,
    'css_class' => 'title1 title-left',
    'custom' => 0,
    'delta' => 'site_map',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'gtk_general',
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
        'region' => 'copyright',
        'status' => 1,
        'theme' => 'yamato',
        'weight' => 0,
      ),
    ),
    'title' => 'Oldaltérkép',
    'visibility' => 0,
  );

  $export['gtk_general-social_media_menu_link_block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'social_media_menu_link_block',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'gtk_general',
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
        'region' => 'top_right',
        'status' => 1,
        'theme' => 'yamato',
        'weight' => -28,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['gtk_payu-payu_logos'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'payu_logos',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'gtk_payu',
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
        'region' => 'user9',
        'status' => 1,
        'theme' => 'yamato',
        'weight' => -31,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['locale-language'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'language',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'locale',
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
        'region' => 'top_left',
        'status' => 1,
        'theme' => 'yamato',
        'weight' => -28,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['search-form'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'form',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'search',
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
        'region' => 'top_right',
        'status' => 1,
        'theme' => 'yamato',
        'weight' => -29,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['simplenews-0'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'simplenews',
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

  $export['simplenews-10'] = array(
    'cache' => -1,
    'css_class' => 'title1 title-left',
    'custom' => 0,
    'delta' => 10,
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'simplenews',
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
        'region' => 'user6',
        'status' => 1,
        'theme' => 'yamato',
        'weight' => 0,
      ),
    ),
    'title' => 'Hírlevél',
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

  $export['system-main'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'main',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'system',
    'node_types' => array(),
    'pages' => '<front>
node',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'yamato' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'yamato',
        'weight' => -30,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-activities-block'] = array(
    'cache' => -1,
    'css_class' => 'title-center title',
    'custom' => 0,
    'delta' => 'activities-block',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
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
        'region' => 'position',
        'status' => 1,
        'theme' => 'yamato',
        'weight' => 0,
      ),
    ),
    'title' => 'Tevékenységek',
    'visibility' => 1,
  );

  $export['views-blog_posts-block'] = array(
    'cache' => -1,
    'css_class' => 'title-center title',
    'custom' => 0,
    'delta' => 'blog_posts-block',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
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
        'region' => 'latestworks',
        'status' => 1,
        'theme' => 'yamato',
        'weight' => 0,
      ),
    ),
    'title' => 'Aktuális',
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

  $export['views-calendar-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'calendar-block_1',
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

  $export['views-calendar-block_2'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'calendar-block_2',
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

  $export['views-industry_analysis-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'industry_analysis-block_1',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'iparágelemzés
analiză-de-piaţă
market-based-projects',
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
        'weight' => -24,
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
        'weight' => -28,
      ),
    ),
    'title' => '',
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
    'pages' => 'antal-zsolt-alapítvány
fundaţia-antal-zsolt
antal-zsolt-foundation',
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
        'weight' => -29,
      ),
    ),
    'title' => '<none>',
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
        'weight' => -26,
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
        'weight' => -25,
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
        'weight' => -23,
      ),
    ),
    'title' => '',
    'visibility' => 1,
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
        'weight' => -22,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-members-block_7'] = array(
    'cache' => -1,
    'css_class' => 'title1 title-left',
    'custom' => 0,
    'delta' => 'members-block_7',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'lecturers',
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
    'title' => '',
    'visibility' => 1,
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
        'weight' => -27,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-support-block_1'] = array(
    'cache' => -1,
    'css_class' => 'title3 title-center',
    'custom' => 0,
    'delta' => 'support-block_1',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
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
    'title' => 'Partnereink',
    'visibility' => 1,
  );

  $export['views-support-block_main_partner'] = array(
    'cache' => -1,
    'css_class' => 'title1 title-left',
    'custom' => 0,
    'delta' => 'support-block_main_partner',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'partners',
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
        'weight' => -31,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-support-block_partners'] = array(
    'cache' => -1,
    'css_class' => 'title1 title-left',
    'custom' => 0,
    'delta' => 'support-block_partners',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'partners',
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
    'visibility' => 1,
  );

  return $export;
}
