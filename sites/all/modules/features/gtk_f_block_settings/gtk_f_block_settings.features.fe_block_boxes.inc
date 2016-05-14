<?php
/**
 * @file
 * gtk_f_block_settings.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function gtk_f_block_settings_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Contains the copyright footer message';
  $fe_block_boxes->format = 'plain_text';
  $fe_block_boxes->machine_name = 'copyright';
  $fe_block_boxes->body = 'GTK - Gazdasági Tanácsadó Klub, Copyright 2015
';

  $export['copyright'] = $fe_block_boxes;

  return $export;
}
