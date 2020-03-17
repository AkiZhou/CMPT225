
#include "BST.h"
#include "assert.h"

#include <iostream>
#include <cassert>

using namespace std;

BST::BST() {
    root = NULL;
}


BST::BST(BTnode *root) {
    this->root = root;
}


bool BST::isEmpty() const {
    return (root == NULL);
}


void BST::insert(int key) {
    root = insertH(root, key);
} // insert


void BST::print() const {
    ascii(root);
    cout << endl;
} // print


void BST::ascii(BTnode *tree) const {
    if (tree == NULL) return;

    ascii(tree->right);

    for (int i = 0; i < tree->depth; i++) {
        cout << "  ";
    }
    cout << tree->key << endl;

    ascii(tree->left);

    
    /*
    if (tree == NULL) return;

    cout << '[' << tree->key;

    if (tree->left) {
        cout << " L";
        ascii(tree->left);
    }
    if (tree->right) {
        cout << " R";
        ascii(tree->right);
    }
    
    cout << ']';

    */
} // ascii


void BST::inorder(BTnode *tree) const {

} // inorder


BTnode * BST::insertH(BTnode *tree, int key) {
    // base
    if (tree == NULL) {
        BTnode * newnode = new BTnode(key, NULL, NULL, NULL);
        newnode->depth = 0;
        return newnode;
    }

    if (key <= tree->key) {
        // left
        tree->left = insertH(tree->left, key);
        assert(tree->left);
        tree->left->parent = tree;
        tree->left->depth = tree->depth +1;
    } else {
        // right
        tree->right = insertH(tree->right, key);
        tree->right->parent = tree;
        tree->right->depth = tree->depth +1;
    }

    return tree;

} // insertH








