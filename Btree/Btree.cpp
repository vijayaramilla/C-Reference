#include <iostream>
# include"Btree.h"
using namespace std;

Btree::Btree(){
  root = NULL;
}

Btree::~Btree(){
  destroy_tree();
}
void Btree::destroy_tree(){
  destroy_tree(root);
}
void Btree::destroy_tree(node* leaf){
  if(leaf != NULL){
    destroy_tree(leaf->left);
    destroy_tree(leaf->right);
    delete leaf;
  }
}

void Btree::insert(char ch, node* leaf){
  if(leaf->left != NULL) {
    if(ch < leaf->left->val) {
      leaf->right = leaf->left;
      leaf->left = new node;
      leaf->left->parent = leaf;
    } else {
      leaf->right = new node;
      leaf->right->val = ch;
      leaf->right->parent = leaf;
    }
  } else {
    leaf->left = new node;
    leaf->left->val = ch;
    leaf->left->parent = leaf;
  }
}

node* Btree::search(char ch, node* leaf) {
  if(leaf != NULL) {
    if(ch == leaf->val) {
      return leaf;
    } else {
        node* temp = search(ch, leaf->left);
        if(temp == NULL){
          temp = search(ch, leaf->right);
        }
        return temp;
    }
  }
  return NULL;
}

void Btree::insert(char ch){
  if(root != NULL) {
    insert(ch, root);
  } else {
    root = new node;
    root->val = ch;
    root->left = NULL;
    root->right = NULL;
  }
}

node* Btree::search(char ch){
  search(ch, root);
}

int main(){
  Btree* tree = new Btree;
  tree->insert('a');
  node* n = tree->search('z');
  if(n != NULL) {
    cout<< n->val;
  } else{
    cout<< "element not found";
  }
  return 0;
}