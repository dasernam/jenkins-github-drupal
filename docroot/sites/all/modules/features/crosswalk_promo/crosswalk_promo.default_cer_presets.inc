<?php
/**
 * @file
 * crosswalk_promo.default_cer_presets.inc
 */

/**
 * Implements hook_default_cer().
 */
function crosswalk_promo_default_cer() {
  $export = array();

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*blog*field_reference*node*promo*field_promo_reference';
  $cnr_obj->enabled = 1;
  $export['node*blog*field_reference*node*promo*field_promo_reference'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*page*field_reference*node*promo*field_promo_reference';
  $cnr_obj->enabled = 1;
  $export['node*page*field_reference*node*promo*field_promo_reference'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*promo*field_promo_reference*node*blog*field_reference';
  $cnr_obj->enabled = 1;
  $export['node*promo*field_promo_reference*node*blog*field_reference'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*promo*field_promo_reference*node*page*field_reference';
  $cnr_obj->enabled = 1;
  $export['node*promo*field_promo_reference*node*page*field_reference'] = $cnr_obj;

  return $export;
}
