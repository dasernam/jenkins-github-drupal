<?php
/**
 * @file
 * crosswalk_blog.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function crosswalk_blog_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'crosswalk_blog';
  $context->description = '';
  $context->tag = 'crosswalk';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'blog' => 'blog',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-blog_listing-block' => array(
          'module' => 'views',
          'delta' => 'blog_listing-block',
          'region' => 'sidebar_first',
          'weight' => '-19',
        ),
        'webform-client-block-9' => array(
          'module' => 'webform',
          'delta' => 'client-block-9',
          'region' => 'sidebar_first',
          'weight' => '-18',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('crosswalk');
  $export['crosswalk_blog'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'crosswalk_blog_view';
  $context->description = 'Context for the blog listing page at /blog';
  $context->tag = 'crosswalk';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'blog' => 'blog',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-blog_listing_title' => array(
          'module' => 'boxes',
          'delta' => 'blog_listing_title',
          'region' => 'main_prefix',
          'weight' => '-10',
        ),
        'views-blog_listing-block' => array(
          'module' => 'views',
          'delta' => 'blog_listing-block',
          'region' => 'sidebar_first',
          'weight' => '-19',
        ),
        'webform-client-block-9' => array(
          'module' => 'webform',
          'delta' => 'client-block-9',
          'region' => 'sidebar_first',
          'weight' => '-18',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context for the blog listing page at /blog');
  t('crosswalk');
  $export['crosswalk_blog_view'] = $context;

  return $export;
}
