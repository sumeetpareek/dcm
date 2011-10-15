<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function drupal_camp_mumbai_settings_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-header-menu:community
  $menu_links['menu-header-menu:community'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'community',
    'router_path' => 'community',
    'link_title' => 'Community',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-header-menu:node/2
  $menu_links['menu-header-menu:node/2'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'Program',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-header-menu:program/sessions
  $menu_links['menu-header-menu:program/sessions'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'program/sessions',
    'router_path' => 'program/sessions',
    'link_title' => 'Sessions',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-header-menu:sponsors
  $menu_links['menu-header-menu:sponsors'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'sponsors',
    'router_path' => 'sponsors',
    'link_title' => 'Sponsors',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-quick-links-anon:contact
  $menu_links['menu-quick-links-anon:contact'] = array(
    'menu_name' => 'menu-quick-links-anon',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: menu-quick-links-anon:program/sessions/accepted
  $menu_links['menu-quick-links-anon:program/sessions/accepted'] = array(
    'menu_name' => 'menu-quick-links-anon',
    'link_path' => 'program/sessions/accepted',
    'router_path' => 'program/sessions/accepted',
    'link_title' => 'Accepted Sessions',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: menu-quick-links-anon:program/sessions/proposed
  $menu_links['menu-quick-links-anon:program/sessions/proposed'] = array(
    'menu_name' => 'menu-quick-links-anon',
    'link_path' => 'program/sessions/proposed',
    'router_path' => 'program/sessions/proposed',
    'link_title' => 'Proposed Sessions',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: menu-quick-links:contact
  $menu_links['menu-quick-links:contact'] = array(
    'menu_name' => 'menu-quick-links',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
  );
  // Exported menu link: menu-quick-links:node/add/sessions
  $menu_links['menu-quick-links:node/add/sessions'] = array(
    'menu_name' => 'menu-quick-links',
    'link_path' => 'node/add/sessions',
    'router_path' => 'node/add',
    'link_title' => 'Submit Session',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Exported menu link: menu-quick-links:program/sessions/accepted
  $menu_links['menu-quick-links:program/sessions/accepted'] = array(
    'menu_name' => 'menu-quick-links',
    'link_path' => 'program/sessions/accepted',
    'router_path' => 'program/sessions/accepted',
    'link_title' => 'Accepted Sessions',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: menu-quick-links:program/sessions/proposed
  $menu_links['menu-quick-links:program/sessions/proposed'] = array(
    'menu_name' => 'menu-quick-links',
    'link_path' => 'program/sessions/proposed',
    'router_path' => 'program/sessions/proposed',
    'link_title' => 'Proposed Sessions',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: menu-quick-links:user
  $menu_links['menu-quick-links:user'] = array(
    'menu_name' => 'menu-quick-links',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'My Account',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Accepted Sessions');
  t('Community');
  t('Contact');
  t('My Account');
  t('Program');
  t('Proposed Sessions');
  t('Sessions');
  t('Sponsors');
  t('Submit Session');


  return $menu_links;
}
