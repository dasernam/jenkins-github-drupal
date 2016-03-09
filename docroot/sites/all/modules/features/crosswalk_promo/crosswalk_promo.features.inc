<?php
/**
 * @file
 * crosswalk_promo.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function crosswalk_promo_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "cer" && $api == "default_cer_presets") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function crosswalk_promo_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function crosswalk_promo_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: how_does_it_work_
  $nodequeues['how_does_it_work_'] = array(
    'name' => 'how_does_it_work_',
    'title' => 'How Does it Work?',
    'subqueue_title' => '',
    'size' => 3,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'promo',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: what_is_the_crosswalk_project_
  $nodequeues['what_is_the_crosswalk_project_'] = array(
    'name' => 'what_is_the_crosswalk_project_',
    'title' => 'What Is The Crosswalk Project?',
    'subqueue_title' => '',
    'size' => 3,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'promo',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: why_use_crosswalk_runtime_
  $nodequeues['why_use_crosswalk_runtime_'] = array(
    'name' => 'why_use_crosswalk_runtime_',
    'title' => 'Why Use Crosswalk Runtime?',
    'subqueue_title' => '',
    'size' => 3,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'promo',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}

/**
 * Implements hook_image_default_styles().
 */
function crosswalk_promo_image_default_styles() {
  $styles = array();

  // Exported image style: support_image.
  $styles['support_image'] = array(
    'name' => 'support_image',
    'effects' => array(
      1 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 140,
          'height' => 140,
          'upscale' => 1,
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
function crosswalk_promo_node_info() {
  $items = array(
    'promo' => array(
      'name' => t('Promo'),
      'base' => 'node_content',
      'description' => t('A promo item can be placed on the homepage to highlight or draw out other content'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
