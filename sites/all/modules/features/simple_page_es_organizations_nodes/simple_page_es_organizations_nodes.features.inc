<?php
/**
 * @file
 * simple_page_es_organizations_nodes.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function simple_page_es_organizations_nodes_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
