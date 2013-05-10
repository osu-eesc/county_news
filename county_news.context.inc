<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function county_news_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'county_news_feed_block';
  $context->description = '';
  $context->tag = 'path';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-county_news-block_1' => array(
          'module' => 'views',
          'delta' => 'county_news-block_1',
          'region' => 'content_bottom',
          'weight' => 1,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('path');
  $export['county_news_feed_block'] = $context;

  return $export;
}
