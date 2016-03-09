<?php
/**
 * @file
 * crosswalk_main.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function crosswalk_main_filter_default_formats() {
  $formats = array();

  // Exported format: Full HTML.
  $formats['full_html'] = array(
    'format' => 'full_html',
    'name' => 'Full HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Markdown.
  $formats['markdown'] = array(
    'format' => 'markdown',
    'name' => 'Markdown',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_gfm' => array(
        'weight' => -49,
        'status' => 1,
        'settings' => array(
          'gfm' => array(
            'gfm_autolink' => 1,
            'gfm_fenced_code' => 1,
            'gfm_escape_underscores' => 1,
            'gfm_hardwrap_newlines' => 1,
          ),
        ),
      ),
      'filter_markdown' => array(
        'weight' => -48,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -47,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
