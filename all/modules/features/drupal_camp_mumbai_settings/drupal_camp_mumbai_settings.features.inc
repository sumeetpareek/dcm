<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function drupal_camp_mumbai_settings_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function drupal_camp_mumbai_settings_node_info() {
  $items = array(
    'featured_front_page_content' => array(
      'name' => t('Front Page featured content'),
      'module' => 'features',
      'description' => t('Anything that needs to be pushed to front page should be added to this content type. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function drupal_camp_mumbai_settings_views_api() {
  return array(
    'api' => '2',
  );
}
