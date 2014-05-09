<?php
/**
 * @file
 * doe_blocks.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function doe_blocks_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['menu-menu-footer-menu-1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-footer-menu-1',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summer_scholars' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summer_scholars',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-footer-menu-2'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-footer-menu-2',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'summer_scholars' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'summer_scholars',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
