<?php
/**
 * @file
 * gsb_feature_admission_event_ct.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gsb_feature_admission_event_ct_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_additional_topics|node|admission_event|form';
  $field_group->group_name = 'group_additional_topics';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'admission_event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_wrapper_event';
  $field_group->data = array(
    'label' => 'Additional Topics',
    'weight' => '29',
    'children' => array(
      0 => 'field_business_insight_topic',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_additional_topics|node|admission_event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact|node|admission_event|form';
  $field_group->group_name = 'group_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'admission_event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_wrapper_event';
  $field_group->data = array(
    'label' => 'Contact Information',
    'weight' => '29',
    'children' => array(
      0 => 'field_person_title',
      1 => 'field_email',
      2 => 'field_person_ref',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_contact|node|admission_event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_description|node|admission_event|form';
  $field_group->group_name = 'group_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'admission_event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_wrapper_event';
  $field_group->data = array(
    'label' => 'Description',
    'weight' => '25',
    'children' => array(
      0 => 'field_body',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_description|node|admission_event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_keywords|node|admission_event|form';
  $field_group->group_name = 'group_keywords';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'admission_event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_wrapper_event';
  $field_group->data = array(
    'label' => 'Keyword',
    'weight' => '32',
    'children' => array(
      0 => 'field_tag',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_keywords|node|admission_event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_locations|node|admission_event|form';
  $field_group->group_name = 'group_locations';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'admission_event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_wrapper_event';
  $field_group->data = array(
    'label' => 'Locations',
    'weight' => '24',
    'children' => array(
      0 => 'field_event_location',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_locations|node|admission_event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_registration|node|admission_event|form';
  $field_group->group_name = 'group_registration';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'admission_event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_wrapper_event';
  $field_group->data = array(
    'label' => 'Registration',
    'weight' => '27',
    'children' => array(
      0 => 'field_link_event_more_info',
      1 => 'field_register_url',
      2 => 'field_date_time',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_registration|node|admission_event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_schedule|node|admission_event|form';
  $field_group->group_name = 'group_schedule';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'admission_event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_wrapper_event';
  $field_group->data = array(
    'label' => 'Schedule',
    'weight' => '28',
    'children' => array(
      0 => 'field_schedule',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_schedule|node|admission_event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_speakers|node|admission_event|form';
  $field_group->group_name = 'group_speakers';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'admission_event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_wrapper_event';
  $field_group->data = array(
    'label' => 'Speakers',
    'weight' => '26',
    'children' => array(
      0 => 'field_event_speakers',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_speakers|node|admission_event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_date|node|admission_event|default';
  $field_group->group_name = 'group_wrapper_date';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'admission_event';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Date wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'field_event_date',
      1 => 'field_time_zone',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Date wrapper',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_wrapper_date|node|admission_event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_event|node|admission_event|form';
  $field_group->group_name = 'group_wrapper_event';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'admission_event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Event',
    'weight' => '8',
    'children' => array(
      0 => 'group_event_type',
      1 => 'group_region',
      2 => 'group_contact',
      3 => 'group_description',
      4 => 'group_keywords',
      5 => 'group_locations',
      6 => 'group_registration',
      7 => 'group_schedule',
      8 => 'group_speakers',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_wrapper_event|node|admission_event|form'] = $field_group;

  return $export;
}
