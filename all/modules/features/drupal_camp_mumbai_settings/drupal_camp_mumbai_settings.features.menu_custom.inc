<?php

/**
 * Implementation of hook_menu_default_menu_custom().
 */
function drupal_camp_mumbai_settings_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-header-menu
  $menus['menu-header-menu'] = array(
    'menu_name' => 'menu-header-menu',
    'title' => 'Header Menu',
    'description' => '',
  );
  // Exported menu: menu-quick-links-anon
  $menus['menu-quick-links-anon'] = array(
    'menu_name' => 'menu-quick-links-anon',
    'title' => 'Quick Links Anonymous',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Header Menu');
  t('Quick Links Anonymous');


  return $menus;
}
