<?php

function my_menu_menu_page(){
  return t("History of K-1 fighters");
}

function my_menu_history_of_badr_menu_page() {
  return t("History of Badr Hari");
}

function my_menu_history_of_alistar_menu_page() {
  return t("History of Alistar Overim");
}

function my_menu_history_of_badr_wins_menu_page(){
  return t("History of wins of Badr Hari");
}

function my_menu_history_of_alistar_wins_menu_page(){
  return t("<p> History of wins of Alistair Overeem </p>");
}

/**
 * Implements hook_permission().
 *
 * Provides a demonstration access string.
 */

/*function my_menu_permission() {
  return array(
    'access protected my menu' => array(
      'title' => t('Access the protected my menu'),
    ),
  );

}*/