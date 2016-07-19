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

function my_menu_history_of_badr_loss_menu_page(){
  return t("History of losses of Badr Hari");
}

function my_menu_history_of_badr_w_menu_page(){
  return t("First win of Badr Hari");
}

function my_menu_history_of_alistar_wins_menu_page(){
  return t("History of wins of Alistair Overeem");
}

function my_menu_test_item_menu_page() {
  return t("Test item page");
}

function my_menu_test_item_1_menu_page(){
  return t("Test tab 1");
}

function my_menu_test_item_2_menu_page() {
  return t("Test tab 2");
}

function my_menu_test_item_2_2_menu_page(){
  return t("Test tab 2_2");
}

function my_menu_test_item_altered_menu_page(){
  return t("This is a altered page");
}

function my_menu_test_altered_page(){
  return t("This is a altered page");
}

function me_menu_node_of_item($node) {
  return $node->title;
}

function my_menu_show_node_item($nid){
  // Load a node

  $node = node_load($nid);

// Establish as a new node

  unset($node->nid);
  $node->is_new = true;

// Save the copy
  node_save($node);

}