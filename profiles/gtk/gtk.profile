<?php

/**
 * @file
 * Enables modules and site configuration for a standard site installation.
 */

/**
 * Implements hook_install_tasks().
 */
function gtk_install_tasks($install_state) {
  // List of tasks which should run while the site install.
  $tasks = array(
    'gtk_revert_features' => array(
      'display_name' => st('Revert Features'),
      'type' => 'normal',
    ),
  );
  return $tasks;
}

/**
 * Revert features on install.
 */
function gtk_revert_features() {
  // Feature revert on site install.
  $features = array(
    'gtk_f_block_settings' => array('fe_block_settings'),
  );

  gtk_features_revert($features);
}

/**
 * Revert components of the given features.
 */
function gtk_features_revert($modules) {
  $items = array();
  // Process modules.
  foreach ($modules as $module => $components_needed) {
    if (($feature = feature_load($module, TRUE)) && module_exists($module)) {
      $components = array();
      // Forcefully revert all components of a feature.
      foreach (array_keys($feature->info['features']) as $component) {
        if (features_hook($component, 'features_revert')) {
          $components[] = $component;
        }
      }

      if (!empty($components_needed) && is_array($components_needed)) {
        $components = array_intersect($components, $components_needed);
      }
      if (!empty($components)) {
        $items[$module] = $components;
      }
    }
  }

  if (!empty($items)) {
    features_revert($items);
  }
}
