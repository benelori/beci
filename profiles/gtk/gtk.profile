<?php

/**
 * @file
 * Enables modules and site configuration for a standard site installation.
 */

/**
 * Implements hook_install_tasks().
 */
function idtgv_profile_install_tasks($install_state) {
  // List of tasks which should run while the site install.
  $tasks = array(
    'idtgv_profile_revert_features' => array(
      'display_name' => st('Revert Features'),
      'type' => 'normal',
    ),
    'idtgv_profile_add_template_preview' => array(
      'display_name' => st('Add Image to Templates'),
      'type' => 'normal',
    ),
    'idtgv_profile_set_default_timezone' => array(
      'display_name' => st('Sets default timezone'),
      'type' => 'normal',
    ),
  );
  return $tasks;
}

/**
 * Revert features on install.
 */
function idtgv_profile_revert_features() {
  // Feature revert on site install.
  $features = array(
    'idtgv_f_block_settings' => array('fe_block_settings'),
    'idtgv_f_user_roles' => array('user_permission'),
    'idtgv_f_conditional_fields' => array('conditional_fields'),
  );
  // idtgv_f_conditional_fields also needs rebuild to revert correctly.
  // By some unexpected reason conditional fields feature doesn't want to revert
  // with only one revert, and needs a features_rebuild() beforehand.
  $rebuild = array(
    'idtgv_f_conditional_fields' => array('conditional_fields'),
  );
  features_rebuild($rebuild);
  idtgv_profile_features_revert($features);
}

/**
 * Revert components of the given features.
 */
function idtgv_profile_features_revert($modules) {
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

/**
 * Adds preview images to WYSIWYG templates.
 */
function idtgv_profile_add_template_preview() {

  // Settings array that contains template name and image name pairs.
  $template_settings = array(
    'idservices' => array(
      'template_text_left_image' => 'idservices_image_left',
      'template_text_right_image' => 'idservices_image_right',
      'template_2_block_image_and_text' => 'idservices_2_images',
      'template_video_block' => 'idservices_video',
      'template_4_images_1_big_image' => 'idservices_4_images_and_1',
      'template_text_and_4_images' => 'idservices_4_images',
    ),
    'idarticle' => array(
      'text_left_image_article' => 'idarticle_image_left',
      'text_right_image_article' => 'idarticle_image_right',
      'video_block_article' => 'idarticle_video',
      'table_article' => 'idarticle_table',
      '2_images_template_article' => 'idarticle_2_image',
    ),
    'idestinations' => array(
      'text_left_destination' => 'idestinations_text_left',
    ),
    'idactus' => array(
      'actus_bloc_texte' => 'idactus_bloc_text',
    ),
  );

  // Uploads the files and adds them to the templates.
  foreach($template_settings as $content_type => $templates) {
    foreach ($templates as $template => $file_name) {
      $current_template = wysiwyg_template_load($template);
      if (isset($current_template)) {
        $directory =  file_default_scheme() . '://';
        // Prepare the directory.
        file_prepare_directory($directory, FILE_CREATE_DIRECTORY);
        // Gets the source file.
        $source = file_get_contents(drupal_get_path('profile', 'idtgv_profile') . '/img/template_preview/' . $file_name . '.png');
        // Gets the destination directory.
        $destination = file_stream_wrapper_uri_normalize($directory . '/' . $file_name . '.png');
        // Saves source file to the destination.
        if ($file = file_save_data($source, $destination, FILE_EXISTS_REPLACE)) {
          file_usage_add($file, 'idtgv_general', 'idtgv_general', $file->fid);
          $current_template['fid'] = $file->fid;
          $current_template['content_types'] = array(
            $content_type => $content_type,
          );
          wysiwyg_template_save_template($current_template);
        }
      }
    }
  }
}

/**
 * Sets default timezone.
 */
function idtgv_profile_set_default_timezone() {
  variable_set('date_default_timezone', 'Europe/Paris');
}
