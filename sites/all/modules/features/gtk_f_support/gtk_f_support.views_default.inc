<?php
/**
 * @file
 * gtk_f_support.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gtk_f_support_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'support';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Support';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Support';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Organization Logo */
  $handler->display->display_options['fields']['field_organization_logo']['id'] = 'field_organization_logo';
  $handler->display->display_options['fields']['field_organization_logo']['table'] = 'field_data_field_organization_logo';
  $handler->display->display_options['fields']['field_organization_logo']['field'] = 'field_organization_logo';
  $handler->display->display_options['fields']['field_organization_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_organization_logo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'organizations' => 'organizations',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'support';

  /* Display: Partners */
  $handler = $view->new_display('page', 'Partners', 'page_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Organization Logo */
  $handler->display->display_options['fields']['field_organization_logo']['id'] = 'field_organization_logo';
  $handler->display->display_options['fields']['field_organization_logo']['table'] = 'field_data_field_organization_logo';
  $handler->display->display_options['fields']['field_organization_logo']['field'] = 'field_organization_logo';
  $handler->display->display_options['fields']['field_organization_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_organization_logo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'organizations' => 'organizations',
  );
  /* Filter criterion: Content: Is Partner (field_is_partner) */
  $handler->display->display_options['filters']['field_is_partner_value']['id'] = 'field_is_partner_value';
  $handler->display->display_options['filters']['field_is_partner_value']['table'] = 'field_data_field_is_partner';
  $handler->display->display_options['filters']['field_is_partner_value']['field'] = 'field_is_partner_value';
  $handler->display->display_options['filters']['field_is_partner_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'partners';
  $translatables['support'] = array(
    t('Master'),
    t('Support'),
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
    t('Organization Logo'),
    t('Page'),
    t('Partners'),
  );
  $export['support'] = $view;

  return $export;
}
