<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN"
  "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="<?php print $language->language ?>" lang="<?php print $language->language ?>">
<head>
  <title><?php print $head_title ?></title>
  <meta http-equiv="content-language" content="<?php print $language->language ?>" />
  <?php print $meta; ?>
  <?php print $head; ?>
  <?php print $styles; ?>
  <!--[if lte IE 7]>
    <link rel="stylesheet" href="<?php print $base_path . $bp_library_path; ?>blueprint/ie.css" type="text/css" media="screen, projection">
    <link href="<?php print $path_parent; ?>css/ie.css" rel="stylesheet"  type="text/css"  media="screen, projection" />
    <?php $styles_ie_rtl['ie']; ?>
  <![endif]-->
  <!--[if lte IE 6]>
    <link href="<?php print $path_parent; ?>css/ie6.css" rel="stylesheet"  type="text/css"  media="screen, projection" />
    <?php $styles_ie_rtl['ie6']; ?>
  <![endif]-->
</head>

<body class="<?php print $body_classes; ?>">

<div class="container">
  <div id="dcm-header" class="dcm-header-not-front">
    <div id="logo" class="span-7 prepend-1">
      <?php print $logo_block; ?>
    </div>

    <?php if ($search_box): ?>
      <div id="search-box" class="span-8 last prepend-16">
        <?php print $search_box; ?>
      </div> <!-- /#search-box -->
    <?php endif; ?>
    
    <div id="main-nav-menu" class="span-22 last">
      <div class="span-22 last">
        <?php print $header; ?>
      </div>
      <div id="dcm-date" class="prepend-9 span-13 last">
        09-11-2011 <span>&amp;</span> 10-11-2011
      </div>
    </div>
  </div>
  
  <div id="dcm-main-content" class="span-30">
    <div class="<?php print $center_classes; ?>">
      <div id="dcm-main-content-inner">
        <?php
          if ($breadcrumb != '') {
            print $breadcrumb;
          }

          if ($tabs != '') {
            print '<div class="tabs">'. $tabs .'</div>';
          }

          if ($messages != '') {
            print '<div id="messages">'. $messages .'</div>';
          }

          if ($title != '') {
            print '<h1>'. $title .'</h1>';
          }

          print $help; // Drupal already wraps this one in a class

          print $content;
          //print $feed_icons;
        ?>
      </div>
    </div>  

    <?php if ($right): ?>
      <div class="<?php print $right_classes; ?>"><?php print $right; ?></div>
    <?php endif ?>
  </div>  
  
  <div id="dcm-footer" class="span-30">
    <div class="span-21">
      <?php print $footer; ?>
    </div>
    <div id="footer-message" class="span-9 last">
      <?php print $footer_message; ?>
    </div>
  </div>

  <?php print $scripts ?>
  <?php print $closure; ?>

</div>

</body>
</html>
