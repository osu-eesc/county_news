<?php

/**
 * Implementation of hook_strongarm().
 */
function county_news_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_news_feed_item';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '3',
    'author' => '2',
    'options' => '4',
    'menu' => '0',
    'book' => '1',
    'path' => '5',
    'attachments' => '6',
    'path_redirect' => '7',
  );
  $export['content_extra_weights_news_feed_item'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_news_feed_item';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_news_feed_item'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_news_feed_item';
  $strongarm->value = '1';
  $export['upload_news_feed_item'] = $strongarm;

  return $export;
}
