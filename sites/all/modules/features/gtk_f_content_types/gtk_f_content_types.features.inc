<?php
/**
 * @file
 * gtk_f_content_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gtk_f_content_types_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function gtk_f_content_types_node_info() {
  $items = array(
    'gtk_blog_post' => array(
      'name' => t('Blog Post'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'gtk_simple_page' => array(
      'name' => t('Simple Page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'organizations' => array(
      'name' => t('Organizations'),
      'base' => 'node_content',
      'description' => t('Describes the partner organizations.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'person' => array(
      'name' => t('Person'),
      'base' => 'node_content',
      'description' => t('This content type is for describing different personnel and partners.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'result' => array(
      'name' => t('Result'),
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
