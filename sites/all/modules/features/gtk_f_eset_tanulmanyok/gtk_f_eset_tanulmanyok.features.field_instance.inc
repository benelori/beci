<?php
/**
 * @file
 * gtk_f_eset_tanulmanyok.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function gtk_f_eset_tanulmanyok_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-eset_tanulmanyok-body'
  $field_instances['node-eset_tanulmanyok-body'] = array(
    'bundle' => 'eset_tanulmanyok',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Lehet irni egy rovid leirast az esettanulmanyrol, ha szukseg van ra.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Rovid Leiras',
    'required' => 0,
    'settings' => array(
      'display_summary' => 1,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-eset_tanulmanyok-field_elemzes'
  $field_instances['node-eset_tanulmanyok-field_elemzes'] = array(
    'bundle' => 'eset_tanulmanyok',
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
        'weight' => 1,
      ),
      'dexp_portfolio' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_elemzes',
    'label' => 'Eset Tanulmany',
    'required' => 1,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'pdf',
      'max_filesize' => '10 MB',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Eset Tanulmany');
  t('Lehet irni egy rovid leirast az esettanulmanyrol, ha szukseg van ra.');
  t('Rovid Leiras');

  return $field_instances;
}
