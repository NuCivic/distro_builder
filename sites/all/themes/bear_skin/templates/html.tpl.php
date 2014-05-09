<!DOCTYPE html>
<!--[if IEMobile 7]><html class="iem7" <?php print $html_attributes; ?>><![endif]-->
<!--[if lte IE 6]><html class="lt-ie9 lt-ie8 lt-ie7" <?php print $html_attributes; ?>><![endif]-->
<!--[if (IE 7)&(!IEMobile)]><html class="lt-ie9 lt-ie8" <?php print $html_attributes; ?>><![endif]-->
<!--[if IE 8]><html class="lt-ie9" <?php print $html_attributes; ?>><![endif]-->
<!--[if (gte IE 9)|(gt IEMobile 7)]><!--><html <?php print $html_attributes . $rdf_namespaces; ?>><!--<![endif]-->

<head profile="<?php print $grddl_profile; ?>">
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>

  <?php if ($default_mobile_metatags): ?>
    <meta name="MobileOptimized" content="width">
    <meta name="HandheldFriendly" content="true">
    <meta name="viewport" content="initial-scale=1,user-scalable=no,maximum-scale=1">
  <?php endif; ?>
  <meta http-equiv="cleartype" content="on">
  <?php print $styles; ?>
  <?php if (theme_get_setting('sticky_footer')): ?>
    <link href="<?php print $base_path . $path_to_bear_skin; ?>/css/sticky-footer.css" media="all" rel="stylesheet" type="text/css" />
  <?php endif; ?>
  <?php print $scripts; ?>
  <?php if ($add_respond_js): ?>
    <!--[if lt IE 9]>
    <script src="<?php print $base_path . $path_to_zen; ?>/js/html5-respond.js"></script>
    <![endif]-->
  <?php elseif ($add_html5_shim): ?>
    <!--[if lt IE 9]>
    <script src="<?php print $base_path . $path_to_zen; ?>/js/html5.js"></script>
    <![endif]-->
  <?php endif; ?>
  <script>jQuery.noConflict();</script>
</head>
<body class="<?php print $classes; ?>" <?php print $attributes;?>>
  <?php if ($skip_link_text && $skip_link_anchor): ?>
    <p id="skip-link">
      <a href="#<?php print $skip_link_anchor; ?>" class="element-invisible element-focusable"><?php print $skip_link_text; ?></a>
    </p>
  <?php endif; ?>
  <?php print $page_top; ?>
  <?php print $page; ?>
  <?php print $page_bottom; ?>
<?php if (theme_get_setting('responsive_nav')): ?>
    <script src="<?php print $base_path . $path_to_bear_skin; ?>/js/jquery.meanmenu.2.0.min.js"></script>
    <script>
    (function ($, Drupal, window, document, undefined) {
      $(function () {
        $('.menu-block-wrapper').meanmenu({
          meanScreenWidth: "800",
          meanShowChildren: true,
          meanExpand: "+",
          meanContract: "-",
        });
      });
    })(jQuery, Drupal, this, this.document);
    </script>
  <?php endif; ?>
</body>
</html>
