<?php
/**
 * @file
 * gsb_feature_admission_event_ct.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function gsb_feature_admission_event_ct_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:admission_event:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'admission_event';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'gsb-landing-standard-page-one';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'fullheader' => NULL,
      'maintop' => NULL,
      'mainmiddlefirst' => NULL,
      'mainmiddlesecond' => NULL,
      'mainbottom' => NULL,
      'quicklinks' => NULL,
      'sidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '59ee5b72-bf49-4add-b311-73c5e36f54b0';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-fd7ff100-167a-4abd-9490-8402a8a360d3';
    $pane->panel = 'fullheader';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_event_detail';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'list_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'conditions' => array(),
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fd7ff100-167a-4abd-9490-8402a8a360d3';
    $display->content['new-fd7ff100-167a-4abd-9490-8402a8a360d3'] = $pane;
    $display->panels['fullheader'][0] = 'new-fd7ff100-167a-4abd-9490-8402a8a360d3';
    $pane = new stdClass();
    $pane->pid = 'new-323f7b3a-e923-4ad6-ad0e-d10e0d158de6';
    $pane->panel = 'fullheader';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_time_zone';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'tzfield_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'conditions' => array(),
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '323f7b3a-e923-4ad6-ad0e-d10e0d158de6';
    $display->content['new-323f7b3a-e923-4ad6-ad0e-d10e0d158de6'] = $pane;
    $display->panels['fullheader'][1] = 'new-323f7b3a-e923-4ad6-ad0e-d10e0d158de6';
    $pane = new stdClass();
    $pane->pid = 'new-78dac5b5-a1ce-4706-a3b9-289b573acbf2';
    $pane->panel = 'fullheader';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_event_speakers';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'field_collection_view',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'add' => 'Add',
        'conditions' => array(),
        'delete' => 'Delete',
        'description' => TRUE,
        'edit' => 'Edit',
        'view_mode' => 'full',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '78dac5b5-a1ce-4706-a3b9-289b573acbf2';
    $display->content['new-78dac5b5-a1ce-4706-a3b9-289b573acbf2'] = $pane;
    $display->panels['fullheader'][2] = 'new-78dac5b5-a1ce-4706-a3b9-289b573acbf2';
    $pane = new stdClass();
    $pane->pid = 'new-3e1e3b27-a41d-4b03-a9a7-8c98cf54ec0d';
    $pane->panel = 'fullheader';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_event_location';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'field_collection_view',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'add' => 'Add',
        'conditions' => array(),
        'delete' => 'Delete',
        'description' => TRUE,
        'edit' => 'Edit',
        'view_mode' => 'full',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '3e1e3b27-a41d-4b03-a9a7-8c98cf54ec0d';
    $display->content['new-3e1e3b27-a41d-4b03-a9a7-8c98cf54ec0d'] = $pane;
    $display->panels['fullheader'][3] = 'new-3e1e3b27-a41d-4b03-a9a7-8c98cf54ec0d';
    $pane = new stdClass();
    $pane->pid = 'new-83f37726-d76d-413d-8ee3-71c70e272884';
    $pane->panel = 'fullheader';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_link_event_more_info';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'link_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'conditions' => array(),
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '83f37726-d76d-413d-8ee3-71c70e272884';
    $display->content['new-83f37726-d76d-413d-8ee3-71c70e272884'] = $pane;
    $display->panels['fullheader'][4] = 'new-83f37726-d76d-413d-8ee3-71c70e272884';
    $pane = new stdClass();
    $pane->pid = 'new-1327a6fa-7775-4ffe-a34a-54de20a3a359';
    $pane->panel = 'fullheader';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_link_single';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'link_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'conditions' => array(),
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '1327a6fa-7775-4ffe-a34a-54de20a3a359';
    $display->content['new-1327a6fa-7775-4ffe-a34a-54de20a3a359'] = $pane;
    $display->panels['fullheader'][5] = 'new-1327a6fa-7775-4ffe-a34a-54de20a3a359';
    $pane = new stdClass();
    $pane->pid = 'new-40cacf07-1d2c-44e2-9940-4ced8eb52655';
    $pane->panel = 'fullheader';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_event_date';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'date_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'conditions' => array(),
        'format_type' => 'long',
        'fromto' => 'both',
        'multiple_from' => '',
        'multiple_number' => '',
        'multiple_to' => '',
        'show_repeat_rule' => 'show',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '40cacf07-1d2c-44e2-9940-4ced8eb52655';
    $display->content['new-40cacf07-1d2c-44e2-9940-4ced8eb52655'] = $pane;
    $display->panels['fullheader'][6] = 'new-40cacf07-1d2c-44e2-9940-4ced8eb52655';
    $pane = new stdClass();
    $pane->pid = 'new-18ab5794-63cf-44a7-92be-2250f09e185f';
    $pane->panel = 'fullheader';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_editorial_summary';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'conditions' => array(),
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '18ab5794-63cf-44a7-92be-2250f09e185f';
    $display->content['new-18ab5794-63cf-44a7-92be-2250f09e185f'] = $pane;
    $display->panels['fullheader'][7] = 'new-18ab5794-63cf-44a7-92be-2250f09e185f';
    $pane = new stdClass();
    $pane->pid = 'new-b95b3680-aa7e-48ad-97ae-53aea05bfd6e';
    $pane->panel = 'fullheader';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_region';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'conditions' => array(),
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = 'b95b3680-aa7e-48ad-97ae-53aea05bfd6e';
    $display->content['new-b95b3680-aa7e-48ad-97ae-53aea05bfd6e'] = $pane;
    $display->panels['fullheader'][8] = 'new-b95b3680-aa7e-48ad-97ae-53aea05bfd6e';
    $pane = new stdClass();
    $pane->pid = 'new-db8d860f-aebc-4419-8a54-d453210ffc70';
    $pane->panel = 'fullheader';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'conditions' => array(),
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = 'db8d860f-aebc-4419-8a54-d453210ffc70';
    $display->content['new-db8d860f-aebc-4419-8a54-d453210ffc70'] = $pane;
    $display->panels['fullheader'][9] = 'new-db8d860f-aebc-4419-8a54-d453210ffc70';
    $pane = new stdClass();
    $pane->pid = 'new-a0c4246c-3665-4571-9e81-3068efa05588';
    $pane->panel = 'fullheader';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_register_url';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'link_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'conditions' => array(),
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 10;
    $pane->locks = array();
    $pane->uuid = 'a0c4246c-3665-4571-9e81-3068efa05588';
    $display->content['new-a0c4246c-3665-4571-9e81-3068efa05588'] = $pane;
    $display->panels['fullheader'][10] = 'new-a0c4246c-3665-4571-9e81-3068efa05588';
    $pane = new stdClass();
    $pane->pid = 'new-a6cde557-c7fe-4790-a4bf-349ae86bbf94';
    $pane->panel = 'fullheader';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_schedule';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'conditions' => array(),
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 11;
    $pane->locks = array();
    $pane->uuid = 'a6cde557-c7fe-4790-a4bf-349ae86bbf94';
    $display->content['new-a6cde557-c7fe-4790-a4bf-349ae86bbf94'] = $pane;
    $display->panels['fullheader'][11] = 'new-a6cde557-c7fe-4790-a4bf-349ae86bbf94';
    $pane = new stdClass();
    $pane->pid = 'new-6721c9d3-acbe-40a0-af4b-2dc316733459';
    $pane->panel = 'fullheader';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_date_time';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'date_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'conditions' => array(),
        'format_type' => 'long',
        'fromto' => 'both',
        'multiple_from' => '',
        'multiple_number' => '',
        'multiple_to' => '',
        'show_repeat_rule' => 'show',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 12;
    $pane->locks = array();
    $pane->uuid = '6721c9d3-acbe-40a0-af4b-2dc316733459';
    $display->content['new-6721c9d3-acbe-40a0-af4b-2dc316733459'] = $pane;
    $display->panels['fullheader'][12] = 'new-6721c9d3-acbe-40a0-af4b-2dc316733459';
    $pane = new stdClass();
    $pane->pid = 'new-122dc07a-cb50-42b6-a182-97fb1758697c';
    $pane->panel = 'fullheader';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_business_insight_topic';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'conditions' => array(),
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 13;
    $pane->locks = array();
    $pane->uuid = '122dc07a-cb50-42b6-a182-97fb1758697c';
    $display->content['new-122dc07a-cb50-42b6-a182-97fb1758697c'] = $pane;
    $display->panels['fullheader'][13] = 'new-122dc07a-cb50-42b6-a182-97fb1758697c';
    $pane = new stdClass();
    $pane->pid = 'new-d027e8b3-4b0f-4dc3-8c5d-31e3dc932aa2';
    $pane->panel = 'fullheader';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_tag';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'conditions' => array(),
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 14;
    $pane->locks = array();
    $pane->uuid = 'd027e8b3-4b0f-4dc3-8c5d-31e3dc932aa2';
    $display->content['new-d027e8b3-4b0f-4dc3-8c5d-31e3dc932aa2'] = $pane;
    $display->panels['fullheader'][14] = 'new-d027e8b3-4b0f-4dc3-8c5d-31e3dc932aa2';
    $pane = new stdClass();
    $pane->pid = 'new-d6e7769e-921f-4e94-96a2-7c3f13c29690';
    $pane->panel = 'fullheader';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_event_category';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'conditions' => array(),
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 15;
    $pane->locks = array();
    $pane->uuid = 'd6e7769e-921f-4e94-96a2-7c3f13c29690';
    $display->content['new-d6e7769e-921f-4e94-96a2-7c3f13c29690'] = $pane;
    $display->panels['fullheader'][15] = 'new-d6e7769e-921f-4e94-96a2-7c3f13c29690';
    $pane = new stdClass();
    $pane->pid = 'new-4d6e49b6-aabd-4ad1-bb2c-0ace15de30ec';
    $pane->panel = 'fullheader';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'page_manager',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 16;
    $pane->locks = array();
    $pane->uuid = '4d6e49b6-aabd-4ad1-bb2c-0ace15de30ec';
    $display->content['new-4d6e49b6-aabd-4ad1-bb2c-0ace15de30ec'] = $pane;
    $display->panels['fullheader'][16] = 'new-4d6e49b6-aabd-4ad1-bb2c-0ace15de30ec';
    $pane = new stdClass();
    $pane->pid = 'new-2a27cb04-5426-41bd-b6b7-9642b4e3f242';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_person_ref';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'entityreference_label',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'conditions' => array(),
        'link' => FALSE,
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2a27cb04-5426-41bd-b6b7-9642b4e3f242';
    $display->content['new-2a27cb04-5426-41bd-b6b7-9642b4e3f242'] = $pane;
    $display->panels['sidebar'][0] = 'new-2a27cb04-5426-41bd-b6b7-9642b4e3f242';
    $pane = new stdClass();
    $pane->pid = 'new-11c2a544-1927-46cb-853b-7e52547b634d';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_person_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'conditions' => array(),
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '11c2a544-1927-46cb-853b-7e52547b634d';
    $display->content['new-11c2a544-1927-46cb-853b-7e52547b634d'] = $pane;
    $display->panels['sidebar'][1] = 'new-11c2a544-1927-46cb-853b-7e52547b634d';
    $pane = new stdClass();
    $pane->pid = 'new-382de3f1-9d82-45fe-9c63-23f267568b18';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_email';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'email_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'conditions' => array(),
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '382de3f1-9d82-45fe-9c63-23f267568b18';
    $display->content['new-382de3f1-9d82-45fe-9c63-23f267568b18'] = $pane;
    $display->panels['sidebar'][2] = 'new-382de3f1-9d82-45fe-9c63-23f267568b18';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-fd7ff100-167a-4abd-9490-8402a8a360d3';
  $panelizer->display = $display;
  $export['node:admission_event:default'] = $panelizer;

  return $export;
}
