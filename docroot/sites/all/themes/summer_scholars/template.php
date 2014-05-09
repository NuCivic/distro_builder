<?php

/**
 * Implements template_preprocess_html().
 * Adds path variables.
 */
function summer_scholars_preprocess_html(&$variables, $hook) {
  // Add variables and paths needed for HTML5 and responsive support.
  $variables['base_path'] = base_path();
  $variables['path_to_summer_scholars'] = drupal_get_path('theme', 'summer_scholars');
}

/**
 * Implements theme_links().
 * Enables sub-menu item display for main menu.
 */
function summer_scholars_links($variables) {
  if (array_key_exists('id', $variables['attributes']) && $variables['attributes']['id'] == 'nav') {
    $pid = variable_get('menu_main_links_source', 'nav');
    $tree = menu_tree($pid);
    return drupal_render($tree);
  }
  return theme_links($variables);
}

/**
 * Implements template_preprocess_page().
 */
function summer_scholars_preprocess_page(&$vars) {
	$vars['user_menu'] =  theme('links', array('links' => menu_navigation_links('user-menu'), 'attributes' => array('class '=> array('links', 'site-menu'))));
	if (drupal_is_front_page()) {
    $vars['title'] = '';
    unset($vars['page']['content']['system_main']['default_message']);
	}
  $external_css = array(
    '#attached' => array(
      'css' => array(
        '//fonts.googleapis.com/css?family=PT+Sans+Narrow:400,700' => array(
          'type' => 'external'),
        '//netdna.bootstrapcdn.com/font-awesome/4.0.3/css/font-awesome.css' => array(
          'type' => 'external'),
      ),
    ),
  );
  drupal_render($external_css);
}

/**
 * Implements hook_theme().
 */
function summer_scholars_theme(&$existing, $type, $theme, $path){
  $hooks = array();
   // Make user-register.tpl.php available
  $hooks['user_register_form'] = array (
     'render element' => 'form',
     'path' => drupal_get_path('theme','summer_scholars') . '/templates',
     'template' => 'user-register',
     'preprocess functions' => array('summer_scholars_preprocess_user_register_form'),
  );
  $hooks['user_profile_form'] = array (
     'render element' => 'form',
     'path' => drupal_get_path('theme','summer_scholars') . '/templates',
     'template' => 'user-profile',
     'preprocess functions' => array('summer_scholars_preprocess_user_profile_form'),
  );
  return $hooks;
}

/**
 * Preprocess function for user registration form.
 *
 * @param Array $vars
 *   An array of variables to be used in rendering the form.
 */
function summer_scholars_preprocess_user_register_form(&$vars) {
  $args = func_get_args();
  array_shift($args);
  $form_state['build_info']['args'] = $args;
  $vars['intro_text'] = t('To register as an internship host for the Summer Scholars program, please supply an account username and password, along with your email address and other contact information.');
  $vars['form'] = drupal_build_form('user_register_form', $form_state['build_info']['args']);
  summer_scholars_organize_fields($vars['form']);
}

/**
 * Preprocess function for user profile edit form.
 *
 * @param Array $vars
 *   An array of variables to be used in rendering the form.
 */
function summer_scholars_preprocess_user_profile_form(&$vars) {
  if (!isset($vars['form']['profile_main'])) {
    return;
  }
  $args = func_get_args();
  array_shift($args);
  $form_state['build_info']['args'] = $args;
  $vars['intro_text'] =  '';
  summer_scholars_organize_fields($vars['form']);
}

/**
 * Organize "internship fields" fields into a table.
 *
 * Each row in the table consists of two columns: a checkbox for the field, and an integer field
 * for indicating how many interns the company may host in that field.
 *
 * @param Array $form
 *   The form array.
 */
