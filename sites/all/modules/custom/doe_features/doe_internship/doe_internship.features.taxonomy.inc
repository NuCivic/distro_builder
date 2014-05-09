<?php
/**
 * @file
 * doe_internship.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function doe_internship_taxonomy_default_vocabularies() {
  return array(
    'database_office' => array(
      'name' => 'Database / Office',
      'machine_name' => 'database_office',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'it_services' => array(
      'name' => 'IT Services',
      'machine_name' => 'it_services',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'market_research' => array(
      'name' => 'Market Research',
      'machine_name' => 'market_research',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'marketing_content_development' => array(
      'name' => 'Marketing + Content Development',
      'machine_name' => 'marketing_content_development',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'media_event_production' => array(
      'name' => 'Media / Event Production',
      'machine_name' => 'media_event_production',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'web_development_document_design' => array(
      'name' => 'Design + Web Development',
      'machine_name' => 'web_development_document_design',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
