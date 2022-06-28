class Solution {
public:
    int lengthOfLastWord(string s) {
        string lastWord;
        bool check=false;
        for(int i=s.size()-1; i>=0; i--){
           if(s[i]==' '){
              
               if(check) break;
           }
              
            
           else if(s[i]!=' '){
               lastWord.push_back(s[i]);
               check=true;

           }
            
        }
        return lastWord.size();
        
    }
};