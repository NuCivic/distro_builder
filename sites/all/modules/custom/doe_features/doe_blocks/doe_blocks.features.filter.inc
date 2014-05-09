<?php
/**
 * @file
 * doe_blocks.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function doe_blocks_filter_default_formats() {
  $formats = array();

  // Exported format: No wysiwyg.
  $formats['no_wysiwyg'] = array(
    'format' => 'no_wysiwyg',
    'name' => 'No wysiwyg',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
