class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<char,int> count;
        for(int i=0; i<s.size(); i++){
            count[s[i]]++;
            count[t[i]]--;
        }
        
        for( auto it : count)
            if(it.second) return 0;
        
        return 1;
    }
};