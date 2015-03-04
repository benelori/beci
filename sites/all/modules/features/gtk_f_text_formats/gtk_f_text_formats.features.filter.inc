<?php
/**
 * @file
 * gtk_f_text_formats.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function gtk_f_text_formats_filter_default_formats() {
  $formats = array();

  // Exported format: Filtered HTML.
  $formats['filtered_html'] = array(
    'format' => 'filtered_html',
    'name' => 'Filtered HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_html' => array(
        'weight' => 1,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd> <p> <u>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_url' => array(
        'weight' => 1,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_autop' => array(
        'weight' => 2,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Full HTML.
  $formats['full_html'] = array(
    'format' => 'full_html',
    'name' => 'Full HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_url' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'shortcode' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'box' => 1,
          'animate' => 1,
          'button' => 1,
          'skillbar' => 1,
          'piegraph' => 1,
          'carousels' => 1,
          'carousel' => 1,
          'title' => 1,
          'embeded' => 1,
          'stats' => 1,
          'accordions' => 1,
          'accordion' => 1,
          'icon' => 1,
          'flipbox' => 1,
          'tabs' => 1,
          'tab' => 1,
          'column' => 1,
          'social' => 1,
          'testimonials' => 1,
          'testimonial' => 1,
          'rating' => 1,
          'maps' => 1,
          'bxslider' => 1,
          'bxitem' => 1,
          'feature' => 1,
          'video' => 1,
          'piechart' => 1,
          'geochart' => 1,
          'linechart' => 1,
          'barchart' => 1,
          'areachart' => 1,
        ),
      ),
      'shortcode_text_corrector' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_autop' => array(
        'weight' => 1,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
