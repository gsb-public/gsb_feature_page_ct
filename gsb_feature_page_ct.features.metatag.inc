<?php
/**
 * @file
 * gsb_feature_page_ct.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function gsb_feature_page_ct_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: node:page.
  $config['node:page'] = array(
    'instance' => 'node:page',
    'disabled' => FALSE,
    'config' => array(
      'title' => array(
        'value' => '[node:title] | [site:name]',
      ),
    ),
  );

  return $config;
}
