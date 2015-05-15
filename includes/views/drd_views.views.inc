<?php

/**
* Implements hook_views_data().
*/
function drd_views_views_data() {
  $data = array();

  $data['drd_domain']['table']['group'] = t('DRD');

  $data['drd_domain']['table']['base'] = array(
    'title' => t('DRD'),
    'help' => t('Contains DRD data exposed to Views.'),
    'field' => 'did',
  );

  $data['drd_domain']['name'] = array(
    'title' => t('Name'),
    'help' => t('Site name'),
    'field' => array(
      'handler' => 'views_handler_field',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
  );

  $data['drd_domain']['url'] = array(
    'title' => t('URL'),
    'help' => t('Site url'),
    'field' => array(
      'handler' => 'views_handler_field',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
  );

  $data['drd_domain']['status'] = array(
    'title' => t('Status'),
    'help' => t('Whether or not the site is enabled'),
    'field' => array(
      'handler' => 'views_handler_field_boolean',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_boolean_operator',
    ),
  );

  $data['drd_domain']['weight'] = array(
    'title' => t('Weight'),
    'help' => t('Weight of site'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort_group_by_numeric',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
  );

  $data['drd_domain']['installed'] = array(
    'title' => t('Installed'),
    'help' => t('Whether or not the site is installed'),
    'field' => array(
      'handler' => 'views_handler_field_boolean',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_boolean_operator',
    ),
  );

  $data['drd_domain']['status_w_health'] = array(
    'title' => t('Health Warning'),
    'help' => t('Whether or not the site has a health warning'),
    'field' => array(
      'handler' => 'views_handler_field_boolean',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_boolean_operator',
    ),
  );

  $data['drd_domain']['status_e_health'] = array(
    'title' => t('Health Error'),
    'help' => t('Whether or not the site has a health error'),
    'field' => array(
      'handler' => 'views_handler_field_boolean',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_boolean_operator',
    ),
  );

  $data['drd_domain']['status_w_secure'] = array(
    'title' => t('Security Warning'),
    'help' => t('Whether or not the site has a security warning'),
    'field' => array(
      'handler' => 'views_handler_field_boolean',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_boolean_operator',
    ),
  );

  $data['drd_domain']['status_e_secure'] = array(
    'title' => t('Security Error'),
    'help' => t('Whether or not the site has a security error'),
    'field' => array(
      'handler' => 'views_handler_field_boolean',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_boolean_operator',
    ),
  );

  $data['drd_domain']['status_w_tuning'] = array(
    'title' => t('Tuning Warning'),
    'help' => t('Whether or not the site has a tuning warning'),
    'field' => array(
      'handler' => 'views_handler_field_boolean',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_boolean_operator',
    ),
  );

  $data['drd_domain']['status_e_tuning'] = array(
    'title' => t('Tuning Error'),
    'help' => t('Whether or not the site has a tuning error'),
    'field' => array(
      'handler' => 'views_handler_field_boolean',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_boolean_operator',
    ),
  );

  $data['drd_domain']['status_w_seo'] = array(
    'title' => t('SEO Warning'),
    'help' => t('Whether or not the site has a seo warning'),
    'field' => array(
      'handler' => 'views_handler_field_boolean',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_boolean_operator',
    ),
  );

  $data['drd_domain']['status_e_seo'] = array(
    'title' => t('SEO Error'),
    'help' => t('Whether or not the site has a seo error'),
    'field' => array(
      'handler' => 'views_handler_field_boolean',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_boolean_operator',
    ),
  );

  $data['drd_domain']['status_w_other'] = array(
    'title' => t('Misc Warning'),
    'help' => t('Whether or not the site has a misc warning'),
    'field' => array(
      'handler' => 'views_handler_field_boolean',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_boolean_operator',
    ),
  );

  $data['drd_domain']['status_e_other'] = array(
    'title' => t('Misc Error'),
    'help' => t('Whether or not the site has a misc error'),
    'field' => array(
      'handler' => 'views_handler_field_boolean',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_boolean_operator',
    ),
  );

  return $data;
}
