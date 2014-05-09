<?php
/**
 * @file
 * doe_internship.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function doe_internship_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function doe_internship_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function doe_internship_node_info() {
  $items = array(
    'internship' => array(
      'name' => t('Internship opportunity'),
      'base' => 'node_content',
      'description' => t('An <em>internship opportunity</em> is an opportunity for a student to work opportunity with a company or other organization, gaining on-the-job experience and additional skills.'),
      'has_title' => '1',
      'title_label' => t('Job Title'),
      'help' => '',
    ),
  );
  return $items;
}
