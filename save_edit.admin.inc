<?php
/**
 * @file
 * Admin Settings form for Save & Edit.
 */

/**
 * Implements hook_settings().
 */
function save_edit_admin_settings() {
  $config = config('save_edit.settings');
  $form['#config'] = 'save_edit.settings';
  $form['save_edit_this_settings'] = array(
    '#type' => 'fieldset',
    '#title' => t('Save & Edit General Features'),
    '#description' => t('General settings that will change the usage and/or appearance of the Save & Edit module.'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );
  $form['save_edit_this_settings']['save_edit_button_value'] = array(
    '#type' => 'textfield',
    '#title' => t('Text to use for Save & Edit button'),
    '#description' => t('This is the default text that will be used for the button at the bottom of the node form.<br />It would be best to use familiar terms like "<strong>Save & Edit</strong>" or "<strong>Apply</strong>" so that users can easily understand the feature/function related to this option.'),
    '#default_value' => $config->get('save_edit_button_value'),
    '#required' => TRUE,
  );
  $form['save_edit_this_settings']['save_edit_button_weight'] = array(
    '#type' => 'weight',
    '#delta' => 10,
    '#description' => t('You may adjust the positioning left to right on the button sections using the weight fields for each button type.'),
    '#title' => t('Save & Edit Button Weight'),
    '#default_value' => $config->get('save_edit_button_weight'),
  );
  $form['save_edit_this_settings']['save_edit_default_save_button_value'] = array(
    '#type' => 'textfield',
    '#title' => t('Text to use for default Save button'),
    '#description' => t('This will override the default "Save" button text to something more in line with adding the "Save & Edit" and "Save & Publish" options.'),
    '#default_value' => $config->get('save_edit_default_save_button_value'),
    '#required' => TRUE,
  );
  $form['save_edit_this_settings']['save_edit_default_save_button_weight'] = array(
    '#type' => 'weight',
    '#delta' => 10,
    '#description' => t('You may adjust the positioning left to right on the button sections using the weight fields for each button type.'),
    '#title' => t('Default Save Button Weight'),
    '#default_value' => $config->get('save_edit_default_save_button_weight'),
  );
  $form['save_edit_this_settings']['save_edit_unpublish'] = array(
    '#type' => 'checkbox',
    '#title' => t('Auto Unpublish All Nodes'),
    '#default_value' => $config->get('save_edit_unpublish'),
    '#description' => t('This setting will automatically uncheck the "Published" status when using <strong>Save & Edit</strong> button to save nodes.'),
  );
  $form['save_edit_this_settings']['save_edit_unpublish_new_only'] = array(
    '#type' => 'checkbox',
    '#title' => t('Auto Unpublish on New Nodes Only'),
    '#default_value' => $config->get('save_edit_unpublish_new_only'),
    '#description' => t('This will only mark the node as unpublished upon creating a new node. Assuming this is used, on subsequent uses of <strong>Save & Edit</strong> the node will be unpublished already, and NOT affected. You will be required at some point to manually publish the node using the optional <strong>Publish</strong> button, or manually ticking the appropriate checkbox when hitting the default Save button.'),
  );
  $form['save_edit_this_settings']['save_edit_hide_default_save'] = array(
    '#type' => 'checkbox',
    '#title' => t('Hide default Save button'),
    '#default_value' => $config->get('save_edit_hide_default_save'),
    '#description' => t('This will hide the Save button.'),
  );
  $form['save_edit_this_settings']['save_edit_hide_publish'] = array(
    '#type' => 'checkbox',
    '#title' => t('Hide the Publish button'),
    '#default_value' => $config->get('save_edit_hide_publish'),
    '#description' => t('This will hide the Publish button.'),
  );
  $form['save_edit_this_settings']['save_edit_hide_default_preview'] = array(
    '#type' => 'checkbox',
    '#title' => t('Hide default Preview button'),
    '#default_value' => $config->get('save_edit_hide_default_preview'),
    '#description' => t('This will hide the Preview button.'),
  );
  $form['save_edit_this_settings']['save_edit_hide_default_delete'] = array(
    '#type' => 'checkbox',
    '#title' => t('Hide default Delete button'),
    '#default_value' => $config->get('save_edit_hide_default_delete'),
    '#description' => t('This will hide the Delete button.'),
  );
  $form['save_edit_this_settings']['save_edit_publish_button_value'] = array(
    '#type' => 'textfield',
    '#title' => t('Text to use for Publish button'),
    '#description' => t('This is the default text that will be used for the Publish button. <em>Note: This button will ONLY appear if you have checked either of the above options that manipulate the default publishing actions provided by Backdrop.</em>'),
    '#default_value' => $config->get('save_edit_publish_button_value'),
    '#required' => TRUE,
  );
  $form['save_edit_this_settings']['save_edit_publish_button_weight'] = array(
    '#type' => 'weight',
    '#delta' => 10,
    '#description' => t('You may adjust the positioning left to right on the button sections using the weight fields for each button type.'),
    '#title' => t('Publish Button Weight'),
    '#default_value' => $config->get('save_edit_publish_button_weight'),
  );
  $form['where_to_save_edit'] = array(
    '#type' => 'fieldset',
    '#title' => t('Node Types'),
    '#description' => t('Set the node types you want to display links for.'),
    '#collapsible' => FALSE,
    '#collapsed' => FALSE,
  );
  $form['where_to_save_edit']['save_edit_node_types'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Node types'),
    '#default_value' => $config->get('save_edit_node_types'),
    '#options' => node_type_get_names(),
  );

  return system_settings_form($form);
}
