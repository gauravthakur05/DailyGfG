class Solution {
  public:
    void nearlySorted(vector<int>& arr, int k) {
        // code here
        priority_queue<int,vector<int>,greater<int>>pq;
        int j=0;
        for(int i=0;i<arr.size();i++){
            if(pq.size()==k+1){
                arr[j++] = pq.top();
                pq.pop();
            }
            pq.push(arr[i]);
        }
        while(pq.size()){
                arr[j++]=pq.top();
                pq.pop();
            }
        
        
    }
};