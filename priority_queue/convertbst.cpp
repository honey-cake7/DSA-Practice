#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
    void levelOrder(Node* root) {
        if(root == NULL) return;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()) {
            Node* curr = q.front();
            q.pop();
            cout << curr->data << " ";
            if(curr->left != NULL) q.push(curr->left);
            if(curr->right != NULL) q.push(curr->right);
        }
    }
    void inorder(Node* root, vector<int>& nodes) {
        if(root == NULL) return;
        inorder(root->left, nodes);
        nodes.push_back(root->data);
        inorder(root->right, nodes);
    }
    void preorder(Node* root,vector<int>& nodes) {
        if(root == NULL) return;
        nodes.push_back(root->data);
        preorder(root->left);
        preorder(root->right);
    }
};
void print(vector<int>& nodes) {
    for(int val : nodes) {
        cout << val << " ";
    }
    cout << endl;
}
int main() {
    Node* root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(6);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->left = new Node(5);
    root->right->right = new Node(7);
    cout << "Level Order Traversal of the BST: ";
    root->levelOrder(root);
    cout << endl;
    vector<int> nodes;
    root->inorder(root, nodes);
    print(nodes);
    root->preorder(root, nodes,i);
    int i = 0;
 

}