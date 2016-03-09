<?php

/**
 * @file
 * Default drush aliases.drushrc.php file.
 */

/**
 * These are the default configuration so that
 * everyone can just overwrite the different settings.
 */

$aliases['cross-stage'] = array(
  'uri' => 'cross-stage',
  'root' => '/Applications/MAMP/htdocs/cross-stage/docroot',
);

$aliases['cross-prb'] = array(
  'uri' => 'cross-prb',
  'root' => '/Applications/MAMP/htdocs/cross-prb/docroot/new-pull-request',
);

// Allow local aliases. Create aliases.local.php in your aliases directory to
// add your own.
@include "aliases.local.php";

