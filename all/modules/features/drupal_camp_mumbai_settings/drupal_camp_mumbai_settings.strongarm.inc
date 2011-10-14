<?php

/**
 * Implementation of hook_strongarm().
 */
function drupal_camp_mumbai_settings_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_featured_front_page_content';
  $strongarm->value = 0;
  $export['comment_anonymous_featured_front_page_content'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_featured_front_page_content';
  $strongarm->value = '3';
  $export['comment_controls_featured_front_page_content'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_featured_front_page_content';
  $strongarm->value = '4';
  $export['comment_default_mode_featured_front_page_content'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_featured_front_page_content';
  $strongarm->value = '1';
  $export['comment_default_order_featured_front_page_content'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_featured_front_page_content';
  $strongarm->value = '50';
  $export['comment_default_per_page_featured_front_page_content'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_featured_front_page_content';
  $strongarm->value = '2';
  $export['comment_featured_front_page_content'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_featured_front_page_content';
  $strongarm->value = '0';
  $export['comment_form_location_featured_front_page_content'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_featured_front_page_content';
  $strongarm->value = '1';
  $export['comment_preview_featured_front_page_content'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_featured_front_page_content';
  $strongarm->value = '1';
  $export['comment_subject_field_featured_front_page_content'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_featured_front_page_content';
  $strongarm->value = '0';
  $export['language_content_type_featured_front_page_content'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_featured_front_page_content';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_featured_front_page_content'] = $strongarm;

  return $export;
}
