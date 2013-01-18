<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function transition_network_projects_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_outcomes_lessons
  $groups['project_profile-group_outcomes_lessons'] = array(
    'group_type' => 'standard',
    'type_name' => 'project_profile',
    'group_name' => 'group_outcomes_lessons',
    'label' => 'Outcomes and Lessons learned',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => '',
      ),
      'display' => array(
        'weight' => '7',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '8',
    'fields' => array(
      '0' => 'field_inspiration',
      '1' => 'field_outcomes',
      '2' => 'field_unexp',
      '3' => 'field_obstacles',
      '4' => 'field_mistakes',
    ),
  );

  // Exported group: group_people
  $groups['project_profile-group_people'] = array(
    'group_type' => 'standard',
    'type_name' => 'project_profile',
    'group_name' => 'group_people',
    'label' => 'People & contacts',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => '<strong>Please note</strong>: all of the people you want to add below need to be in the <a href="/people">People Directory</a>. If they are not, their user names will not appear, and you should ask them to <a href="/user/register">register</a>.',
      ),
      'display' => array(
        'weight' => '9',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '10',
    'fields' => array(
      '0' => 'field_primarycontact',
      '1' => 'field_contact_media',
      '2' => 'field_webcontact_user',
      '3' => 'field_contact_volunteer',
    ),
  );

  // Exported group: group_resources
  $groups['project_profile-group_resources'] = array(
    'group_type' => 'standard',
    'type_name' => 'project_profile',
    'group_name' => 'group_resources',
    'label' => 'Resources',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => '',
      ),
      'display' => array(
        'weight' => '8',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset_collapsible',
          'exclude' => 1,
        ),
        'full' => array(
          'format' => 'fieldset_collapsible',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '9',
    'fields' => array(
      '0' => 'field_people',
      '1' => 'field_links',
      '2' => 'field_funding',
      '3' => 'field_materials',
      '4' => 'field_website_home',
      '5' => 'field_image',
      '6' => 'field_file',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Outcomes and Lessons learned');
  t('People & contacts');
  t('Resources');

  return $groups;
}
