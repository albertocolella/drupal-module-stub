<?php

/**
 * Admin settings page.
 *
 * @ingroup stub_core
 */
function stub_admin_settings($form, &$form_state) {

  $form['stub_example'] = array(
    '#type' => 'textfield',
    '#title' => t('Example field'),
    '#description' => t('Example field for %module module.', array('%module' => 'Stub')),
    '#default_value' => variable_get('stub_example', ''),
  );

  return system_settings_form($form);
}