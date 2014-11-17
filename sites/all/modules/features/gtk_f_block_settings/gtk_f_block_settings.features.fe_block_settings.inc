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

  $export['superfish-1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 1,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'superfish',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bootstrap_business' => array(
        'region' => 'navigation',
        'status' => 1,
        'theme' => 'bootstrap_business',
        'weight' => 0,
      ),
      'gtk' => array(
        'region' => 'navigation',
        'status' => 1,
        'theme' => 'gtk',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['views-blog_posts-block_homepage'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'blog_posts-block_homepage',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bootstrap_business' => array(
        'region' => 'content_home',
        'status' => 1,
        'theme' => 'bootstrap_business',
        'weight' => 0,
      ),
      'gtk' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'gtk',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
