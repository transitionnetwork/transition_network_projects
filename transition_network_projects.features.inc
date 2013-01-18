<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function transition_network_projects_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function transition_network_projects_node_info() {
  $items = array(
    'project_profile' => array(
      'name' => t('Project Profile'),
      'module' => 'features',
      'description' => t('A <em>Profile</em> describing a project that is Transition-related. Any registered user may add a project. '),
      'has_title' => '1',
      'title_label' => t('Project Title'),
      'has_body' => '1',
      'body_label' => t('Project Description'),
      'min_word_count' => '0',
      'help' => t('<strong>Please note</strong>: Your project\'s name is important - it affects how it shows up in the search, please bear this in mind and do not add spaces in front of the name either!'),
    ),
  );
  return $items;
}
