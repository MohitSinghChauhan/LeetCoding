class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        string common = strs[0];
        for(int i=1; i<n; i++){
            string tempCommom = "";
            for(int j=0; j<strs[i].size(); j++){
                if(strs[i][j]==common[j])
                tempCommom+=strs[i][j];
                else break;
            }
            common = tempCommom;
        }

        return common;
    }
};