class Solution {
  public:
    vector<int> kLargest(vector<int>& arr, int k) {
        // code here
        
        
        priority_queue<int>q;
        vector<int>ans;
        for(auto x: arr){
            q.push(x);
        }
        
        for(int i=0;i<k;i++){
            ans.push_back(q.top());
            q.pop();
        }
        
        return ans;
        
    }
};