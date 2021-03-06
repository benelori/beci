<?php
/**
 * @file
 * gtk_f_event_calendar.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gtk_f_event_calendar_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function gtk_f_event_calendar_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function gtk_f_event_calendar_node_info() {
  $items = array(
    'event_calendar' => array(
      'name' => t('Eseménynaptár'),
      'base' => 'node_content',
      'description' => t('A content type to create events for calendar.'),
      'has_title' => '1',
      'title_label' => t('Event Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
