<?php
/**
 * @file
 * gtk_f_general_settings.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function gtk_f_general_settings_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: node:activity.
  $config['node:activity'] = array(
    'instance' => 'node:activity',
    'config' => array(
      'news_keywords' => array(
        'value' => '[node:title]',
      ),
      'image_src' => array(
        'value' => '[node:field_image]',
      ),
      'og:image' => array(
        'value' => '[node:field_image]',
      ),
    ),
  );

  // Exported Metatag config instance: node:gtk_blog_post.
  $config['node:gtk_blog_post'] = array(
    'instance' => 'node:gtk_blog_post',
    'config' => array(
      'news_keywords' => array(
        'value' => '[node:title]',
      ),
    ),
  );

  return $config;
}
