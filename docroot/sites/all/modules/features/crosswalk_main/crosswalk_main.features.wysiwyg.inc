<?php
/**
 * @file
 * crosswalk_main.features.wysiwyg.inc
 */

/**
 * Implements hook_wysiwyg_default_profiles().
 */
function crosswalk_main_wysiwyg_default_profiles() {
  $profiles = array();

  // Exported profile: markdown
  $profiles['markdown'] = array(
    'format' => 'markdown',
    'editor' => 'epiceditor',
    'settings' => array(
      'default' => 0,
      'user_choose' => 0,
      'show_toggle' => 1,
      'theme' => 'advanced',
      'language' => 'en',
      'toolbar_loc' => 'top',
      'toolbar_align' => 'left',
      'path_loc' => 'top',
      'resizing' => 1,
      'verify_html' => 1,
      'preformatted' => 0,
      'convert_fonts_to_spans' => 1,
      'remove_linebreaks' => 1,
      'apply_source_formatting' => 0,
      'paste_auto_cleanup_on_paste' => 0,
      'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
      'css_setting' => 'theme',
      'css_path' => '',
      'css_classes' => '',
    ),
    'rdf_mapping' => array(),
  );

  return $profiles;
}
