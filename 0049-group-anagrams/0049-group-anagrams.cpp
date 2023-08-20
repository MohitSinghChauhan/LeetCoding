class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string,vector<string>> map;

        for(auto str : strs){
            vector<int> count(26,0);
            for(auto i : str){
                count[i-'a']++;
            }
            
            string ans;
            for(int i=0; i<26; i++){
                ans+= '#';
                ans+=to_string(count[i]);
            }
            map[ans].push_back(str);
        }

        vector<vector<string>> result;

        for(auto i : map){
            result.push_back(i.second);
        }

        return result;
    }
};