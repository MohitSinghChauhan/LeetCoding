class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string,vector<string>> map;

        for(auto str : strs){
            string tempStr = str;
            sort(tempStr.begin(),tempStr.end());
            map[tempStr].push_back(str);
        }

        vector<vector<string>> result;

        for(auto i : map){
            vector<string> temp;
            for(auto j : i.second){
                temp.push_back(j);
            }
            result.push_back(temp);
        }

        return result;
    }
};