<?php
/**
 * @file
 * crosswalk_main.box.inc
 */

/**
 * Implements hook_default_box().
 */
function crosswalk_main_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'crosswalk_banner';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'The homepage promo/banner box used for the highlight video.';
  $box->options = array(
    'body' => array(
      'value' => '<header class="header" role="banner">
      <div class="introduction">
  <div class="intro-hero">
     <div class=\'embed-container\'>
      <iframe src="http://player.vimeo.com/video/70502724?title=0&amp;byline=0&amp;portrait=0" width="500" height="281" frameborder="0" webkitAllowFullScreen mozallowfullscreen allowFullScreen></iframe>
    </div>
  </div>
  <div class="intro-text">
  	<h2>Made for HTML5 Apps</h2>
  	<p>Browsers are great for web sites, but many HTML5 apps need more.  The Crosswalk Project is for apps, not web sites.</p>
  	<div class="fork-cta">
  	<a href="/help-build-crosswalk">Help Build Crosswalk</a>
  	  <a href="/try-crosswalk">Try Out Crosswalk</a>
  	</div>
  </div>
</div>
</header>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['crosswalk_banner'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'legal_text';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Legal text';
  $box->options = array(
    'body' => array(
      'value' => 'Legal Text: Aenean eu leo quam. Pellentesque ornare sem lacinia quam venenatis vestibulum. Nullam id dolor id nibh ultricies vehicula ut id elit. Cras mattis consectetur purus sit amet fermentum.',
      'format' => 'markdown',
    ),
  );
  $export['legal_text'] = $box;

  return $export;
}
