<?php
/**
 * @file
 * gsb_feature_admission_event_ct.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gsb_feature_admission_event_ct_field_group_info() {
  $field_groups = array();

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
      0 => 'field_email',
      1 => 'field_person_ref',
      2 => 'field_person_title',
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
  $field_groups['group_contact|node|admission_event|form'] = $field_group;

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
  $field_groups['group_description|node|admission_event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_type|node|admission_event|form';
  $field_group->group_name = 'group_event_type';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'admission_event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_wrapper_event';
  $field_group->data = array(
    'label' => 'Event Type',
    'weight' => '31',
    'children' => array(
      0 => 'field_event_category',
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
  $field_groups['group_event_type|node|admission_event|form'] = $field_group;

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
  $field_groups['group_keywords|node|admission_event|form'] = $field_group;

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
  $field_groups['group_locations|node|admission_event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_region|node|admission_event|form';
  $field_group->group_name = 'group_region';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'admission_event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_wrapper_event';
  $field_group->data = array(
    'label' => 'Region',
    'weight' => '30',
    'children' => array(
      0 => 'field_region',
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
  $field_groups['group_region|node|admission_event|form'] = $field_group;

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
      0 => 'field_register_url',
      1 => 'field_date_time',
      2 => 'field_link_event_more_info',
      3 => 'field_register_time_zone',
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
  $field_groups['group_registration|node|admission_event|form'] = $field_group;

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
  $field_groups['group_schedule|node|admission_event|form'] = $field_group;

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
  $field_groups['group_speakers|node|admission_event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_wrapper|node|admission_event|main_list';
  $field_group->group_name = 'group_title_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'admission_event';
  $field_group->mode = 'main_list';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Title Wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'field_link_single',
      1 => 'field_event_status',
      2 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Title Wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-title-wrapper field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_title_wrapper|node|admission_event|main_list'] = $field_group;

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
      2 => 'find_local_time',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Date wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-wrapper-date',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_wrapper_date|node|admission_event|default'] = $field_group;

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
    'weight' => '9',
    'children' => array(
      0 => 'group_contact',
      1 => 'group_description',
      2 => 'group_event_type',
      3 => 'group_keywords',
      4 => 'group_locations',
      5 => 'group_region',
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
  $field_groups['group_wrapper_event|node|admission_event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_title|node|admission_event|compact';
  $field_group->group_name = 'group_wrapper_title';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'admission_event';
  $field_group->mode = 'compact';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Title wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'field_link_single',
      1 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Title wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-wrapper-title',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_wrapper_title|node|admission_event|compact'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_title|node|admission_event|expanded';
  $field_group->group_name = 'group_wrapper_title';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'admission_event';
  $field_group->mode = 'expanded';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Title wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'field_link_single',
      1 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Title wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-wrapper-title',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_wrapper_title|node|admission_event|expanded'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Contact Information');
  t('Date wrapper');
  t('Description');
  t('Event');
  t('Event Type');
  t('Keyword');
  t('Locations');
  t('Region');
  t('Registration');
  t('Schedule');
  t('Speakers');
  t('Title Wrapper');
  t('Title wrapper');

  return $field_groups;
}
