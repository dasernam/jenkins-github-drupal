<?php
/**
 * @file
 * crosswalk_page.box.inc
 */

/**
 * Implements hook_default_box().
 */
function crosswalk_page_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'jump_links';
  $box->plugin_key = 'simple';
  $box->title = 'Block Title';
  $box->description = 'What is Crosswalk Jump Links';
  $box->options = array(
    'body' => array(
      'value' => '<ul>
<li><a href="#features">A Runtime, Not A Browser</a></li>
<li><a href="#crossplatform">Cross-platform, Your Way</a></li>
<li><a href="#chromium">The Best of Chromium, Remixed</a></li>
</ul>',
      'format' => 'full_html',
    ),
    'additional_classes' => 'sidebar-block jump-links',
  );
  $export['jump_links'] = $box;

  return $export;
}
