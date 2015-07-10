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
    $pane->pid = 'new-2404fa2f-9e23-4c80-b70a-eb3028069797';
    $pane->panel = 'maintop';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 0,
      'no_extras' => 1,
      'override_title' => 1,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 1,
      'build_mode' => 'full',
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
    $pane->uuid = '2404fa2f-9e23-4c80-b70a-eb3028069797';
    $display->content['new-2404fa2f-9e23-4c80-b70a-eb3028069797'] = $pane;
    $display->panels['maintop'][0] = 'new-2404fa2f-9e23-4c80-b70a-eb3028069797';
    $pane = new stdClass();
    $pane->pid = 'new-934c9a7a-20e2-498d-a972-729424d1f105';
    $pane->panel = 'sidebar';
    $pane->type = 'panels_mini';
    $pane->subtype = 'event_contacts';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'panelizer',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '934c9a7a-20e2-498d-a972-729424d1f105';
    $display->content['new-934c9a7a-20e2-498d-a972-729424d1f105'] = $pane;
    $display->panels['sidebar'][0] = 'new-934c9a7a-20e2-498d-a972-729424d1f105';
    $pane = new stdClass();
    $pane->pid = 'new-bacb95bf-86a6-4b1f-8bdf-509ec834a1bc';
    $pane->panel = 'sidebar';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'uuid:3a99aefe-dd4a-4bdf-a724-d85cdbd2ade4';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:admission_event:field_program_single',
          'settings' => array(
            'field_program_single' => array(
              'und' => array(
                0 => array(
                  'tid' => '10881',
                ),
              ),
            ),
            'field_program_single_tid' => array(
              0 => '10881',
            ),
          ),
          'context' => 'panelizer',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'bacb95bf-86a6-4b1f-8bdf-509ec834a1bc';
    $display->content['new-bacb95bf-86a6-4b1f-8bdf-509ec834a1bc'] = $pane;
    $display->panels['sidebar'][1] = 'new-bacb95bf-86a6-4b1f-8bdf-509ec834a1bc';
    $pane = new stdClass();
    $pane->pid = 'new-538dc301-bffe-4100-9d69-110e6d276289';
    $pane->panel = 'sidebar';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'uuid:912a35f9-6834-4f32-9f4e-24efe34839cc';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:admission_event:field_program_single',
          'settings' => array(
            'field_program_single' => array(
              'und' => array(
                0 => array(
                  'tid' => '10886',
                ),
              ),
            ),
            'field_program_single_tid' => array(
              0 => '10886',
            ),
          ),
          'context' => 'panelizer',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '538dc301-bffe-4100-9d69-110e6d276289';
    $display->content['new-538dc301-bffe-4100-9d69-110e6d276289'] = $pane;
    $display->panels['sidebar'][2] = 'new-538dc301-bffe-4100-9d69-110e6d276289';
    $pane = new stdClass();
    $pane->pid = 'new-e0bdd6e0-ecaf-47d2-a086-ea927f9c55cf';
    $pane->panel = 'sidebar';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'uuid:97a2d70e-5132-46cf-b937-f3fa99c5d5b1';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:admission_event:field_program_single',
          'settings' => array(
            'field_program_single' => array(
              'und' => array(
                0 => array(
                  'tid' => '10891',
                ),
              ),
            ),
            'field_program_single_tid' => array(
              0 => '10891',
            ),
          ),
          'context' => 'panelizer',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'e0bdd6e0-ecaf-47d2-a086-ea927f9c55cf';
    $display->content['new-e0bdd6e0-ecaf-47d2-a086-ea927f9c55cf'] = $pane;
    $display->panels['sidebar'][3] = 'new-e0bdd6e0-ecaf-47d2-a086-ea927f9c55cf';
    $pane = new stdClass();
    $pane->pid = 'new-c07bface-e5bd-4523-a38f-b8fc2462b033';
    $pane->panel = 'sidebar';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'uuid:6f392401-7486-4628-bb6b-530a33e4b912';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:admission_event:field_program_single',
          'settings' => array(
            'field_program_single' => array(
              'und' => array(
                0 => array(
                  'tid' => '10911',
                ),
              ),
            ),
            'field_program_single_tid' => array(
              0 => '10911',
            ),
          ),
          'context' => 'panelizer',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'c07bface-e5bd-4523-a38f-b8fc2462b033';
    $display->content['new-c07bface-e5bd-4523-a38f-b8fc2462b033'] = $pane;
    $display->panels['sidebar'][4] = 'new-c07bface-e5bd-4523-a38f-b8fc2462b033';
    $pane = new stdClass();
    $pane->pid = 'new-a7352f10-ed0b-41ce-af49-c675b3d49a64';
    $pane->panel = 'sidebar';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'uuid:f623a3fa-aea0-4d78-ace5-4300e005fe94';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:admission_event:field_program_single',
          'settings' => array(
            'field_program_single' => array(
              'und' => array(
                0 => array(
                  'tid' => '26581',
                ),
              ),
            ),
            'field_program_single_tid' => array(
              0 => '26581',
            ),
          ),
          'context' => 'panelizer',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'a7352f10-ed0b-41ce-af49-c675b3d49a64';
    $display->content['new-a7352f10-ed0b-41ce-af49-c675b3d49a64'] = $pane;
    $display->panels['sidebar'][5] = 'new-a7352f10-ed0b-41ce-af49-c675b3d49a64';
    $pane = new stdClass();
    $pane->pid = 'new-b636d982-1956-4b6c-be2d-cbe6308beee8';
    $pane->panel = 'sidebar';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'uuid:0a7a8847-31ce-40d8-a408-f48e9a19f116';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:admission_event:field_program_single',
          'settings' => array(
            'field_program_single' => array(
              'und' => array(
                0 => array(
                  'tid' => '10901',
                ),
              ),
            ),
            'field_program_single_tid' => array(
              0 => '10901',
            ),
          ),
          'context' => 'panelizer',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'b636d982-1956-4b6c-be2d-cbe6308beee8';
    $display->content['new-b636d982-1956-4b6c-be2d-cbe6308beee8'] = $pane;
    $display->panels['sidebar'][6] = 'new-b636d982-1956-4b6c-be2d-cbe6308beee8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:admission_event:default'] = $panelizer;

  return $export;
}
