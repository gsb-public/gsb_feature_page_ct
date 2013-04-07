<?php
/**
 * @file
 * gsb_feature_page_ct.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function gsb_feature_page_ct_defaultconfig_features() {
  return array(
    'gsb_feature_page_ct' => array(
      'strongarm' => 'strongarm',
    ),
  );
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function gsb_feature_page_ct_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_page_pattern';
  $strongarm->value = '[node:menu-link:menu:associated-main-menu-alias]/[node:menu-link:parents:join-path]/[node:menu-link:title]';
  $export['pathauto_node_page_pattern'] = $strongarm;

  return $export;
}
