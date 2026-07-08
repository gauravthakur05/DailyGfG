/* Structure of doubly linked list Node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int x) {
        data = x;
        next = nullptr;
        prev = nullptr;
    }
};*/
class Solution {
  public:
    vector<vector<int>> displayList(Node *head) {
        vector<vector<int>>ans;
        vector<int>f;
        
        Node*temp = head;
        
        while(temp->next){
            f.push_back(temp->data);
            temp=temp->next;
        }
        f.push_back(temp->data);
        ans.push_back(f);
        vector<int>b;
        while(temp){
            b.push_back(temp->data);
            temp=temp->prev;
        }
        ans.push_back(b);
        return ans;
    }
};