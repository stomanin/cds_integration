<?php
/**
 * @file
 * cds_integration.oembedcore.inc
 */

/**
 * Implements hook_default_oembedcore_provider().
 */
function cds_integration_default_oembedcore_provider() {
  $export = array();

  $provider = new stdClass();
  $provider->disabled = FALSE; /* Edit this to true to make a default provider disabled initially */
  $provider->api_version = 1;
  $provider->name = 'cds';
  $provider->title = 'CDS - CERN Document Server';
  $provider->endpoint = 'http://cdsweb.cern.ch/api/oembed';
  $provider->scheme = 'http://cdsweb.cern.ch/record/*
http://cdsweb.cern.ch/video/*
http://cdsweb.cern.ch/images/*
http://cds.cern.ch/record/*
http://cds.cern.ch/video/*
http://cds.cern.ch/images/*
';
  $export['cds'] = $provider;

  return $export;
}
