<?php
/**
 * @file
 * gtk_f_kontakt_lista.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gtk_f_kontakt_lista_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'kontakt_lista';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Kontakt Lista';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Kontakt Lista';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_email' => 'field_email',
    'field_telefonszam' => 'field_telefonszam',
    'field_lakhely' => 'field_lakhely',
    'field_statusz' => 'field_statusz',
    'field_tagsag_kezdete' => 'field_tagsag_kezdete',
    'field_szenior_tagsag_kezdete' => 'field_szenior_tagsag_kezdete',
    'field_alumni_tagsag_kezdete' => 'field_alumni_tagsag_kezdete',
    'field_munkahely' => 'field_munkahely',
    'field_betoltott_pozicio' => 'field_betoltott_pozicio',
    'field_iparag' => 'field_iparag',
    'field_bsc_szakirany' => 'field_bsc_szakirany',
    'field_msc_szakirany' => 'field_msc_szakirany',
    'field_korabbi_munkahelyek' => 'field_korabbi_munkahelyek',
    'field_megjegyzes' => 'field_megjegyzes',
    'field_tovabbi_informacio' => 'field_tovabbi_informacio',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_telefonszam' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_lakhely' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_statusz' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tagsag_kezdete' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_szenior_tagsag_kezdete' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_alumni_tagsag_kezdete' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_munkahely' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_betoltott_pozicio' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_iparag' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_bsc_szakirany' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_msc_szakirany' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_korabbi_munkahelyek' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_megjegyzes' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tovabbi_informacio' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  /* Field: Content: Telefonszam */
  $handler->display->display_options['fields']['field_telefonszam']['id'] = 'field_telefonszam';
  $handler->display->display_options['fields']['field_telefonszam']['table'] = 'field_data_field_telefonszam';
  $handler->display->display_options['fields']['field_telefonszam']['field'] = 'field_telefonszam';
  /* Field: Content: Lakhely */
  $handler->display->display_options['fields']['field_lakhely']['id'] = 'field_lakhely';
  $handler->display->display_options['fields']['field_lakhely']['table'] = 'field_data_field_lakhely';
  $handler->display->display_options['fields']['field_lakhely']['field'] = 'field_lakhely';
  /* Field: Content: Statusz */
  $handler->display->display_options['fields']['field_statusz']['id'] = 'field_statusz';
  $handler->display->display_options['fields']['field_statusz']['table'] = 'field_data_field_statusz';
  $handler->display->display_options['fields']['field_statusz']['field'] = 'field_statusz';
  /* Field: Content: Tagsag Kezdete */
  $handler->display->display_options['fields']['field_tagsag_kezdete']['id'] = 'field_tagsag_kezdete';
  $handler->display->display_options['fields']['field_tagsag_kezdete']['table'] = 'field_data_field_tagsag_kezdete';
  $handler->display->display_options['fields']['field_tagsag_kezdete']['field'] = 'field_tagsag_kezdete';
  /* Field: Content: Szenior Tagsag Kezdete */
  $handler->display->display_options['fields']['field_szenior_tagsag_kezdete']['id'] = 'field_szenior_tagsag_kezdete';
  $handler->display->display_options['fields']['field_szenior_tagsag_kezdete']['table'] = 'field_data_field_szenior_tagsag_kezdete';
  $handler->display->display_options['fields']['field_szenior_tagsag_kezdete']['field'] = 'field_szenior_tagsag_kezdete';
  $handler->display->display_options['fields']['field_szenior_tagsag_kezdete']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Alumni Tagsag Kezdete */
  $handler->display->display_options['fields']['field_alumni_tagsag_kezdete']['id'] = 'field_alumni_tagsag_kezdete';
  $handler->display->display_options['fields']['field_alumni_tagsag_kezdete']['table'] = 'field_data_field_alumni_tagsag_kezdete';
  $handler->display->display_options['fields']['field_alumni_tagsag_kezdete']['field'] = 'field_alumni_tagsag_kezdete';
  $handler->display->display_options['fields']['field_alumni_tagsag_kezdete']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Munkahely */
  $handler->display->display_options['fields']['field_munkahely']['id'] = 'field_munkahely';
  $handler->display->display_options['fields']['field_munkahely']['table'] = 'field_data_field_munkahely';
  $handler->display->display_options['fields']['field_munkahely']['field'] = 'field_munkahely';
  /* Field: Content: Betoltott Pozicio */
  $handler->display->display_options['fields']['field_betoltott_pozicio']['id'] = 'field_betoltott_pozicio';
  $handler->display->display_options['fields']['field_betoltott_pozicio']['table'] = 'field_data_field_betoltott_pozicio';
  $handler->display->display_options['fields']['field_betoltott_pozicio']['field'] = 'field_betoltott_pozicio';
  /* Field: Content: Iparag */
  $handler->display->display_options['fields']['field_iparag']['id'] = 'field_iparag';
  $handler->display->display_options['fields']['field_iparag']['table'] = 'field_data_field_iparag';
  $handler->display->display_options['fields']['field_iparag']['field'] = 'field_iparag';
  /* Field: Content: BSc Szakirany */
  $handler->display->display_options['fields']['field_bsc_szakirany']['id'] = 'field_bsc_szakirany';
  $handler->display->display_options['fields']['field_bsc_szakirany']['table'] = 'field_data_field_bsc_szakirany';
  $handler->display->display_options['fields']['field_bsc_szakirany']['field'] = 'field_bsc_szakirany';
  /* Field: Content: MSc Szakirany */
  $handler->display->display_options['fields']['field_msc_szakirany']['id'] = 'field_msc_szakirany';
  $handler->display->display_options['fields']['field_msc_szakirany']['table'] = 'field_data_field_msc_szakirany';
  $handler->display->display_options['fields']['field_msc_szakirany']['field'] = 'field_msc_szakirany';
  /* Field: Content: Korabbi Munkahelyek */
  $handler->display->display_options['fields']['field_korabbi_munkahelyek']['id'] = 'field_korabbi_munkahelyek';
  $handler->display->display_options['fields']['field_korabbi_munkahelyek']['table'] = 'field_data_field_korabbi_munkahelyek';
  $handler->display->display_options['fields']['field_korabbi_munkahelyek']['field'] = 'field_korabbi_munkahelyek';
  /* Field: Content: Megjegyzes */
  $handler->display->display_options['fields']['field_megjegyzes']['id'] = 'field_megjegyzes';
  $handler->display->display_options['fields']['field_megjegyzes']['table'] = 'field_data_field_megjegyzes';
  $handler->display->display_options['fields']['field_megjegyzes']['field'] = 'field_megjegyzes';
  /* Field: Content: Tovabbi Informacio */
  $handler->display->display_options['fields']['field_tovabbi_informacio']['id'] = 'field_tovabbi_informacio';
  $handler->display->display_options['fields']['field_tovabbi_informacio']['table'] = 'field_data_field_tovabbi_informacio';
  $handler->display->display_options['fields']['field_tovabbi_informacio']['field'] = 'field_tovabbi_informacio';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'kontakt' => 'kontakt',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'kontakt-lista';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Kontakt Lista';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $translatables['kontakt_lista'] = array(
    t('Master'),
    t('Kontakt Lista'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Email'),
    t('Telefonszam'),
    t('Lakhely'),
    t('Statusz'),
    t('Tagsag Kezdete'),
    t('Szenior Tagsag Kezdete'),
    t('Alumni Tagsag Kezdete'),
    t('Munkahely'),
    t('Betoltott Pozicio'),
    t('Iparag'),
    t('BSc Szakirany'),
    t('MSc Szakirany'),
    t('Korabbi Munkahelyek'),
    t('Megjegyzes'),
    t('Tovabbi Informacio'),
    t('Page'),
  );
  $export['kontakt_lista'] = $view;

  return $export;
}
