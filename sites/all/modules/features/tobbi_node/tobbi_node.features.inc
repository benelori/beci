<?php
/**
 * @file
 * tobbi_node.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tobbi_node_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
