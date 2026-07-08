class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
        int n = arr.size();
        
        int i=n-1;
        int j=n-1;
        
        while(i>=0){
            if(arr[i]==0){
                i--;
            }
            else{
                swap(arr[i--],arr[j--]);
            }
        }
    }
};