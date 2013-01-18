<?php

/**
 * Implementation of hook_strongarm().
 */
function transition_network_projects_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_project_profile';
  $strongarm->value = '1';
  $export['comment_anonymous_project_profile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_project_profile';
  $strongarm->value = '3';
  $export['comment_controls_project_profile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_project_profile';
  $strongarm->value = '4';
  $export['comment_default_mode_project_profile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_project_profile';
  $strongarm->value = '2';
  $export['comment_default_order_project_profile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_project_profile';
  $strongarm->value = '50';
  $export['comment_default_per_page_project_profile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_project_profile';
  $strongarm->value = '0';
  $export['comment_form_location_project_profile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_project_profile';
  $strongarm->value = '0';
  $export['comment_preview_project_profile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_project_profile';
  $strongarm->value = '2';
  $export['comment_project_profile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_project_profile';
  $strongarm->value = '1';
  $export['comment_subject_field_project_profile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_project_profile';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '6',
    'revision_information' => '12',
    'author' => '16',
    'options' => '17',
    'comment_settings' => '15',
    'menu' => '11',
    'taxonomy' => '-1',
    'path' => '14',
    'attachments' => '13',
    'locations' => '0',
    'mollom' => '18',
    'path_redirect' => '21',
    'xmlsitemap' => '20',
    'custom_breadcrumbs' => '19',
    'notifications' => '25',
  );
  $export['content_extra_weights_project_profile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_project_profile';
  $strongarm->value = '0';
  $export['language_content_type_project_profile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_defaultnum_project_profile';
  $strongarm->value = '1';
  $export['location_defaultnum_project_profile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_maxnum_project_profile';
  $strongarm->value = '1';
  $export['location_maxnum_project_profile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_settings_node_project_profile';
  $strongarm->value = array(
    'multiple' => array(
      'min' => '0',
      'max' => '1',
      'add' => '1',
    ),
    'form' => array(
      'weight' => '0',
      'collapsible' => 0,
      'collapsed' => 0,
      'fields' => array(
        'country' => array(
          'collect' => '2',
          'default' => 'uk',
          'weight' => '-100',
        ),
        'province' => array(
          'collect' => '2',
          'widget' => 'autocomplete',
          'default' => '',
          'weight' => '-99',
        ),
        'name' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '-98',
        ),
        'street' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '-97',
        ),
        'additional' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '-96',
        ),
        'city' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '-95',
        ),
        'postal_code' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '-94',
        ),
        'locpick' => array(
          'collect' => '1',
          'weight' => '-93',
        ),
      ),
    ),
    'display' => array(
      'weight' => '0',
      'hide' => array(
        'province' => 'province',
        'map_link' => 'map_link',
        'coords' => 'coords',
        'name' => 0,
        'street' => 0,
        'additional' => 0,
        'city' => 0,
        'postal_code' => 0,
        'country' => 0,
        'locpick' => 0,
        'province_name' => 0,
        'country_name' => 0,
      ),
      'teaser' => 0,
      'full' => 0,
    ),
    'rss' => array(
      'mode' => 'gml',
    ),
  );
  $export['location_settings_node_project_profile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_project_profile';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_project_profile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_project_profile_pattern';
  $strongarm->value = 'projects/[title-raw]';
  $export['pathauto_node_project_profile_pattern'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_project_profile';
  $strongarm->value = '1';
  $export['upload_project_profile'] = $strongarm;

  return $export;
}
