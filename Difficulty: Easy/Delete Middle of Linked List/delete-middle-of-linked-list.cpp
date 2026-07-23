
class Solution {
  public:
    Node* deleteMid(Node* head) {
        // Your Code Here
        Node*slow=head;
        Node*fast=head;
        Node*prev = NULL;
        
        if(head==NULL||head->next==NULL){
            return NULL;
        }
        while(fast!=NULL&&fast->next!=NULL){
            prev = slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        prev->next = slow->next;
        return head;
    }
    
    
};