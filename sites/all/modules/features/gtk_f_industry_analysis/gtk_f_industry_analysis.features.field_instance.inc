<?php
/**
 * @file
 * gtk_f_industry_analysis.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function gtk_f_industry_analysis_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-iparag_elemzes-field_elemzes'
  $field_instances['node-iparag_elemzes-field_elemzes'] = array(
    'bundle' => 'iparag_elemzes',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'pdf',
        'settings' => array(
          'height' => '600px',
          'keep_pdfjs' => 1,
          'width' => '600px',
        ),
        'type' => 'pdf_default',
        'weight' => 0,
      ),
      'dexp_portfolio' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'media',
        'settings' => array(),
        'type' => 'media_large_icon',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_elemzes',
    'label' => 'Elemzes',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'txt pdf',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'allowed_schemes' => array(
          'public' => 'public',
          'vimeo' => 0,
          'youtube' => 0,
        ),
        'allowed_types' => array(
          'audio' => 0,
          'default' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 41,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Elemzes');

  return $field_instances;
}
