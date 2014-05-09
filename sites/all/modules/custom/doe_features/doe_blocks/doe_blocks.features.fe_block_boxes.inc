<?php
/**
 * @file
 * doe_blocks.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function doe_blocks_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Front page action buttons';
  $fe_block_boxes->format = 'no_wysiwyg';
  $fe_block_boxes->machine_name = 'doe_action_buttons';
  $fe_block_boxes->body = '<div class="first"><a href="node/4" class="action-btn"><h2>Learn</h2>Benefits of Hosting CTE Summer Scholars</a></div>
<div class="second"><a href="user/register" class="action-btn"><h2>Register</h2>CTE Summer Scholars are ready to work</a></div>
<div class="third"><a href="node/18" class="action-btn"><h2>Plan</h2>Create Internship Opportunities</a></div>';

  $export['doe_action_buttons'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Bank of America';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'doe_bank_of_america';
  $fe_block_boxes->body = '<p>[[{"fid":"4","view_mode":"default","fields":{"format":"default","field_file_image_alt_text[und][0][value]":"Bank of America - Proud Sponsor","field_file_image_title_text[und][0][value]":"Bank of America"},"type":"media","link_text":null,"attributes":{"alt":"Bank of America - Proud Sponsor","title":"Bank of America","height":"72","width":"325","style":"width: 271px; height: 60px;","class":"media-element file-default"}}]]</p>';

  $export['doe_bank_of_america'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Front page call out';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'doe_callout';
  $fe_block_boxes->body = '<ul><li>CTE students in New York City <big>graduate at a higher rate</big> than those at non-CTE schools. Benefits to high-risk students such as Black and Latino males are even higher. <small>(Community Service Society of NY, 2014)</small>.</li><li>Training programs like CTE Summer Scholars that combine classroom and workplace training are <big>30%</big> more likely to lead to <big>positive employment outcomes</big>. <small>(International Labour Office, Geneva, 2011)</small>.</li><li>Young people who establish steady employment in their teens and 20s stand to <big>increase their earnings</big> an average of $22,000 per person in the next 10 years. <small>(Center for American Progress, 2013)</small>.</li></ul>';

  $export['doe_callout'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Case Studies Link';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'doe_casestudies_link';
  $fe_block_boxes->body = '<p><img alt="" class="media-element file-default" data-file_info="%7B%22fid%22:%2220%22,%22view_mode%22:%22default%22,%22fields%22:%7B%22format%22:%22default%22,%22field_file_image_alt_text%5Bund%5D%5B0%5D%5Bvalue%5D%22:%22%22,%22field_file_image_title_text%5Bund%5D%5B0%5D%5Bvalue%5D%22:%22%22%7D,%22type%22:%22media%22%7D" src="http://nyc-doe.local/sites/nyc-doe.local/files/brooklyn_das_office_2012_0.jpg" title="" height="372" width="712"></p><p><a href="case-studies">Click Here to View Case Studies</a></p>';

  $export['doe_casestudies_link'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Front Page Intro Text';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'doe_hero_text';
  $fe_block_boxes->body = '<p>CTE students are ready to work this summer in information technology, advertising, media and graphics. Our staff works with you to match students to your needs in these areas and offers coaching to both students and supervisors to ensure a successful summer.</p>';

  $export['doe_hero_text'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'NYC Dept. of Education logo';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'doe_logo';
  $fe_block_boxes->body = '<p><a href="http://schools.nyc.gov/ChoicesEnrollment/SpecialPrograms/CTE/default.htm">[[{"fid":"16","view_mode":"default","fields":{"format":"default","field_file_image_alt_text[und][0][value]":"NYC Department of Education","field_file_image_title_text[und][0][value]":""},"type":"media","link_text":null,"attributes":{"alt":"NYC Department of Education","class":"media-element file-default"}}]]</a></p>';

  $export['doe_logo'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Mission Statement';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'doe_mission';
  $fe_block_boxes->body = '<p>CTE Summer Scholars assists participating students studying for careers in high-value sectors of the the New York City economy toward fulfilling their college and career ambitions through academic support and structured, positive work experience.</p>';

  $export['doe_mission'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Project Intro Text';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'doe_projects';
  $fe_block_boxes->body = '<p>To help you think about what kind of projects would be appropriate for your interns, we are providing several samples based on actual projects completed last summer, and the skills taught by the participating schools.</p><p>Based on the needs you define, we will select students who have learned the requested skills for placement at your site.</p><p>Once you register to host interns (<a href="[site:url]user/register">click here</a>), you will have access to templates that allow you to customize these samples to your needs, or to create projects of your own.</p>';

  $export['doe_projects'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Pull Quote';
  $fe_block_boxes->format = 'no_wysiwyg';
  $fe_block_boxes->machine_name = 'doe_pull_quote';
  $fe_block_boxes->body = '<blockquote>CTE Summer scholars has made me an independent person, it has matured me greatly. It also gave me a better understanding of my strengths and weaknesses, and an understanding of future careers.</blockquote>
<cite>City Polytechnic  High School student, <br />CTE Summer Scholar, 2013</cite>';

  $export['doe_pull_quote'] = $fe_block_boxes;

  return $export;
}
