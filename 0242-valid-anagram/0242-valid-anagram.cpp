class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.length()!=t.length()) return false;

        vector<int> freqArr1(26,0);

        for(int i=0; i<s.length(); i++){
            freqArr1[s[i]-'a']++;
        }

        for(int i=0; i<s.length(); i++){
            freqArr1[t[i]-'a']--;
            if(freqArr1[t[i]-'a']<0){
                return false;
            }
        }

        return true;
    }
};