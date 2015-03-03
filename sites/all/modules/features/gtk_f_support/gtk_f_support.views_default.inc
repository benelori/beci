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
  $handler->display->display_options['title'] = 'Partnereink';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'dexp_grid2';
  $handler->display->display_options['style_options']['grid_bootstrap'] = '0';
  $handler->display->display_options['style_options']['grid_cols_lg'] = '3';
  $handler->display->display_options['style_options']['grid_cols_md'] = '3';
  $handler->display->display_options['style_options']['grid_cols_sm'] = '6';
  $handler->display->display_options['style_options']['grid_cols_xs'] = '12';
  $handler->display->display_options['style_options']['grid_margin'] = '10';
  $handler->display->display_options['style_options']['grid_itemWidth'] = '360';
  $handler->display->display_options['style_options']['grid_itemHeight'] = '220';
  $handler->display->display_options['style_options']['grid_phoneWidth'] = '768';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Organization Logo */
  $handler->display->display_options['fields']['field_organization_logo']['id'] = 'field_organization_logo';
  $handler->display->display_options['fields']['field_organization_logo']['table'] = 'field_data_field_organization_logo';
  $handler->display->display_options['fields']['field_organization_logo']['field'] = 'field_organization_logo';
  $handler->display->display_options['fields']['field_organization_logo']['label'] = '';
  $handler->display->display_options['fields']['field_organization_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_organization_logo']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
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
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Support */
  $handler = $view->new_display('page', 'Support', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Support';
  $handler->display->display_options['path'] = 'support';

  /* Display: Partners */
  $handler = $view->new_display('page', 'Partners', 'page_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Organization Logo */
  $handler->display->display_options['fields']['field_organization_logo']['id'] = 'field_organization_logo';
  $handler->display->display_options['fields']['field_organization_logo']['table'] = 'field_data_field_organization_logo';
  $handler->display->display_options['fields']['field_organization_logo']['field'] = 'field_organization_logo';
  $handler->display->display_options['fields']['field_organization_logo']['label'] = '';
  $handler->display->display_options['fields']['field_organization_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_organization_logo']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
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
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  /* Filter criterion: Content: Is Partner (field_is_partner) */
  $handler->display->display_options['filters']['field_is_partner_value']['id'] = 'field_is_partner_value';
  $handler->display->display_options['filters']['field_is_partner_value']['table'] = 'field_data_field_is_partner';
  $handler->display->display_options['filters']['field_is_partner_value']['field'] = 'field_is_partner_value';
  $handler->display->display_options['filters']['field_is_partner_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'partners';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Partnereink';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'dexp_bxslider';
  $handler->display->display_options['style_options']['speed'] = '500';
  $handler->display->display_options['style_options']['touchEnabled'] = '1';
  $handler->display->display_options['style_options']['auto'] = '0';
  $handler->display->display_options['style_options']['pause'] = '4000';
  $handler->display->display_options['style_options']['infiniteloop'] = '1';
  $handler->display->display_options['style_options']['slidemargin'] = '0';
  $handler->display->display_options['style_options']['startslide'] = '0';
  $handler->display->display_options['style_options']['randomstart'] = '0';
  $handler->display->display_options['style_options']['pager'] = '1';
  $handler->display->display_options['style_options']['controls'] = '1';
  $handler->display->display_options['style_options']['minslides'] = '4';
  $handler->display->display_options['style_options']['maxslides'] = '4';
  $handler->display->display_options['style_options']['moveslides'] = '4';
  $handler->display->display_options['style_options']['slidewidth'] = '190';
  $handler->display->display_options['style_options']['rows'] = '1';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
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
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  /* Filter criterion: Content: Is Partner (field_is_partner) */
  $handler->display->display_options['filters']['field_is_partner_value']['id'] = 'field_is_partner_value';
  $handler->display->display_options['filters']['field_is_partner_value']['table'] = 'field_data_field_is_partner';
  $handler->display->display_options['filters']['field_is_partner_value']['field'] = 'field_is_partner_value';
  $handler->display->display_options['filters']['field_is_partner_value']['value'] = array(
    1 => '1',
  );
  $translatables['support'] = array(
    t('Master'),
    t('Partnereink'),
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
    t('Support'),
    t('Partners'),
    t('Block'),
  );
  $export['support'] = $view;

  return $export;
}
