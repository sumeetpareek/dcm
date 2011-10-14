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
  <div id="front-page-wrapper">
    <div id="header">
      <?php if ($title): ?>
        <div id="logo" class="site_title">
          <?php print $logo_block; ?>
        </div>
      <?php else: ?>
        <div id="logo" class="span-7 prepend-1">
          <?php print $logo_block; ?>
        </div>
      <?php endif; ?>
      
      <?php if ($search_box): ?>
        <div id="search-box" class="span-8 last prepend-16">
          <?php print $search_box; ?>
        </div> <!-- /#search-box -->
      <?php endif; ?>
      
      <div id="main-nav-menu" class="span-22 last">
        <?php print $header; ?>
      </div>
    </div>
  
  </div>
  
  <div class="col-center span-24">
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

      // print $content;
      // print $feed_icons;
    ?>

    <?php if ($footer_message || $footer): ?>
      <div id="footer" class="clear">
        <?php if ($footer): ?>
          <?php print $footer; ?>
        <?php endif; ?>
        <?php if ($footer_message): ?>
          <div id="footer-message"><?php print $footer_message; ?></div>
        <?php endif; ?>
      </div>
    <?php endif; ?>
  </div>

  <?php print $scripts ?>
  <?php print $closure; ?>
</div>


</body>
</html>
