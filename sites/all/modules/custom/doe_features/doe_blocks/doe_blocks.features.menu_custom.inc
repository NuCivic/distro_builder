<?php
/**
 * @file
 * doe_blocks.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function doe_blocks_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-footer-menu-1.
  $menus['menu-footer-menu-1'] = array(
    'menu_name' => 'menu-footer-menu-1',
    'title' => 'Footer Menu 1',
    'description' => '',
  );
  // Exported menu: menu-footer-menu-2.
  $menus['menu-footer-menu-2'] = array(
    'menu_name' => 'menu-footer-menu-2',
    'title' => 'Footer Menu 2',
    'description' => '',
  );
  // Exported menu: menu-projects.
  $menus['menu-projects'] = array(
    'menu_name' => 'menu-projects',
    'title' => 'Projects',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Footer Menu 1');
  t('Footer Menu 2');
  t('Main menu');
  t('Projects');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');


  return $menus;
}
