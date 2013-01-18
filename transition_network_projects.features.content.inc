<?php

/**
 * Implementation of hook_content_default_fields().
 */
function transition_network_projects_content_default_fields() {
  $fields = array();

  // Exported field: field_aim
  $fields['project_profile-field_aim'] = array(
    'field_name' => 'field_aim',
    'type_name' => 'project_profile',
    'display_settings' => array(
      'weight' => '-4',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          'format' => '1',
          '_error_element' => 'default_value_widget][field_aim][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Project Aim',
      'weight' => '-3',
      'description' => 'Provide a brief statement that describes the aim or aims of your project.',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_contact_media
  $fields['project_profile-field_contact_media'] = array(
    'field_name' => 'field_contact_media',
    'type_name' => 'project_profile',
    'display_settings' => array(
      'weight' => '51',
      'parent' => 'group_people',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'userreference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'userreference',
    'active' => '1',
    'referenceable_roles' => array(
      '2' => 0,
      '11' => 0,
      '12' => 0,
      '10' => 0,
      '8' => 0,
      '13' => 0,
      '9' => 0,
      '3' => 0,
      '5' => 0,
      '4' => 0,
      '7' => 0,
    ),
    'referenceable_status' => '',
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'reverse_link' => 0,
      'default_value' => array(
        '0' => array(
          'uid' => NULL,
          '_error_element' => 'default_value_widget][field_contact_media][0][uid][uid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Media point of contact',
      'weight' => '51',
      'description' => 'The point of contact for media enquiries.',
      'type' => 'userreference_autocomplete',
      'module' => 'userreference',
    ),
  );

  // Exported field: field_contact_volunteer
  $fields['project_profile-field_contact_volunteer'] = array(
    'field_name' => 'field_contact_volunteer',
    'type_name' => 'project_profile',
    'display_settings' => array(
      'weight' => '53',
      'parent' => 'group_people',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'userreference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'userreference',
    'active' => '1',
    'referenceable_roles' => array(
      '2' => 0,
      '11' => 0,
      '12' => 0,
      '10' => 0,
      '8' => 0,
      '13' => 0,
      '9' => 0,
      '3' => 0,
      '5' => 0,
      '4' => 0,
      '7' => 0,
    ),
    'referenceable_status' => '',
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'reverse_link' => 0,
      'default_value' => array(
        '0' => array(
          'uid' => NULL,
          '_error_element' => 'default_value_widget][field_contact_volunteer][0][uid][uid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Volunteer point of contact',
      'weight' => '53',
      'description' => 'The main volunteer point of contact for this project.',
      'type' => 'userreference_autocomplete',
      'module' => 'userreference',
    ),
  );

  // Exported field: field_content_source
  $fields['project_profile-field_content_source'] = array(
    'field_name' => 'field_content_source',
    'type_name' => 'project_profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'TN.org|Transtion Network website
Widget-PSE|PSE Widget',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 'TN.org',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Content source',
      'weight' => '24',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_em_video
  $fields['project_profile-field_em_video'] = array(
    'field_name' => 'field_em_video',
    'type_name' => 'project_profile',
    'display_settings' => array(
      'weight' => '1',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'colorbox',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'emvideo',
    'required' => '0',
    'multiple' => '0',
    'module' => 'emvideo',
    'active' => '1',
    'widget' => array(
      'video_width' => '425',
      'video_height' => '350',
      'video_autoplay' => 0,
      'preview_width' => '425',
      'preview_height' => '350',
      'preview_autoplay' => 0,
      'thumbnail_width' => '280',
      'thumbnail_height' => '200',
      'thumbnail_default_path' => '',
      'thumbnail_link_title' => 'Watch video',
      'meta_fields' => array(
        'title' => 'title',
        'description' => 0,
      ),
      'providers' => array(
        'vimeo' => 'vimeo',
        'youtube' => 'youtube',
      ),
      'default_value' => array(
        '0' => array(
          'embed' => '',
          'value' => '',
          'emvideo' => array(
            'title' => '',
          ),
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Video link',
      'weight' => '2',
      'description' => 'Enter the link (URL) to a video about your project on YouTube or Vimeo to have it automatically embedded. You may optionally add a title.',
      'type' => 'emvideo_textfields',
      'module' => 'emvideo',
    ),
  );

  // Exported field: field_file
  $fields['project_profile-field_file'] = array(
    'field_name' => 'field_file',
    'type_name' => 'project_profile',
    'display_settings' => array(
      'weight' => '43',
      'parent' => 'group_resources',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '1',
    'list_default' => 1,
    'description_field' => '1',
    'widget' => array(
      'file_extensions' => '',
      'file_path' => 'cs_files',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '5M',
      'max_filesize_per_node' => '15M',
      'insert' => 0,
      'insert_styles' => array(
        'auto' => 0,
        'link' => 0,
        'image' => 0,
        'imagecache_thumb-large' => 0,
        'imagecache_spaces-logo' => 0,
        'imagecache_thumb-medium' => 0,
        'imagecache_AttachmentThumbnail' => 0,
        'imagecache_thumb-small' => 0,
      ),
      'insert_default' => 'auto',
      'insert_class' => '',
      'insert_width' => '',
      'label' => 'Files',
      'weight' => '43',
      'description' => '',
      'type' => 'filefield_widget',
      'module' => 'filefield',
    ),
  );

  // Exported field: field_funding
  $fields['project_profile-field_funding'] = array(
    'field_name' => 'field_funding',
    'type_name' => 'project_profile',
    'display_settings' => array(
      'weight' => '38',
      'parent' => 'group_resources',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_funding][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Sources of Funding',
      'weight' => '38',
      'description' => 'Please provide information about any funding you accessed for your project.',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_gulag
  $fields['project_profile-field_gulag'] = array(
    'field_name' => 'field_gulag',
    'type_name' => 'project_profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_gulag][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Gulag',
      'weight' => '23',
      'description' => 'Temporary holding field for all those little bits that need tweaking.',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_image
  $fields['project_profile-field_image'] = array(
    'field_name' => 'field_image',
    'type_name' => 'project_profile',
    'display_settings' => array(
      'weight' => '42',
      'parent' => 'group_resources',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 0,
    'description_field' => '1',
    'widget' => array(
      'file_extensions' => 'jpg jpeg png gif',
      'file_path' => 'images',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '2M',
      'max_filesize_per_node' => '5M',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 1,
      'title' => '',
      'custom_title' => 1,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'insert' => 0,
      'insert_styles' => array(
        'auto' => 0,
        'link' => 0,
        'image' => 0,
        'imagecache_thumb-large' => 0,
        'imagecache_spaces-logo' => 0,
        'imagecache_thumb-medium' => 0,
        'imagecache_AttachmentThumbnail' => 0,
        'imagecache_thumb-small' => 0,
      ),
      'insert_default' => 'auto',
      'insert_class' => '',
      'insert_width' => '',
      'label' => 'Images',
      'weight' => '42',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_initiative
  $fields['project_profile-field_initiative'] = array(
    'field_name' => 'field_initiative',
    'type_name' => 'project_profile',
    'display_settings' => array(
      'weight' => '6',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '1',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'initiative_profile' => 'initiative_profile',
      'blog' => 0,
      'initiative_event' => 0,
      'initiative_group' => 0,
      'movement_news' => 0,
      'feed' => 0,
      'feed_item' => 0,
      'forum' => 0,
      'page_group' => 0,
      'imported_blogs' => 0,
      'imported_blogs_parent' => 0,
      'ingredient' => 0,
      'initiative_event_external' => 0,
      'initiative_hub_profile' => 0,
      'page' => 0,
      'panel' => 0,
      'imported_event' => 0,
      'imported_events_parent' => 0,
      'project_profile' => 0,
      'resource' => 0,
      'slide' => 0,
      'blog_social' => 0,
      'stage' => 0,
      'topic' => 0,
      'tool' => 0,
      'event' => 0,
      'network_news' => 0,
      'profile' => 0,
      'webform' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_initiative][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Related initiatives',
      'weight' => '7',
      'description' => 'The Transition Initiatives related or working on this Project. Start typing the name and select from the list that appears. You may add as many as is required by using the \'Add another\' button.',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_inspiration
  $fields['project_profile-field_inspiration'] = array(
    'field_name' => 'field_inspiration',
    'type_name' => 'project_profile',
    'display_settings' => array(
      'weight' => '4',
      'parent' => 'group_outcomes_lessons',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_inspiration][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Inspiration',
      'weight' => '4',
      'description' => 'What inspired you to create your project?',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_launch
  $fields['project_profile-field_launch'] = array(
    'field_name' => 'field_launch',
    'type_name' => 'project_profile',
    'display_settings' => array(
      'weight' => '4',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'date',
    'required' => '0',
    'multiple' => '0',
    'module' => 'date',
    'active' => '1',
    'granularity' => array(
      'year' => 'year',
      'month' => 'month',
      'day' => 'day',
    ),
    'timezone_db' => 'Europe/London',
    'tz_handling' => 'none',
    'todate' => '',
    'repeat' => 0,
    'repeat_collapsed' => '',
    'default_format' => 'medium',
    'widget' => array(
      'default_value' => 'blank',
      'default_value_code' => '',
      'default_value2' => 'blank',
      'default_value_code2' => '',
      'input_format' => 'j M Y',
      'input_format_custom' => '',
      'increment' => '1',
      'text_parts' => array(),
      'year_range' => '-3:+3',
      'label_position' => 'above',
      'label' => 'Public Launch date',
      'weight' => '5',
      'description' => 'The date when you launched your project on an otherwise unsuspecting public.',
      'type' => 'date_popup',
      'module' => 'date',
    ),
  );

  // Exported field: field_links
  $fields['project_profile-field_links'] = array(
    'field_name' => 'field_links',
    'type_name' => 'project_profile',
    'display_settings' => array(
      'weight' => '37',
      'parent' => 'group_resources',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_links][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Links and Partnerships',
      'weight' => '37',
      'description' => 'Please provide information on other groups that you engaged with in order to take your project forward.',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_materials
  $fields['project_profile-field_materials'] = array(
    'field_name' => 'field_materials',
    'type_name' => 'project_profile',
    'display_settings' => array(
      'weight' => '39',
      'parent' => 'group_resources',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_materials][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Sources of materials',
      'weight' => '39',
      'description' => 'Please provide information about where you sourced the materials you needed for your project. e.g. seed suppliers.',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_mistakes
  $fields['project_profile-field_mistakes'] = array(
    'field_name' => 'field_mistakes',
    'type_name' => 'project_profile',
    'display_settings' => array(
      'weight' => '8',
      'parent' => 'group_outcomes_lessons',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_mistakes][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Lessons Learned',
      'weight' => '8',
      'description' => 'Please provide information about any mistakes you might have made that you would advise others to avoid, any lessons you have learned as a result of doing this project, and any things you would do differently next time.',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_obstacles
  $fields['project_profile-field_obstacles'] = array(
    'field_name' => 'field_obstacles',
    'type_name' => 'project_profile',
    'display_settings' => array(
      'weight' => '7',
      'parent' => 'group_outcomes_lessons',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '2',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          'format' => '1',
          '_error_element' => 'default_value_widget][field_obstacles][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Obstacles, and how we overcame them',
      'weight' => '7',
      'description' => 'Please provide information about the obstacles you encountered, and how you tackled them.',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_outcomes
  $fields['project_profile-field_outcomes'] = array(
    'field_name' => 'field_outcomes',
    'type_name' => 'project_profile',
    'display_settings' => array(
      'weight' => '5',
      'parent' => 'group_outcomes_lessons',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_outcomes][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Outcomes so far',
      'weight' => '5',
      'description' => 'Provide a summary of the main outcomes from the project to date. Use the next field to describe any unexpected outcomes.',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_people
  $fields['project_profile-field_people'] = array(
    'field_name' => 'field_people',
    'type_name' => 'project_profile',
    'display_settings' => array(
      'weight' => '36',
      'parent' => 'group_resources',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '',
    'max' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_people][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Number of People Involved',
      'weight' => '36',
      'description' => '',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_primarycontact
  $fields['project_profile-field_primarycontact'] = array(
    'field_name' => 'field_primarycontact',
    'type_name' => 'project_profile',
    'display_settings' => array(
      'weight' => '50',
      'parent' => 'group_people',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'userreference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'userreference',
    'active' => '1',
    'referenceable_roles' => array(
      '2' => 0,
      '11' => 0,
      '10' => 0,
      '8' => 0,
      '9' => 0,
      '3' => 0,
      '5' => 0,
      '4' => 0,
      '7' => 0,
    ),
    'referenceable_status' => '',
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'reverse_link' => 0,
      'default_value' => NULL,
      'default_value_php' => 'global $user;
return array(0=> array(\'uid\' => $user->uid));',
      'label' => 'Primary point of contact',
      'weight' => '50',
      'description' => 'Start typing the username of the point of contact for this <em>Project Profile</em> (suggestions will be provided). Defaults to the current user.',
      'type' => 'userreference_autocomplete',
      'module' => 'userreference',
    ),
  );

  // Exported field: field_project_rel_stage
  $fields['project_profile-field_project_rel_stage'] = array(
    'field_name' => 'field_project_rel_stage',
    'type_name' => 'project_profile',
    'display_settings' => array(
      'weight' => '3',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'stage' => 'stage',
      'blog' => 0,
      'initiative_event' => 0,
      'initiative_group' => 0,
      'movement_news' => 0,
      'feed' => 0,
      'feed_item' => 0,
      'forum' => 0,
      'page_group' => 0,
      'group_reference' => 0,
      'imported_blogs' => 0,
      'imported_blogs_parent' => 0,
      'ingredient' => 0,
      'initiative_event_external' => 0,
      'initiative_profile' => 0,
      'initiative_hub_profile' => 0,
      'page' => 0,
      'panel' => 0,
      'imported_event' => 0,
      'imported_events_parent' => 0,
      'project_profile' => 0,
      'resource' => 0,
      'blog_social' => 0,
      'topic' => 0,
      'tool' => 0,
      'event' => 0,
      'network_news' => 0,
      'profile' => 0,
    ),
    'advanced_view' => 'stages',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => 60,
      'mccr_width' => '6',
      'mccr_row-major' => 0,
      'mccr_indent' => '0',
      'mccr_caption' => '',
      'mccr_column-heading' => '',
      'mccr_row-heading' => '',
      'default_value' => array(
        '0' => array(
          'nid' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Related Transition Stage',
      'weight' => '4',
      'description' => 'The <a href="/stages"><em>Transition Stage</em></a> this project broadly belongs to.',
      'type' => 'nodereference_buttons',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_project_summary
  $fields['project_profile-field_project_summary'] = array(
    'field_name' => 'field_project_summary',
    'type_name' => 'project_profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '300',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_project_summary][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Summary',
      'weight' => '-4',
      'description' => 'A short summary of what this <em>Project</em> is all about.',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_pse_moderate
  $fields['project_profile-field_pse_moderate'] = array(
    'field_name' => 'field_pse_moderate',
    'type_name' => 'project_profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '0|Approved
1|Needs moderation',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 0,
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Needs moderation',
      'weight' => '22',
      'description' => 'Whether or not this <em>Project Profile</em> needs to be checked by a moderator. Part of Transition PSE and always false for those submitted through the main website, but true when entered via widget.',
      'type' => 'optionwidgets_onoff',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_region
  $fields['project_profile-field_region'] = array(
    'field_name' => 'field_region',
    'type_name' => 'project_profile',
    'display_settings' => array(
      'weight' => 0,
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'content_taxonomy',
    'required' => '0',
    'multiple' => '1',
    'module' => 'content_taxonomy',
    'active' => '1',
    'save_term_node' => 0,
    'vid' => '7',
    'parent' => '0',
    'parent_php_code' => '',
    'depth' => '',
    'widget' => array(
      'expand_all' => 0,
      'default_value' => array(
        '0' => array(
          'value' => NULL,
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Geographic region ',
      'weight' => '1',
      'description' => 'The geographic region, or sub-regions, that this project belongs in. Please select the deepest appropriate sub-region by selecting from the drop-down lists below.',
      'type' => 'content_taxonomy_hs',
      'module' => 'hs_content_taxonomy',
    ),
  );

  // Exported field: field_start
  $fields['project_profile-field_start'] = array(
    'field_name' => 'field_start',
    'type_name' => 'project_profile',
    'display_settings' => array(
      'weight' => '2',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'date',
    'required' => '0',
    'multiple' => '0',
    'module' => 'date',
    'active' => '1',
    'granularity' => array(
      'year' => 'year',
      'month' => 'month',
      'day' => 'day',
    ),
    'timezone_db' => 'Europe/London',
    'tz_handling' => 'none',
    'todate' => '',
    'repeat' => 0,
    'repeat_collapsed' => '',
    'default_format' => 'medium',
    'widget' => array(
      'default_value' => 'blank',
      'default_value_code' => '',
      'default_value2' => 'blank',
      'default_value_code2' => '',
      'input_format' => 'j F, Y',
      'input_format_custom' => '',
      'increment' => '1',
      'text_parts' => array(),
      'year_range' => '-3:+3',
      'label_position' => 'above',
      'label' => 'Date started',
      'weight' => '3',
      'description' => '',
      'type' => 'date_popup',
      'module' => 'date',
    ),
  );

  // Exported field: field_themes
  $fields['project_profile-field_themes'] = array(
    'field_name' => 'field_themes',
    'type_name' => 'project_profile',
    'display_settings' => array(
      'weight' => '-3',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '1',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'topic' => 'topic',
      'blog' => 0,
      'forum' => 0,
      'page_group' => 0,
      'imported_event' => 0,
      'imported_news' => 0,
      'initiative_group' => 0,
      'initiative_profile' => 0,
      'initiative_event' => 0,
      'movement_news' => 0,
      'simplenews' => 0,
      'page' => 0,
      'panel' => 0,
      'project_profile' => 0,
      'reference' => 0,
      'event' => 0,
      'network_news' => 0,
      'profile' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
        ),
      ),
      'default_value_php' => NULL,
      'mccr_width' => '4',
      'mccr_row-major' => 0,
      'mccr_indent' => '0',
      'mccr_caption' => '',
      'mccr_column-heading' => '',
      'mccr_row-heading' => '',
      'label' => 'Themes',
      'weight' => '-2',
      'description' => 'The <em>Themes</em> related to this <em>Project Profile</em>.',
      'type' => 'nodereference_buttons',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_unexp
  $fields['project_profile-field_unexp'] = array(
    'field_name' => 'field_unexp',
    'type_name' => 'project_profile',
    'display_settings' => array(
      'weight' => '6',
      'parent' => 'group_outcomes_lessons',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_unexp][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Unexpected outcomes',
      'weight' => '6',
      'description' => 'Please describe any unexpected outcomes from the project, both positive and negative.',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_webcontact_user
  $fields['project_profile-field_webcontact_user'] = array(
    'field_name' => 'field_webcontact_user',
    'type_name' => 'project_profile',
    'display_settings' => array(
      'weight' => '52',
      'parent' => 'group_people',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'userreference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'userreference',
    'active' => '1',
    'referenceable_roles' => array(
      '2' => 0,
      '11' => 0,
      '12' => 0,
      '10' => 0,
      '8' => 0,
      '13' => 0,
      '9' => 0,
      '3' => 0,
      '5' => 0,
      '4' => 0,
      '7' => 0,
    ),
    'referenceable_status' => '',
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'reverse_link' => 0,
      'default_value' => array(
        '0' => array(
          'uid' => NULL,
          '_error_element' => 'default_value_widget][field_webcontact_user][0][uid][uid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Web point of contact',
      'weight' => '52',
      'description' => 'The point of contact for all things Web for this Project.',
      'type' => 'userreference_autocomplete',
      'module' => 'userreference',
    ),
  );

  // Exported field: field_website_home
  $fields['project_profile-field_website_home'] = array(
    'field_name' => 'field_website_home',
    'type_name' => 'project_profile',
    'display_settings' => array(
      'weight' => '41',
      'parent' => 'group_resources',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'link',
    'required' => '0',
    'multiple' => '1',
    'module' => 'link',
    'active' => '1',
    'attributes' => array(
      'target' => 'default',
      'rel' => '',
      'class' => '',
      'title' => '',
    ),
    'display' => array(
      'url_cutoff' => '80',
    ),
    'url' => 0,
    'title' => 'none',
    'title_value' => '',
    'enable_tokens' => 0,
    'validate_url' => 1,
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'url' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Web reference',
      'weight' => '41',
      'description' => 'If there is any relevant information online about your project, maybe you built a website as part of the project, please provide the address here. You can add several, if relevant, by using the \'Add another\' button.',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Content source');
  t('Date started');
  t('Files');
  t('Geographic region ');
  t('Gulag');
  t('Images');
  t('Inspiration');
  t('Lessons Learned');
  t('Links and Partnerships');
  t('Media point of contact');
  t('Needs moderation');
  t('Number of People Involved');
  t('Obstacles, and how we overcame them');
  t('Outcomes so far');
  t('Primary point of contact');
  t('Project Aim');
  t('Public Launch date');
  t('Related Transition Stage');
  t('Related initiatives');
  t('Sources of Funding');
  t('Sources of materials');
  t('Summary');
  t('Themes');
  t('Unexpected outcomes');
  t('Video link');
  t('Volunteer point of contact');
  t('Web point of contact');
  t('Web reference');

  return $fields;
}
