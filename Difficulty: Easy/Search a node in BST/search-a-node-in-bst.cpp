/*
Definition for Node
class Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    bool search(Node* root, int key) {
        // code here
        while(root!=NULL){
            
            if(root->data==key){
                return true;
            }
            
            if(key<root->data){
                root=root->left;
            }
            else{
                root=root->right;
            }
        }
        return false;
    }
};