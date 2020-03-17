
class BTnode {
    public:
        int key;
        int depth;
        BTnode *left, *right, *parent;
        BTnode(int key, BTnode *left, BTnode *right, BTnode *parent) : key(key), left(left), right(right), parent(parent) {};
};


class BST {
    private:
        BTnode *root;
        BTnode *insertH(BTnode *root, int key);
        void inorder(BTnode *root) const;
        void ascii(BTnode *root) const;
    public:
        BST();
        BST(BTnode *root);
        void print() const;
        void insert(int key);
        bool isEmpty() const;
};


