<?php
/**
 * @file
 * iparag_elemzes_es_kontakt_nodes.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function iparag_elemzes_es_kontakt_nodes_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
