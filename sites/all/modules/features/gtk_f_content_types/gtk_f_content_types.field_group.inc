<?php
/**
 * @file
 * gtk_f_content_types.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gtk_f_content_types_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_competitions|node|result|form';
  $field_group->group_name = 'group_competitions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'result';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'competitions',
    'weight' => '8',
    'children' => array(
      0 => 'field_competitions_result',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'competitions',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-competitions field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_competitions|node|result|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_conference|node|result|form';
  $field_group->group_name = 'group_conference';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'result';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'conference',
    'weight' => '11',
    'children' => array(
      0 => 'field_management_conference',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'conference',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-conference field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_conference|node|result|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_etdk|node|result|form';
  $field_group->group_name = 'group_etdk';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'result';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'etdk',
    'weight' => '6',
    'children' => array(
      0 => 'field_etdk_result',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'etdk',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-etdk field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_etdk|node|result|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_highschool|node|result|form';
  $field_group->group_name = 'group_highschool';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'result';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'highschool',
    'weight' => '12',
    'children' => array(
      0 => 'field_highschool_program',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'highschool',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-highschool field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_highschool|node|result|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_lecturers|node|result|form';
  $field_group->group_name = 'group_lecturers';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'result';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'lecturers',
    'weight' => '9',
    'children' => array(
      0 => 'field_lecturers_list',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'lecturers',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-lecturers field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_lecturers|node|result|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_otdk|node|result|form';
  $field_group->group_name = 'group_otdk';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'result';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'otdk',
    'weight' => '7',
    'children' => array(
      0 => 'field_otdk_result',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'otdk',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-otdk field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_otdk|node|result|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_shadowing|node|result|form';
  $field_group->group_name = 'group_shadowing';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'result';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'shadowing',
    'weight' => '10',
    'children' => array(
      0 => 'field_management_shadowing',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'shadowing',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-shadowing field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_shadowing|node|result|form'] = $field_group;

  return $export;
}
