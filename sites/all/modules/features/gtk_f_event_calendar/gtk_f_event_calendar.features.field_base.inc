<?php
/**
 * @file
 * gtk_f_event_calendar.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function gtk_f_event_calendar_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'event_calendar_date'.
  $field_bases['event_calendar_date'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'event_calendar_date',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'date',
    'required' => TRUE,
    'settings' => array(
      'enddate' => 1,
      'enddate_required' => 0,
      'granularity' => array(
        'day' => 'day',
        'hour' => 'hour',
        'minute' => 'minute',
        'month' => 'month',
        'second' => 0,
        'year' => 'year',
      ),
      'repeat' => 0,
      'timezone_db' => 'UTC',
      'todate' => 'optional',
      'tz_handling' => 'none',
    ),
    'translatable' => 0,
    'type' => 'datetime',
  );

  // Exported field_base: 'event_calendar_status'.
  $field_bases['event_calendar_status'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'event_calendar_status',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'label' => 'Status',
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'event_calendar_status',
          'parent' => 0,
        ),
      ),
      'options_list_callback' => 'i18n_taxonomy_allowed_values',
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  return $field_bases;
}
