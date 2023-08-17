class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string>sortedArr=strs;
        for(auto& str : sortedArr){
            sort(str.begin(),str.end());
        }

        vector<vector<string>> result;

        unordered_set<string> isChecked;

        for(int i =0; i<strs.size(); i++){
            auto itr = isChecked.find(sortedArr[i]);
            if( itr != isChecked.end()) continue;
            isChecked.insert(sortedArr[i]);
            vector<string> tempResult;
            tempResult.push_back(strs[i]);
            for(int j=i+1; j<strs.size(); j++ ){
                if(sortedArr[i]==sortedArr[j]){
                    tempResult.push_back(strs[j]);
                }   
            }
            result.push_back(tempResult);
        }

        return result;
    }
};