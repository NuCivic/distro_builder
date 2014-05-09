<?php

/**
 * @file
 * Slideshow highlight node.
 */
?>

<div class="slideshow">
  <a href="<?php print render($content['field_target']); ?>">
    <?php print render($content['field_image']) ?>
    <div class="slide-text">
      <h2><?php print $title; ?></h2>
      <?php print render($content['field_kicker']) ?>
    </div>
  </a>
</div>
