<?php

// $Id$

/**
 * @file: Form builder; display the cds_integration settings form.
 *
 * @see cds_integration_settings_form_submit()
 */


/**
 * Page callback function for admin/config/media/cds_integration
 */

function cds_integration_settings_form($form, &$form_state) { 
  $form['cds_integration_description'] = array(
    '#markup' => '<h2>' . t('Select the options to enable') . '</h2>' ,
  );  
  $form['cds_integration_enable_cds_sync'] = array(
  '#type' => 'checkbox',
  '#title' => t('Enable automatic sync from CDS'),
  '#description' => t('By enabling this option the attributes for the media files embedded from CDS will be automatically update from CDS every cron run.<br />This will apply only to embedded content where the "Get attributes from CDS" option is enabled.'),    
  '#default_value' => variable_get('cds_integration_enable_cds_sync', FALSE),
  );
  return system_settings_form($form);
}
