<?php
/**
 * @file
 * doe_user.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function doe_user_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'admin_user';
  $context->description = 'Administrator User';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'user' => 'user',
        'user/*' => 'user/*',
        '~user/*/*' => '~user/*/*',
      ),
    ),
    'user' => array(
      'values' => array(
        'administrator' => 'administrator',
        'internship administrator' => 'internship administrator',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-administer_internships-block' => array(
          'module' => 'views',
          'delta' => 'administer_internships-block',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Administrator User');
  $export['admin_user'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'user';
  $context->description = 'Host User';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'user' => 'user',
        'user/*' => 'user/*',
        '~user/*/*' => '~user/*/*',
      ),
    ),
    'user' => array(
      'values' => array(
        'internship host' => 'internship host',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-internships-block' => array(
          'module' => 'views',
          'delta' => 'internships-block',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Host User');
  $export['user'] = $context;

  return $export;
}
