<?php
/**
 * @file
 * demo_drupal_camp.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function demo_drupal_camp_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_articles:articles.
  $menu_links['main-menu_articles:articles'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'articles',
    'router_path' => 'articles',
    'link_title' => 'Articles',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_articles:articles',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Articles');

  return $menu_links;
}
