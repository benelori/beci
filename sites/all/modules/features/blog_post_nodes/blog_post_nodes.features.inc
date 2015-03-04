<?php
/**
 * @file
 * blog_post_nodes.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function blog_post_nodes_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
