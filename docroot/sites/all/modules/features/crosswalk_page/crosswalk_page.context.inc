<?php
/**
 * @file
 * crosswalk_page.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function crosswalk_page_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'crosswalk_page';
  $context->description = '';
  $context->tag = 'crosswalk';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'page' => 'page',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'crosswalk-crosswalk_wide_page_title' => array(
          'module' => 'crosswalk',
          'delta' => 'crosswalk_wide_page_title',
          'region' => 'main_prefix',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('crosswalk');
  $export['crosswalk_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'crosswalk_try_crosswalk';
  $context->description = '';
  $context->tag = 'crosswalk_page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/8' => 'node/8',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'webform-client-block-9' => array(
          'module' => 'webform',
          'delta' => 'client-block-9',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('crosswalk_page');
  $export['crosswalk_try_crosswalk'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'crosswalk_what_is_crosswalk';
  $context->description = 'Adding Jump Links to "What is Crosswalk"';
  $context->tag = 'crosswalk';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'what-is-crosswalk' => 'what-is-crosswalk',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-jump_links' => array(
          'module' => 'boxes',
          'delta' => 'jump_links',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Adding Jump Links to "What is Crosswalk"');
  t('crosswalk');
  $export['crosswalk_what_is_crosswalk'] = $context;

  return $export;
}
