<?php
/**
 * @file
 * Kyyti site admin settings.
 *
 * Last modified: 11.03.2013 Mika Hatakka
 */

/**
 * Set fields for module settings, shown to adminitrator.
 *
 * @return array field description for settings
 */
function sitekyyti_admin() {
  $form = array();
  $form['kyyti_hide_firstpage_content'] = array(
    '#title' => t('Hide first page title and content.'),
    '#description' => 'Select to hide title and content from first page.',
    '#type' => 'checkbox',
    '#default_value' => variable_get('kyyti_hide_firstpage_content', 0),
  );
  
  $form['kyyti_cul_add'] = array(
    '#title' => t('Language of a new node.'),
    '#description' => 'Set current user\'s language to a new node language.',
    '#type' => 'checkbox',
    '#default_value' => variable_get('kyyti_cul_add', 0),
  );
  
//  $form['kyyti_event_cal_date'] = array(
//    '#title' => t('Event calendar date.'),
//    '#description' => 'Select to show past dates below todays data.',
//    '#type' => 'checkbox',
//    '#default_value' => variable_get('kyyti_event_cal_date', 0),
//  );
  
  
// If need to do per content type settings  
//  $node_info = entity_get_info('node');
//  $node_types = array();
//  $key = 1;
//  foreach ($node_info['bundles'] as $val) {
//    $node_types[$key] = $val['label'];
//    $key++;
//  }
//  $nodes_set = variable_get('kyyti_node_path_lang', array());
//  $form['kyyti_node_path_lang'] = array(
//    '#title' => t("Content type path language"),
//    '#description' => 'Select to set content types language to "Language neutral". If not set, path language is copied from node language.',
//    '#type' => 'checkboxes',
//    '#options' => $node_types,
//    '#default_value' => $nodes_set,
//  );
  return system_settings_form($form);
}