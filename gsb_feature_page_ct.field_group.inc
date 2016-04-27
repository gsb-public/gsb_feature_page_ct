<?php
/**
 * @file
 * gsb_feature_page_ct.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gsb_feature_page_ct_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hero_region|node|page|form';
  $field_group->group_name = 'group_hero_region';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Hero Region',
    'weight' => '5',
    'children' => array(
      0 => 'field_image_single_public',
      1 => 'field_hero_region_options',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Hero Region',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-hero-region field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_hero_region|node|page|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Hero Region');

  return $field_groups;
}
