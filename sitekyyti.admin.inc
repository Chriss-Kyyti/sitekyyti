<?php
/**
 * @file
 * Kyyti site admin settings.
 *
 * Last modified: 30.11.2012 Mika Hatakka
 */

/**
 * Set fields for module settings, shown to adminitrator.
 *
 * @return array field description for settings
 */
function sitekyyti_admin() {
  $form = array();
  $form['kyyti_node_path_lang'] = array(
    '#title' => t('Set Content type path language to "Language neutral"'),
    '#description' => 'Select to set content types language to "Language neutral". If not set, path language is copied from node language.',
    '#type' => 'checkbox',
    '#default_value' => variable_get('kyyti_node_path_lang', 0),
  );
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