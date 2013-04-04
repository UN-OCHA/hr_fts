<?php
/**
 * @file
 * hr_fts.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function hr_fts_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'bean-fts_highcharts-title_field'
  $field_instances['bean-fts_highcharts-title_field'] = array(
    'bundle' => 'fts_highcharts',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The Title of the block.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'title_field',
    'label' => 'Title',
    'required' => FALSE,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'hide_label' => array(
        'entity' => FALSE,
        'page' => FALSE,
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -5,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('The Title of the block.');
  t('Title');

  return $field_instances;
}
