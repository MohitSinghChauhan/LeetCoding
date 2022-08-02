class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.size();
        vector<int> a(26,0);
        
        for(auto i : s) a[i-'a']++;
        
        for(int i=0; i<n; i++)
            if(a[s[i]-'a']==1)
            return i;
        
        
        return -1;
        
    }
};