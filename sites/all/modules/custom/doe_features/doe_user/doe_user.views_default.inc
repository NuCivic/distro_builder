<?php
/**
 * @file
 * doe_user.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function doe_user_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'administer_internships';
  $view->description = 'Internship Administrator view for all internship opportunities, displayed as a table and able to download as a file.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Administer Internships';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Internship Opportunities Administration';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
    6 => '6',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_organization' => 'field_organization',
    'title' => 'title',
    'field_hosting_department' => 'field_hosting_department',
    'field_supervisor_name' => 'field_supervisor_name',
    'created' => 'created',
    'status' => 'status',
  );
  $handler->display->display_options['style_options']['default'] = 'field_organization';
  $handler->display->display_options['style_options']['info'] = array(
    'field_organization' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_hosting_department' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_supervisor_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['profile']['label'] = 'Main Profile';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'main' => 'main',
  );
  /* Field: Profile: Company / Organization Name: */
  $handler->display->display_options['fields']['field_organization']['id'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['table'] = 'field_data_field_organization';
  $handler->display->display_options['fields']['field_organization']['field'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_organization']['label'] = 'Organization';
  $handler->display->display_options['fields']['field_organization']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Hosting department */
  $handler->display->display_options['fields']['field_hosting_department']['id'] = 'field_hosting_department';
  $handler->display->display_options['fields']['field_hosting_department']['table'] = 'field_data_field_hosting_department';
  $handler->display->display_options['fields']['field_hosting_department']['field'] = 'field_hosting_department';
  $handler->display->display_options['fields']['field_hosting_department']['label'] = 'Department';
  /* Field: Field: Supervisor name */
  $handler->display->display_options['fields']['field_supervisor_name']['id'] = 'field_supervisor_name';
  $handler->display->display_options['fields']['field_supervisor_name']['table'] = 'field_data_field_supervisor_name';
  $handler->display->display_options['fields']['field_supervisor_name']['field'] = 'field_supervisor_name';
  $handler->display->display_options['fields']['field_supervisor_name']['label'] = 'Contact';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Post Date';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'internship' => 'internship',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<a class="button" href="[site:url]node/add/internship"><i class="fa fa-plus"></i> Add Internship Opportunity</a><a class="button" href="[site:url]admin/internships/download"><i class="fa fa-download"></i> Download XLS file of published internships</a><a class="button" href="[site:url]admin/host-contact-info"><i class="fa fa-eye"></i> View Host Contact Info</a>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Profile: Company / Organization Name: */
  $handler->display->display_options['fields']['field_organization']['id'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['table'] = 'field_data_field_organization';
  $handler->display->display_options['fields']['field_organization']['field'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_organization']['label'] = 'Organization';
  $handler->display->display_options['fields']['field_organization']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Hosting department */
  $handler->display->display_options['fields']['field_hosting_department']['id'] = 'field_hosting_department';
  $handler->display->display_options['fields']['field_hosting_department']['table'] = 'field_data_field_hosting_department';
  $handler->display->display_options['fields']['field_hosting_department']['field'] = 'field_hosting_department';
  $handler->display->display_options['fields']['field_hosting_department']['label'] = 'Department';
  /* Field: Field: Supervisor name */
  $handler->display->display_options['fields']['field_supervisor_name']['id'] = 'field_supervisor_name';
  $handler->display->display_options['fields']['field_supervisor_name']['table'] = 'field_data_field_supervisor_name';
  $handler->display->display_options['fields']['field_supervisor_name']['field'] = 'field_supervisor_name';
  $handler->display->display_options['fields']['field_supervisor_name']['label'] = 'Contact';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Post Date';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '<i class="fa fa-lg fa-pencil"></i>';
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'internship' => 'internship',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Profile: Company / Organization Name: (field_organization) */
  $handler->display->display_options['filters']['field_organization_value']['id'] = 'field_organization_value';
  $handler->display->display_options['filters']['field_organization_value']['table'] = 'field_data_field_organization';
  $handler->display->display_options['filters']['field_organization_value']['field'] = 'field_organization_value';
  $handler->display->display_options['filters']['field_organization_value']['relationship'] = 'profile';
  $handler->display->display_options['filters']['field_organization_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_organization_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_organization_value']['expose']['operator_id'] = 'field_organization_value_op';
  $handler->display->display_options['filters']['field_organization_value']['expose']['label'] = 'Filter by Organization Name:';
  $handler->display->display_options['filters']['field_organization_value']['expose']['operator'] = 'field_organization_value_op';
  $handler->display->display_options['filters']['field_organization_value']['expose']['identifier'] = 'field_organization_value';
  $handler->display->display_options['filters']['field_organization_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    7 => 0,
    6 => 0,
    5 => 0,
  );

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'Current-Internships.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Profile: Company / Organization Name: */
  $handler->display->display_options['fields']['field_organization']['id'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['table'] = 'field_data_field_organization';
  $handler->display->display_options['fields']['field_organization']['field'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_organization']['label'] = 'Organization';
  $handler->display->display_options['fields']['field_organization']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Hosting department */
  $handler->display->display_options['fields']['field_hosting_department']['id'] = 'field_hosting_department';
  $handler->display->display_options['fields']['field_hosting_department']['table'] = 'field_data_field_hosting_department';
  $handler->display->display_options['fields']['field_hosting_department']['field'] = 'field_hosting_department';
  $handler->display->display_options['fields']['field_hosting_department']['label'] = 'Department';
  /* Field: Content: Internship type */
  $handler->display->display_options['fields']['field_job_type']['id'] = 'field_job_type';
  $handler->display->display_options['fields']['field_job_type']['table'] = 'field_data_field_job_type';
  $handler->display->display_options['fields']['field_job_type']['field'] = 'field_job_type';
  $handler->display->display_options['fields']['field_job_type']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Requested number of interns */
  $handler->display->display_options['fields']['field_openings']['id'] = 'field_openings';
  $handler->display->display_options['fields']['field_openings']['table'] = 'field_data_field_openings';
  $handler->display->display_options['fields']['field_openings']['field'] = 'field_openings';
  $handler->display->display_options['fields']['field_openings']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Post Date';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Description';
  /* Field: Content: Market research */
  $handler->display->display_options['fields']['field_market_research_term']['id'] = 'field_market_research_term';
  $handler->display->display_options['fields']['field_market_research_term']['table'] = 'field_data_field_market_research_term';
  $handler->display->display_options['fields']['field_market_research_term']['field'] = 'field_market_research_term';
  $handler->display->display_options['fields']['field_market_research_term']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_market_research_term']['delta_offset'] = '0';
  /* Field: Content: Marketing/content development */
  $handler->display->display_options['fields']['field_marketing_term']['id'] = 'field_marketing_term';
  $handler->display->display_options['fields']['field_marketing_term']['table'] = 'field_data_field_marketing_term';
  $handler->display->display_options['fields']['field_marketing_term']['field'] = 'field_marketing_term';
  $handler->display->display_options['fields']['field_marketing_term']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_marketing_term']['delta_offset'] = '0';
  /* Field: Content: Media/Event production */
  $handler->display->display_options['fields']['field_media_event_term']['id'] = 'field_media_event_term';
  $handler->display->display_options['fields']['field_media_event_term']['table'] = 'field_data_field_media_event_term';
  $handler->display->display_options['fields']['field_media_event_term']['field'] = 'field_media_event_term';
  $handler->display->display_options['fields']['field_media_event_term']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_media_event_term']['delta_offset'] = '0';
  /* Field: Content: Design + Web Development */
  $handler->display->display_options['fields']['field_web_development_term']['id'] = 'field_web_development_term';
  $handler->display->display_options['fields']['field_web_development_term']['table'] = 'field_data_field_web_development_term';
  $handler->display->display_options['fields']['field_web_development_term']['field'] = 'field_web_development_term';
  $handler->display->display_options['fields']['field_web_development_term']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_web_development_term']['delta_offset'] = '0';
  /* Field: Content: Additional Skills */
  $handler->display->display_options['fields']['field_additional_skills']['id'] = 'field_additional_skills';
  $handler->display->display_options['fields']['field_additional_skills']['table'] = 'field_data_field_additional_skills';
  $handler->display->display_options['fields']['field_additional_skills']['field'] = 'field_additional_skills';
  $handler->display->display_options['fields']['field_additional_skills']['delta_offset'] = '0';
  /* Field: Field: Supervisor name */
  $handler->display->display_options['fields']['field_supervisor_name_1']['id'] = 'field_supervisor_name_1';
  $handler->display->display_options['fields']['field_supervisor_name_1']['table'] = 'field_data_field_supervisor_name';
  $handler->display->display_options['fields']['field_supervisor_name_1']['field'] = 'field_supervisor_name';
  $handler->display->display_options['fields']['field_supervisor_name_1']['label'] = 'Supervisor  name';
  /* Field: Field: Supervisor phone */
  $handler->display->display_options['fields']['field_supervisor_phone']['id'] = 'field_supervisor_phone';
  $handler->display->display_options['fields']['field_supervisor_phone']['table'] = 'field_data_field_supervisor_phone';
  $handler->display->display_options['fields']['field_supervisor_phone']['field'] = 'field_supervisor_phone';
  $handler->display->display_options['fields']['field_supervisor_phone']['label'] = 'Supervisor  phone';
  /* Field: Field: Supervisor email address */
  $handler->display->display_options['fields']['field_supervisor_email_address']['id'] = 'field_supervisor_email_address';
  $handler->display->display_options['fields']['field_supervisor_email_address']['table'] = 'field_data_field_supervisor_email_address';
  $handler->display->display_options['fields']['field_supervisor_email_address']['field'] = 'field_supervisor_email_address';
  $handler->display->display_options['path'] = 'admin/internships/download';
  $export['administer_internships'] = $view;

  $view = new view();
  $view->name = 'host_contact';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Host Contact Info';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Host Contact Info';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
    6 => '6',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<a class="button" href="[site:url]admin/host-email-export"><i class="fa fa-download"></i> Download Host E-mail Addresses</a>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'main' => 'main',
  );
  /* Field: Profile: Company / Organization Name: */
  $handler->display->display_options['fields']['field_organization']['id'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['table'] = 'field_data_field_organization';
  $handler->display->display_options['fields']['field_organization']['field'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_organization']['label'] = 'Organization';
  /* Field: Field: Supervisor name */
  $handler->display->display_options['fields']['field_supervisor_name']['id'] = 'field_supervisor_name';
  $handler->display->display_options['fields']['field_supervisor_name']['table'] = 'field_data_field_supervisor_name';
  $handler->display->display_options['fields']['field_supervisor_name']['field'] = 'field_supervisor_name';
  $handler->display->display_options['fields']['field_supervisor_name']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_supervisor_name']['label'] = 'Contact';
  /* Field: Field: Supervisor phone */
  $handler->display->display_options['fields']['field_supervisor_phone']['id'] = 'field_supervisor_phone';
  $handler->display->display_options['fields']['field_supervisor_phone']['table'] = 'field_data_field_supervisor_phone';
  $handler->display->display_options['fields']['field_supervisor_phone']['field'] = 'field_supervisor_phone';
  $handler->display->display_options['fields']['field_supervisor_phone']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_supervisor_phone']['label'] = 'Phone';
  /* Field: Field: Supervisor email address */
  $handler->display->display_options['fields']['field_supervisor_email_address']['id'] = 'field_supervisor_email_address';
  $handler->display->display_options['fields']['field_supervisor_email_address']['table'] = 'field_data_field_supervisor_email_address';
  $handler->display->display_options['fields']['field_supervisor_email_address']['field'] = 'field_supervisor_email_address';
  $handler->display->display_options['fields']['field_supervisor_email_address']['relationship'] = 'profile';
  /* Field: Profile: Borough */
  $handler->display->display_options['fields']['field_borough']['id'] = 'field_borough';
  $handler->display->display_options['fields']['field_borough']['table'] = 'field_data_field_borough';
  $handler->display->display_options['fields']['field_borough']['field'] = 'field_borough';
  $handler->display->display_options['fields']['field_borough']['relationship'] = 'profile';
  /* Field: Field: Internship Location - Thoroughfare (i.e. Street address) */
  $handler->display->display_options['fields']['field_address_thoroughfare']['id'] = 'field_address_thoroughfare';
  $handler->display->display_options['fields']['field_address_thoroughfare']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_thoroughfare']['field'] = 'field_address_thoroughfare';
  $handler->display->display_options['fields']['field_address_thoroughfare']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_address_thoroughfare']['label'] = 'Address';
  /* Field: Field: Internship Location - Postal code */
  $handler->display->display_options['fields']['field_address_postal_code']['id'] = 'field_address_postal_code';
  $handler->display->display_options['fields']['field_address_postal_code']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_postal_code']['field'] = 'field_address_postal_code';
  $handler->display->display_options['fields']['field_address_postal_code']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_address_postal_code']['label'] = 'Postal Code';
  /* Field: User: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'users';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '<i class="fa fa-lg fa-pencil"></i>';
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    7 => '7',
  );
  $handler->display->display_options['path'] = 'admin/host-contact-info';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'host-emails.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Supervisor email address */
  $handler->display->display_options['fields']['field_supervisor_email_address']['id'] = 'field_supervisor_email_address';
  $handler->display->display_options['fields']['field_supervisor_email_address']['table'] = 'field_data_field_supervisor_email_address';
  $handler->display->display_options['fields']['field_supervisor_email_address']['field'] = 'field_supervisor_email_address';
  $handler->display->display_options['fields']['field_supervisor_email_address']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_supervisor_email_address']['label'] = '';
  $handler->display->display_options['fields']['field_supervisor_email_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_supervisor_email_address']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_supervisor_email_address']['type'] = 'email_plain';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Field: Supervisor email address (field_supervisor_email_address) */
  $handler->display->display_options['filters']['field_supervisor_email_address_email']['id'] = 'field_supervisor_email_address_email';
  $handler->display->display_options['filters']['field_supervisor_email_address_email']['table'] = 'field_data_field_supervisor_email_address';
  $handler->display->display_options['filters']['field_supervisor_email_address_email']['field'] = 'field_supervisor_email_address_email';
  $handler->display->display_options['filters']['field_supervisor_email_address_email']['relationship'] = 'profile';
  $handler->display->display_options['filters']['field_supervisor_email_address_email']['operator'] = 'not empty';
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    7 => '7',
  );
  $handler->display->display_options['path'] = 'admin/host-email-export';
  $export['host_contact'] = $view;

  $view = new view();
  $view->name = 'internships';
  $view->description = 'A list of the user\'s internship opportunities.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Internships';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Internship Opportunities';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'create internship content';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_hosting_department' => 'field_hosting_department',
    'field_supervisor_name' => 'field_supervisor_name',
    'created' => 'created',
    'status' => 'status',
  );
  $handler->display->display_options['style_options']['default'] = 'created';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_hosting_department' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_supervisor_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<a href="[site:url]node/add/internship" class="button">+ Add an Internship Opportunity</a>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Hosting department */
  $handler->display->display_options['fields']['field_hosting_department']['id'] = 'field_hosting_department';
  $handler->display->display_options['fields']['field_hosting_department']['table'] = 'field_data_field_hosting_department';
  $handler->display->display_options['fields']['field_hosting_department']['field'] = 'field_hosting_department';
  $handler->display->display_options['fields']['field_hosting_department']['label'] = 'Department';
  /* Field: Field: Supervisor name */
  $handler->display->display_options['fields']['field_supervisor_name']['id'] = 'field_supervisor_name';
  $handler->display->display_options['fields']['field_supervisor_name']['table'] = 'field_data_field_supervisor_name';
  $handler->display->display_options['fields']['field_supervisor_name']['field'] = 'field_supervisor_name';
  $handler->display->display_options['fields']['field_supervisor_name']['label'] = 'Supervisor';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Post Date';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '<i class="fa fa-lg fa-pencil"></i>';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'internship' => 'internship',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['internships'] = $view;

  return $export;
}
