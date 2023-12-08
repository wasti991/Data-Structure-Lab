#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) : data(value), left(nullptr), right(nullptr) {}
    ~Node() {
        delete left;
        delete right;
    }
};

Node* insertBST(Node* root, int value) {
    if (root == nullptr) {
        try {
            return new Node(value);
        } catch (const bad_alloc&) {
            cerr << "Memory allocation failed." << endl;
            exit(EXIT_FAILURE);
        }
    }

    if (value < root->data) {
        root->left = insertBST(root->left, value);
    } else {
        root->right = insertBST(root->right, value);
    }

    return root;
}

void preOrder(const Node* root) {
    if (root != nullptr) {
        cout << root->data << " ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

void inOrder(const Node* root) {
    if (root != nullptr) {
        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);
    }
}

void postOrder(const Node* root) {
    if (root != nullptr) {
        postOrder(root->left);
        postOrder(root->right);
        cout << root->data << " ";
    }
}

void clearTree(Node*& root) {
    delete root;
    root = nullptr;
}

int main() {
    Node* root = nullptr;

    root = insertBST(root, 8);
    insertBST(root, 1);
    insertBST(root, 5);
    insertBST(root, 7);
    insertBST(root, 2);
    insertBST(root, 8);
    insertBST(root, 3);

    cout << "Pre-order traversal: ";
    preOrder(root);
    cout << endl;

    cout << "In-order traversal: ";
    inOrder(root);
    cout << endl;

    cout << "Post-order traversal: ";
    postOrder(root);
    cout << endl;

    // Clearing memory
    clearTree(root);

    return 0;
}
