<?php
/**
 * @file
 * gsb_feature_page_ct.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function gsb_feature_page_ct_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:page:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'page';
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
  $display->uuid = 'e3f1cca5-47ce-455a-8638-b31cd2d1535c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c0bd9c6c-ac44-4a75-9229-3a3e2af2db0d';
    $pane->panel = 'maintop';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 1,
      'no_extras' => 0,
      'override_title' => 1,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 1,
      'leave_node_title' => 0,
      'build_mode' => 'full',
      'context' => array(),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c0bd9c6c-ac44-4a75-9229-3a3e2af2db0d';
    $display->content['new-c0bd9c6c-ac44-4a75-9229-3a3e2af2db0d'] = $pane;
    $display->panels['maintop'][0] = 'new-c0bd9c6c-ac44-4a75-9229-3a3e2af2db0d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:page:default'] = $panelizer;

  return $export;
}
