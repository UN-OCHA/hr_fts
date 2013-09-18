<?php
/**
 * @file
 * hr_fts.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function hr_fts_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'funding_chart_per_term';
  $view->description = 'Funding status per term';
  $view->tag = 'default';
  $view->base_table = 'bean';
  $view->human_name = 'Funding chart per term';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Funding status';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Block: Internal, numeric block ID */
  $handler->display->display_options['fields']['bid']['id'] = 'bid';
  $handler->display->display_options['fields']['bid']['table'] = 'bean';
  $handler->display->display_options['fields']['bid']['field'] = 'bid';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'default';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Block: Display on these pages (field_display_on_these_pages) */
  $handler->display->display_options['arguments']['field_display_on_these_pages_target_id']['id'] = 'field_display_on_these_pages_target_id';
  $handler->display->display_options['arguments']['field_display_on_these_pages_target_id']['table'] = 'field_data_field_display_on_these_pages';
  $handler->display->display_options['arguments']['field_display_on_these_pages_target_id']['field'] = 'field_display_on_these_pages_target_id';
  $handler->display->display_options['arguments']['field_display_on_these_pages_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_display_on_these_pages_target_id']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_display_on_these_pages_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_display_on_these_pages_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_display_on_these_pages_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_display_on_these_pages_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_display_on_these_pages_target_id']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $translatables['funding_chart_per_term'] = array(
    t('Master'),
    t('Funding status'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Internal, numeric block ID'),
    t('.'),
    t(','),
    t('Block'),
    t('All'),
  );
  $export['funding_chart_per_term'] = $view;

  return $export;
}
