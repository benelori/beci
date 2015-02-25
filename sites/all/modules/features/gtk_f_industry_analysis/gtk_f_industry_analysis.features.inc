<?php
/**
 * @file
 * gtk_f_industry_analysis.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gtk_f_industry_analysis_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function gtk_f_industry_analysis_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function gtk_f_industry_analysis_node_info() {
  $items = array(
    'iparag_elemzes' => array(
      'name' => t('Iparag Elemzes'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
