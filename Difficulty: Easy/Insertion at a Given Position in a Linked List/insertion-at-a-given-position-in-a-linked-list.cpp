/*
class Node {
  public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/

class Solution {
  public:
    Node *insertPos(Node *head, int pos, int val) {
        // code here
        Node*newnode = new Node(val);
        
        if(head==NULL){
            return head;
        }
        if(pos==1){
            newnode->next = head;
            return newnode;
        }
        
        Node*temp = head;
        for(int i=1;i<pos-1&&temp;i++){
            temp=temp->next;
        }
        newnode->next= temp->next;
        temp->next = newnode;
        
        return head;
        
    }
};