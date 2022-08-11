class Solution {
public:
    int firstUniqChar(string s) {
        int ans=-1;
       unordered_map<char,int> m;
        int n = s.size();
        
        for(int i=0; i<n; i++){
            m[s[i]]++;            
        }
        
        for(int i=0;i<n;i++){
            if(m[s[i]]==1){
                ans=i;
                break;
            }
        }
        return ans;
        
    }
};