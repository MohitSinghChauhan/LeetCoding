class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.size();
        unordered_map<int,int> map;
        for(int i=0; i<n; i++){
            if(map.find(s[i])==map.end()){
                map.insert({s[i],1});
            }
            else map[s[i]]++;
        }
        
        for(int i=0; i<n; i++){
            if(map[s[i]]==1)
                return i;
        }
        
        return -1;
        
    }
};