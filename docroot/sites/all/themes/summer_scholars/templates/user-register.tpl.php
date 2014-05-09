<p><?php print render($intro_text); ?></p>
<div class="summer-scholars-user-register-form-wrapper">
<style>
.field-name-field-other, .field-name-field-other-text, .field-name-field-other div, .field-name-field-other-text div {
  display: inline;
}
</style>
  <?php $actions = drupal_render($form['actions']); ?>
  <?php $form['profile_main']['field_other']['#suffix'] = drupal_render($form['profile_main']['field_other_text']) . $form['profile_main']['field_other']['#suffix']; ?>
  <?php print drupal_render_children($form); ?>
  <?php print $actions; ?>
</div>
