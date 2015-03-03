<?php
/**
 * @file
 * person_node_meszaros_csabaig.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function person_node_meszaros_csabaig_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