function summer_scholars_organize_fields(&$form) {
  _summer_scholars_field_row($form, 'field_web_development', 'field_web_development_count', 'start');
  _summer_scholars_field_row($form, 'field_database_office', 'field_database_office_count');
  _summer_scholars_field_row($form, 'field_collaboration', 'field_collaboration_count');
  _summer_scholars_field_row($form, 'field_marketing', 'field_marketing_count');
  _summer_scholars_field_row($form, 'field_market_research', 'field_market_research_count');
  _summer_scholars_field_row($form, 'field_media_event', 'field_media_event_count');
  _summer_scholars_field_row($form, 'field_it_services', 'field_it_services_count');
  $form['profile_main']['field_other_text']['und'][0]['value']['#title_display'] = 'invisible';
  _summer_scholars_field_row($form, 'field_other', 'field_other_count', 'end');
}

/**
 * Helper function for the summer_scholars_organize_fields() function.
 *
 * Adds prefixes and suffixes to the fields in one row of the internship fields table.
 *
 * @param Array $form
 *   The form array.
 * @param String $column1
 *   The name of the field that should appear in the first column of the table.
 * @param String $column2
 *   The name of the field that should appear in the second column of the table.
 * @param String $position
 *   Is the the starting row of the table, the ending row?
 */
function _summer_scholars_field_row(&$form, $column1, $column2, $position='') {
  $prefix_prefix = '';
  $suffix_suffix = '';
  // If this is the start row of the table, add an opening table tag and header.
  if ($position == 'start') {
    $prefix_prefix = '<table id="intern-work-fields"><tr><th>Positions Available</th><th># of Intern Positions</th></tr>';
  }
  // If it's the end row, add the closing table tag.
  elseif ($position == 'end') {
    $suffix_suffix = '</table>';
  }
  $form['profile_main'][$column1]['#prefix'] = $prefix_prefix . '<tr><td>';
  $form['profile_main'][$column1]['#suffix'] = '</td>';
  $form['profile_main'][$column2]['#prefix'] = '<td>';
  $form['profile_main'][$column2]['#suffix'] = '</td></tr>' . $suffix_suffix;
  $form['profile_main'][$column2]['und'][0]['value']['#title_display'] = 'invisible';
}

/**
 * Implements hook_page_alter().
 */
// Hide user history.
function summer_scholars_page_alter(&$page){
  $page['content']['system_main']['summary'] = null;
}

/***********************
Let's load some CSS on specific targets - uncomment to use
************************/

// function summer_scholars_preprocess_node(&$vars) {
//   // Add JS & CSS by node type
//   if( $vars['type'] == 'page') {
//     //drupal_add_js(path_to_theme(). '/js/supercool_scripts.js');
//     //drupal_add_css(path_to_theme(). '/css/supercool_sheet.css');
//   }

//   // Add JS & CSS to the front page
//   if ($vars['is_front']) {
//     drupal_add_js(path_to_theme(). '/js/supercool_scripts.js');
//     //drupal_add_css(path_to_theme(). '/css/supercool_sheet.css');
//   }

//   // Add JS & CSS by node ID
//   if (drupal_get_path_alias("node/{$vars['#node']->nid}") == 'your-node-id') {
//     //drupal_add_js(path_to_theme(). '/js/supercool_scripts.js');
//     //drupal_add_css(path_to_theme(). '/css/supercool_sheet.css');
//   }
// }
// function summer_scholars_preprocess_page(&$vars) {
//   // Add JS & CSS by node type
//   if (isset($vars['node']) && $vars['node']->type == 'page') {
//     //drupal_add_js(path_to_theme(). '/js/supercool_scripts.js');
//     //drupal_add_css(path_to_theme(). '/css/supercool_sheet.css');
//   }
//   // Add JS & CSS by node ID
//   if (isset($vars['node']) && $vars['node']->nid == '1') {
//     //drupal_add_js(path_to_theme(). '/js/supercool_scripts.js');
//     //drupal_add_css(path_to_theme(). '/css/supercool_sheet.css');
//   }
// }
