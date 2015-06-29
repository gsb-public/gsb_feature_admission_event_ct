<?php
/**
 * @file
 * gsb_feature_admission_event_ct.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function gsb_feature_admission_event_ct_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|admission_event|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'admission_event';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h2',
        'class' => '',
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
        'conditions' => array(),
      ),
    ),
    'field_editorial_summary' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_event_date' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_event_location' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_time_zone' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|admission_event|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function gsb_feature_admission_event_ct_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|admission_event|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'admission_event';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_event_date',
        1 => 'field_time_zone',
        2 => 'title',
        3 => 'field_editorial_summary',
        4 => 'field_event_location',
        5 => 'field_body',
        6 => 'field_event_speakers',
        7 => 'field_link_event_more_info',
        8 => 'field_link_single',
        9 => 'field_region',
        10 => 'field_date',
        11 => 'field_date_time',
        12 => 'field_register_url',
        13 => 'field_person_ref',
        14 => 'field_person_title',
        15 => 'field_email',
        16 => 'field_schedule',
      ),
    ),
    'fields' => array(
      'field_event_date' => 'ds_content',
      'field_time_zone' => 'ds_content',
      'title' => 'ds_content',
      'field_editorial_summary' => 'ds_content',
      'field_event_location' => 'ds_content',
      'field_body' => 'ds_content',
      'field_event_speakers' => 'ds_content',
      'field_link_event_more_info' => 'ds_content',
      'field_link_single' => 'ds_content',
      'field_region' => 'ds_content',
      'field_date' => 'ds_content',
      'field_date_time' => 'ds_content',
      'field_register_url' => 'ds_content',
      'field_person_ref' => 'ds_content',
      'field_person_title' => 'ds_content',
      'field_email' => 'ds_content',
      'field_schedule' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|admission_event|default'] = $ds_layout;

  return $export;
}
