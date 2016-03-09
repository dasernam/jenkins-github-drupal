<?php

/**
 * @file
 * Default drush aliases.drushrc.php file.
 */

/**
 * These are the default configuration so that
 * everyone can just overwrite the different settings.
 */

$aliases['crosswalk-stage'] = array(
  'uri' => 'stg.cameoruntime.org',
  'root' => '/srv/www/stg.cameoruntime.org/docroot',
);

$aliases['crosswalk-prb'] = array(
  'uri' => 'stg.cameoruntime.org',
  'root' => '/srv/www/stg.cameoruntime.org/docroot/new-pull-request',
);

// Allow local aliases. Create aliases.local.php in your aliases directory to
// add your own.
@include "aliases.local.php";

