<?php
/**
 * @file
 * doe_internship.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function doe_internship_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_collaboration|node|internship|form';
  $field_group->group_name = 'group_collaboration';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'internship';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_more_skills';
  $field_group->data = array(
    'label' => 'Collaboration/Project management',
    'weight' => '51',
    'children' => array(
      0 => 'field_collaboration_term',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-collaboration field-group-accordion-item',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_collaboration|node|internship|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_database_office|node|internship|form';
  $field_group->group_name = 'group_database_office';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'internship';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_skills';
  $field_group->data = array(
    'label' => 'Database/Office',
    'weight' => '52',
    'children' => array(
      0 => 'field_database_office_terms',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-database-office field-group-accordion-item',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_database_office|node|internship|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_interpersonal_skills|node|internship|form';
  $field_group->group_name = 'group_interpersonal_skills';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'internship';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_more_skills';
  $field_group->data = array(
    'label' => 'Interpersonal Skills',
    'weight' => '61',
    'children' => array(
      0 => 'field_interpersonal_skills',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-interpersonal-skills field-group-accordion-item',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_interpersonal_skills|node|internship|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_it_services|node|internship|form';
  $field_group->group_name = 'group_it_services';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'internship';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_skills';
  $field_group->data = array(
    'label' => 'Computer networking/maintenance/repair',
    'weight' => '56',
    'children' => array(
      0 => 'field_it_services_term',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-it-services field-group-accordion-item',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_it_services|node|internship|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_market_research|node|internship|form';
  $field_group->group_name = 'group_market_research';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'internship';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_skills';
  $field_group->data = array(
    'label' => 'Market research',
    'weight' => '54',
    'children' => array(
      0 => 'field_market_research_term',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-market-research field-group-accordion-item',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_market_research|node|internship|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_marketing|node|internship|form';
  $field_group->group_name = 'group_marketing';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'internship';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_skills';
  $field_group->data = array(
    'label' => 'Marketing/content development',
    'weight' => '53',
    'children' => array(
      0 => 'field_marketing_term',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-marketing field-group-accordion-item',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_marketing|node|internship|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media_event|node|internship|form';
  $field_group->group_name = 'group_media_event';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'internship';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_skills';
  $field_group->data = array(
    'label' => 'Media/Event production',
    'weight' => '55',
    'children' => array(
      0 => 'field_media_event_term',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-media-event field-group-accordion-item',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_media_event|node|internship|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_more_skills|node|internship|form';
  $field_group->group_name = 'group_more_skills';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'internship';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_skills2';
  $field_group->data = array(
    'label' => 'More skills',
    'weight' => '59',
    'children' => array(
      0 => 'group_collaboration',
      1 => 'group_interpersonal_skills',
    ),
    'format_type' => 'accordion',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'effect' => 'none',
        'classes' => 'group-more-skills field-group-accordion',
      ),
    ),
  );
  $export['group_more_skills|node|internship|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_skills1|node|internship|form';
  $field_group->group_name = 'group_skills1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'internship';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Skills1',
    'weight' => '10',
    'children' => array(
      0 => 'group_skills',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Skills1',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-skills1 field-group-div',
        'description' => '<p>This list includes the main types of tasks that we anticipate that companies will want students to do during the internship. Click on the category to see a list of suggested tasks. In designing an internship opportunity, you can select skills from across all categories, or you can create additional tasks using the entry field below.</p>
<p>A list of all tasks performed by CTE Summer Scholars in summer 2013 can be downloaded as a PDF: <a href="../../../sites/default/files/documents/cte_summer_sholars-checklist.pdf">click here.</a></p>',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_skills1|node|internship|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_skills2|node|internship|form';
  $field_group->group_name = 'group_skills2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'internship';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Skills2',
    'weight' => '11',
    'children' => array(
      0 => 'group_more_skills',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Skills2',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-skills2 field-group-div',
        'description' => '<p>Including the general interpersonal and organizational skills that your company values most will be helpful in matching students to your site. Students are screened for these types of skills; giving students a chance to develop them further is a core goal of the program.</p>',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_skills2|node|internship|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_skills|node|internship|form';
  $field_group->group_name = 'group_skills';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'internship';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_skills1';
  $field_group->data = array(
    'label' => 'Skills',
    'weight' => '9',
    'children' => array(
      0 => 'group_database_office',
      1 => 'group_it_services',
      2 => 'group_market_research',
      3 => 'group_marketing',
      4 => 'group_media_event',
      5 => 'group_web_development',
    ),
    'format_type' => 'accordion',
    'format_settings' => array(
      'label' => 'Skills',
      'instance_settings' => array(
        'classes' => 'group-skills field-group-accordion',
        'effect' => 'none',
      ),
    ),
  );
  $export['group_skills|node|internship|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_web_development|node|internship|form';
  $field_group->group_name = 'group_web_development';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'internship';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_skills';
  $field_group->data = array(
    'label' => 'Web development/Document design',
    'weight' => '50',
    'children' => array(
      0 => 'field_web_development_term',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'label' => 'Web development/Document design',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-web-development field-group-accordion-item',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_web_development|node|internship|form'] = $field_group;

  return $export;
}
