<?php
/**
 * @file
 * gtk_f_event_calendar.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function gtk_f_event_calendar_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['gtk_general-homepage_calendar_link'] = array(
    'cache' => -1,
    'css_class' => 'gtk-block-calendar-button',
    'custom' => 0,
    'delta' => 'homepage_calendar_link',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'gtk_general',
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
        'region' => 'action',
        'status' => 1,
        'theme' => 'yamato',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-home_page_calendar-block'] = array(
    'cache' => -1,
    'css_class' => 'title-center title',
    'custom' => 0,
    'delta' => 'home_page_calendar-block',
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
        'region' => 'action',
        'status' => 1,
        'theme' => 'yamato',
        'weight' => -30,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
