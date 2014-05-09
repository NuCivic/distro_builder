<?php
/**
 * @file
 * doe_slideshow.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function doe_slideshow_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function doe_slideshow_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function doe_slideshow_image_default_styles() {
  $styles = array();

  // Exported image style: front_slideshow.
  $styles['front_slideshow'] = array(
    'name' => 'front_slideshow',
    'label' => 'Front slideshow',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 620,
          'height' => 292,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function doe_slideshow_node_info() {
  $items = array(
    'highlight' => array(
      'name' => t('Highlight'),
      'base' => 'node_content',
      'description' => t('Featured content for the front page slideshow.'),
      'has_title' => '1',
      'title_label' => t('Headline'),
      'help' => '',
    ),
  );
  return $items;
}
