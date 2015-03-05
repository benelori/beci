<?php
/**
 * @file
 * gtk_f_private_videos.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function gtk_f_private_videos_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_private_video'
  $field_bases['field_private_video'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_private_video',
    'foreign keys' => array(),
    'indexes' => array(
      'video_id' => array(
        0 => 'video_id',
      ),
    ),
    'locked' => 0,
    'module' => 'youtube',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'youtube',
  );

  return $field_bases;
}
