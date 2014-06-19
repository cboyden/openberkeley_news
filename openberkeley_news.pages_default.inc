<?php
/**
 * @file
 * openberkeley_news.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function openberkeley_news_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'news_archive';
  $page->task = 'page';
  $page->admin_title = 'News Archive';
  $page->admin_description = 'Panel with view of news archive.';
  $page->path = 'news-archive';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_news_archive_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'news_archive';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'News Archive';
  $display->uuid = '11a76924-963b-4974-b852-eb81ccf04469';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6800d1e8-5a93-474d-8815-8c93dc5dab82';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'news_archive-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => NULL,
      'widget_title' => '',
      'items_per_page' => NULL,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6800d1e8-5a93-474d-8815-8c93dc5dab82';
    $display->content['new-6800d1e8-5a93-474d-8815-8c93dc5dab82'] = $pane;
    $display->panels['contentmain'][0] = 'new-6800d1e8-5a93-474d-8815-8c93dc5dab82';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-6800d1e8-5a93-474d-8815-8c93dc5dab82';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['news_archive'] = $page;

  return $pages;

}
