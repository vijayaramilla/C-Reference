#include <iostream>
using namespace std;

struct node {
  char val;
  node* left;
  node* right;
  node* parent;
  bool marked;
};

class Btree {
  public:
    Btree();
    ~Btree();
    
    void insert(char val);
    node* search(char val);
    void destroy_tree();
    
  private:
    void destroy_tree(node* leaf);
    void insert(char val, node* leaf);
    node* search(char key, node* leaf);
    
    node* root;
};
