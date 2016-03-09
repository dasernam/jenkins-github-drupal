<?php
/**
 * @file
 * crosswalk_blog.box.inc
 */

/**
 * Implements hook_default_box().
 */
function crosswalk_blog_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'blog_listing_title';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Blog Listing Title';
  $box->options = array(
    'body' => array(
      'value' => 'Crosswalk Blog',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['blog_listing_title'] = $box;

  return $export;
}
