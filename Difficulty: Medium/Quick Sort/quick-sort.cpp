class Solution {
  public:
    void quickSort(vector<int>& arr, int low, int high) {
        // code here
        if(low>=high) return;
        int pos= partition(arr,low,high);
        quickSort(arr,low,pos-1);
        quickSort(arr,pos+1,high);
    }

    int partition(vector<int>& arr, int low, int high) {
        // code here
        int pivot  = arr[low];
        int i=low+1;
        int j=high;
        while(i<=j){
            while(i<=high and arr[i] <= pivot) i++;
            while(j>=low and arr[j]>pivot)j--;
            
            if(i<j) swap(arr[i],arr[j]);
        }
        swap(arr[low],arr[j]);
        return j;
        
    }
};