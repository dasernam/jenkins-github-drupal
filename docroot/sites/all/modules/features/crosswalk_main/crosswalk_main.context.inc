<?php
/**
 * @file
 * crosswalk_main.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function crosswalk_main_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'crosswalk_homepage';
  $context->description = '';
  $context->tag = 'crosswalk';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-crosswalk_banner' => array(
          'module' => 'boxes',
          'delta' => 'crosswalk_banner',
          'region' => 'header',
          'weight' => '-18',
        ),
        'views-what_is_crosswalk-block' => array(
          'module' => 'views',
          'delta' => 'what_is_crosswalk-block',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-blog_listing-homepage_blog_list' => array(
          'module' => 'views',
          'delta' => 'blog_listing-homepage_blog_list',
          'region' => 'content',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('crosswalk');
  $export['crosswalk_homepage'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'crosswalk_structure';
  $context->description = 'A context to capture block configuration for all pages.';
  $context->tag = 'crosswalk';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~admin*' => '~admin*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'responsive_navigation-1' => array(
          'module' => 'responsive_navigation',
          'delta' => '1',
          'region' => 'header',
          'weight' => '-10',
        ),
        'menu-menu-footer-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-footer-menu',
          'region' => 'footer',
          'weight' => '-10',
        ),
        'boxes-legal_text' => array(
          'module' => 'boxes',
          'delta' => 'legal_text',
          'region' => 'footer',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('A context to capture block configuration for all pages.');
  t('crosswalk');
  $export['crosswalk_structure'] = $context;

  return $export;
}
