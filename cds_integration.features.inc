<?php
/**
 * @file
 * cds_integration.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cds_integration_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "oembedcore" && $api == "oembedcore") {
    return array("version" => "1");
  }
}
