class Solution {
  public:
    int search(string &pat, string &txt) {
        // code here
        int k = pat.size();
        int m = txt.size();
        
        vector<int>p(26,0);
        vector<int>t(26,0);
        
        for(auto c:pat){
            p[c-'a']++;
        }
        
        int i=0,j=0,ans=0;
        
        while(j<m){
            t[txt[j]-'a']++;
            if(j-i+1<k)j++;
            else if (j-i+1==k){
                if(p==t){
                    ans++;
                }
                t[txt[i]-'a']--;
                
                i++;
                j++;
            }
        }return ans;
        
    }
};