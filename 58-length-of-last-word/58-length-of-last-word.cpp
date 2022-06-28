class Solution {
public:
    int lengthOfLastWord(string s) {
        string ans;
        for(int i=0; i<s.size(); i++){
           if(s[i]==' ' and s[i+1]!=' ' and i+1<s.size()){
              ans.clear();
           }
           else if(s[i]!=' '){
               ans.push_back(s[i]);

           }
            
        }
        return ans.size();
        
    }
};