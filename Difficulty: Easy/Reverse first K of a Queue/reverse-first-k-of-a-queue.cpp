class Solution {
  public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        // code here
        if(k>q.size()){
            return q;
        }
        stack<int>st;
        queue<int>q2;
        while(k){
            st.push(q.front());
            q.pop();
            k--;
        }
        while(!q.empty()){
            q2.push(q.front());
            q.pop();
        }
        
        while(!st.empty()){
            q.push(st.top());
            st.pop();
        }
        while(!q2.empty()){
            q.push(q2.front());
            q2.pop();
        }
        
        return q;
        
    }
};