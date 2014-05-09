<?php
/**
 * @file
 * doe_user.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function doe_user_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'access all webform results'.
  $permissions['access all webform results'] = array(
    'name' => 'access all webform results',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access media browser'.
  $permissions['access media browser'] = array(
    'name' => 'access media browser',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
      'internship host' => 'internship host',
    ),
    'module' => 'media',
  );

  // Exported permission: 'access own webform results'.
  $permissions['access own webform results'] = array(
    'name' => 'access own webform results',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access own webform submissions'.
  $permissions['access own webform submissions'] = array(
    'name' => 'access own webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access print'.
  $permissions['access print'] = array(
    'name' => 'access print',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'print',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'add media from remote sources'.
  $permissions['add media from remote sources'] = array(
    'name' => 'add media from remote sources',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'media_internet',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer contexts'.
  $permissions['administer contexts'] = array(
    'name' => 'administer contexts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'context_ui',
  );

  // Exported permission: 'administer entity view modes'.
  $permissions['administer entity view modes'] = array(
    'name' => 'administer entity view modes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'entity_view_mode',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'administer fieldgroups'.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_group',
  );

  // Exported permission: 'administer file types'.
  $permissions['administer file types'] = array(
    'name' => 'administer file types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'administer files'.
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'administer fitvids'.
  $permissions['administer fitvids'] = array(
    'name' => 'administer fitvids',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'fitvids',
  );

  // Exported permission: 'administer flexslider'.
  $permissions['administer flexslider'] = array(
    'name' => 'administer flexslider',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'flexslider',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer linkit'.
  $permissions['administer linkit'] = array(
    'name' => 'administer linkit',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'linkit',
  );

  // Exported permission: 'administer media browser'.
  $permissions['administer media browser'] = array(
    'name' => 'administer media browser',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer module filter'.
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'module_filter',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer page manager'.
  $permissions['administer page manager'] = array(
    'name' => 'administer page manager',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: 'administer pathauto'.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer print'.
  $permissions['administer print'] = array(
    'name' => 'administer print',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'print',
  );

  // Exported permission: 'administer profile types'.
  $permissions['administer profile types'] = array(
    'name' => 'administer profile types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'administer profiles'.
  $permissions['administer profiles'] = array(
    'name' => 'administer profiles',
    'roles' => array(
      'administrator' => 'administrator',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'administer redirects'.
  $permissions['administer redirects'] = array(
    'name' => 'administer redirects',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'redirect',
  );

  // Exported permission: 'administer responsive menus'.
  $permissions['administer responsive menus'] = array(
    'name' => 'administer responsive menus',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'responsive_menus',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'administrator' => 'administrator',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer video styles'.
  $permissions['administer video styles'] = array(
    'name' => 'administer video styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'video_embed_field',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'bypass file access'.
  $permissions['bypass file access'] = array(
    'name' => 'bypass file access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'context ajax block access'.
  $permissions['context ajax block access'] = array(
    'name' => 'context ajax block access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'context_ui',
  );

  // Exported permission: 'create blog content'.
  $permissions['create blog content'] = array(
    'name' => 'create blog content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create case_study content'.
  $permissions['create case_study content'] = array(
    'name' => 'create case_study content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create files'.
  $permissions['create files'] = array(
    'name' => 'create files',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
      'internship host' => 'internship host',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'create highlight content'.
  $permissions['create highlight content'] = array(
    'name' => 'create highlight content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create internship content'.
  $permissions['create internship content'] = array(
    'name' => 'create internship content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
      'internship host' => 'internship host',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create project content'.
  $permissions['create project content'] = array(
    'name' => 'create project content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create school content'.
  $permissions['create school content'] = array(
    'name' => 'create school content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'create webform content'.
  $permissions['create webform content'] = array(
    'name' => 'create webform content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'define node populate templates'.
  $permissions['define node populate templates'] = array(
    'name' => 'define node populate templates',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'node_populate',
  );

  // Exported permission: 'delete all webform submissions'.
  $permissions['delete all webform submissions'] = array(
    'name' => 'delete all webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'delete any audio files'.
  $permissions['delete any audio files'] = array(
    'name' => 'delete any audio files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any blog content'.
  $permissions['delete any blog content'] = array(
    'name' => 'delete any blog content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any case_study content'.
  $permissions['delete any case_study content'] = array(
    'name' => 'delete any case_study content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any document files'.
  $permissions['delete any document files'] = array(
    'name' => 'delete any document files',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any highlight content'.
  $permissions['delete any highlight content'] = array(
    'name' => 'delete any highlight content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any image files'.
  $permissions['delete any image files'] = array(
    'name' => 'delete any image files',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any internship content'.
  $permissions['delete any internship content'] = array(
    'name' => 'delete any internship content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any project content'.
  $permissions['delete any project content'] = array(
    'name' => 'delete any project content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any school content'.
  $permissions['delete any school content'] = array(
    'name' => 'delete any school content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any video files'.
  $permissions['delete any video files'] = array(
    'name' => 'delete any video files',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any webform content'.
  $permissions['delete any webform content'] = array(
    'name' => 'delete any webform content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own audio files'.
  $permissions['delete own audio files'] = array(
    'name' => 'delete own audio files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own blog content'.
  $permissions['delete own blog content'] = array(
    'name' => 'delete own blog content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own case_study content'.
  $permissions['delete own case_study content'] = array(
    'name' => 'delete own case_study content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own document files'.
  $permissions['delete own document files'] = array(
    'name' => 'delete own document files',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own highlight content'.
  $permissions['delete own highlight content'] = array(
    'name' => 'delete own highlight content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own image files'.
  $permissions['delete own image files'] = array(
    'name' => 'delete own image files',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
      'internship host' => 'internship host',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own internship content'.
  $permissions['delete own internship content'] = array(
    'name' => 'delete own internship content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
      'internship host' => 'internship host',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own project content'.
  $permissions['delete own project content'] = array(
    'name' => 'delete own project content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own school content'.
  $permissions['delete own school content'] = array(
    'name' => 'delete own school content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own video files'.
  $permissions['delete own video files'] = array(
    'name' => 'delete own video files',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own webform content'.
  $permissions['delete own webform content'] = array(
    'name' => 'delete own webform content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own webform submissions'.
  $permissions['delete own webform submissions'] = array(
    'name' => 'delete own webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in collaboration_project_management'.
  $permissions['delete terms in collaboration_project_management'] = array(
    'name' => 'delete terms in collaboration_project_management',
    'roles' => array(
      'administrator' => 'administrator',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in computer_networking_maintenance_repair'.
  $permissions['delete terms in computer_networking_maintenance_repair'] = array(
    'name' => 'delete terms in computer_networking_maintenance_repair',
    'roles' => array(
      'administrator' => 'administrator',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in database_office'.
  $permissions['delete terms in database_office'] = array(
    'name' => 'delete terms in database_office',
    'roles' => array(
      'administrator' => 'administrator',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in it_services'.
  $permissions['delete terms in it_services'] = array(
    'name' => 'delete terms in it_services',
    'roles' => array(
      'administrator' => 'administrator',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in market_research'.
  $permissions['delete terms in market_research'] = array(
    'name' => 'delete terms in market_research',
    'roles' => array(
      'administrator' => 'administrator',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in marketing_content_development'.
  $permissions['delete terms in marketing_content_development'] = array(
    'name' => 'delete terms in marketing_content_development',
    'roles' => array(
      'administrator' => 'administrator',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in media_event_production'.
  $permissions['delete terms in media_event_production'] = array(
    'name' => 'delete terms in media_event_production',
    'roles' => array(
      'administrator' => 'administrator',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in web_development_document_design'.
  $permissions['delete terms in web_development_document_design'] = array(
    'name' => 'delete terms in web_development_document_design',
    'roles' => array(
      'administrator' => 'administrator',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'display drupal links'.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'download any audio files'.
  $permissions['download any audio files'] = array(
    'name' => 'download any audio files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any document files'.
  $permissions['download any document files'] = array(
    'name' => 'download any document files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any image files'.
  $permissions['download any image files'] = array(
    'name' => 'download any image files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any video files'.
  $permissions['download any video files'] = array(
    'name' => 'download any video files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own audio files'.
  $permissions['download own audio files'] = array(
    'name' => 'download own audio files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own document files'.
  $permissions['download own document files'] = array(
    'name' => 'download own document files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own image files'.
  $permissions['download own image files'] = array(
    'name' => 'download own image files',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
      'internship host' => 'internship host',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own video files'.
  $permissions['download own video files'] = array(
    'name' => 'download own video files',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit all webform submissions'.
  $permissions['edit all webform submissions'] = array(
    'name' => 'edit all webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'edit any audio files'.
  $permissions['edit any audio files'] = array(
    'name' => 'edit any audio files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any blog content'.
  $permissions['edit any blog content'] = array(
    'name' => 'edit any blog content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any case_study content'.
  $permissions['edit any case_study content'] = array(
    'name' => 'edit any case_study content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any document files'.
  $permissions['edit any document files'] = array(
    'name' => 'edit any document files',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any highlight content'.
  $permissions['edit any highlight content'] = array(
    'name' => 'edit any highlight content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any image files'.
  $permissions['edit any image files'] = array(
    'name' => 'edit any image files',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any internship content'.
  $permissions['edit any internship content'] = array(
    'name' => 'edit any internship content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any main profile'.
  $permissions['edit any main profile'] = array(
    'name' => 'edit any main profile',
    'roles' => array(
      'administrator' => 'administrator',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any project content'.
  $permissions['edit any project content'] = array(
    'name' => 'edit any project content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any school content'.
  $permissions['edit any school content'] = array(
    'name' => 'edit any school content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any video files'.
  $permissions['edit any video files'] = array(
    'name' => 'edit any video files',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any webform content'.
  $permissions['edit any webform content'] = array(
    'name' => 'edit any webform content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own audio files'.
  $permissions['edit own audio files'] = array(
    'name' => 'edit own audio files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own blog content'.
  $permissions['edit own blog content'] = array(
    'name' => 'edit own blog content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own case_study content'.
  $permissions['edit own case_study content'] = array(
    'name' => 'edit own case_study content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own document files'.
  $permissions['edit own document files'] = array(
    'name' => 'edit own document files',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own highlight content'.
  $permissions['edit own highlight content'] = array(
    'name' => 'edit own highlight content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own image files'.
  $permissions['edit own image files'] = array(
    'name' => 'edit own image files',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
      'internship host' => 'internship host',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own internship content'.
  $permissions['edit own internship content'] = array(
    'name' => 'edit own internship content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
      'internship host' => 'internship host',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own main profile'.
  $permissions['edit own main profile'] = array(
    'name' => 'edit own main profile',
    'roles' => array(
      'administrator' => 'administrator',
      'internship administrator' => 'internship administrator',
      'internship host' => 'internship host',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own project content'.
  $permissions['edit own project content'] = array(
    'name' => 'edit own project content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own school content'.
  $permissions['edit own school content'] = array(
    'name' => 'edit own school content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own video files'.
  $permissions['edit own video files'] = array(
    'name' => 'edit own video files',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own webform content'.
  $permissions['edit own webform content'] = array(
    'name' => 'edit own webform content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own webform submissions'.
  $permissions['edit own webform submissions'] = array(
    'name' => 'edit own webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'edit terms in collaboration_project_management'.
  $permissions['edit terms in collaboration_project_management'] = array(
    'name' => 'edit terms in collaboration_project_management',
    'roles' => array(
      'administrator' => 'administrator',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in computer_networking_maintenance_repair'.
  $permissions['edit terms in computer_networking_maintenance_repair'] = array(
    'name' => 'edit terms in computer_networking_maintenance_repair',
    'roles' => array(
      'administrator' => 'administrator',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in database_office'.
  $permissions['edit terms in database_office'] = array(
    'name' => 'edit terms in database_office',
    'roles' => array(
      'administrator' => 'administrator',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in it_services'.
  $permissions['edit terms in it_services'] = array(
    'name' => 'edit terms in it_services',
    'roles' => array(
      'administrator' => 'administrator',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in market_research'.
  $permissions['edit terms in market_research'] = array(
    'name' => 'edit terms in market_research',
    'roles' => array(
      'administrator' => 'administrator',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in marketing_content_development'.
  $permissions['edit terms in marketing_content_development'] = array(
    'name' => 'edit terms in marketing_content_development',
    'roles' => array(
      'administrator' => 'administrator',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in media_event_production'.
  $permissions['edit terms in media_event_production'] = array(
    'name' => 'edit terms in media_event_production',
    'roles' => array(
      'administrator' => 'administrator',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in web_development_document_design'.
  $permissions['edit terms in web_development_document_design'] = array(
    'name' => 'edit terms in web_development_document_design',
    'roles' => array(
      'administrator' => 'administrator',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'flush caches'.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'import media'.
  $permissions['import media'] = array(
    'name' => 'import media',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'media_bulk_upload',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'node-specific print configuration'.
  $permissions['node-specific print configuration'] = array(
    'name' => 'node-specific print configuration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'print_ui',
  );

  // Exported permission: 'notify of path changes'.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'use page manager'.
  $permissions['use page manager'] = array(
    'name' => 'use page manager',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format no_wysiwyg'.
  $permissions['use text format no_wysiwyg'] = array(
    'name' => 'use text format no_wysiwyg',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format php_code'.
  $permissions['use text format php_code'] = array(
    'name' => 'use text format php_code',
    'roles' => array(),
    'module' => 'filter',
  );

  // Exported permission: 'view any main profile'.
  $permissions['view any main profile'] = array(
    'name' => 'view any main profile',
    'roles' => array(
      'administrator' => 'administrator',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view files'.
  $permissions['view files'] = array(
    'name' => 'view files',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own files'.
  $permissions['view own files'] = array(
    'name' => 'view own files',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
      'internship host' => 'internship host',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own main profile'.
  $permissions['view own main profile'] = array(
    'name' => 'view own main profile',
    'roles' => array(
      'administrator' => 'administrator',
      'internship administrator' => 'internship administrator',
      'internship host' => 'internship host',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view own private files'.
  $permissions['view own private files'] = array(
    'name' => 'view own private files',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
      'internship host' => 'internship host',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view private files'.
  $permissions['view private files'] = array(
    'name' => 'view private files',
    'roles' => array(
      'administrator' => 'administrator',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'internship administrator' => 'internship administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view style guides'.
  $permissions['view style guides'] = array(
    'name' => 'view style guides',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'styleguide',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  return $permissions;
}
