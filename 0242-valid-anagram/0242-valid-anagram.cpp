class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.length()!=t.length()) return false;

        vector<int> freqArr1(27,0);
        vector<int> freqArr2(27,0);

        for(int i=0; i<s.length(); i++){
            freqArr1[s[i]-'a']++;
            freqArr2[t[i]-'a']++;
        }

        for(int i=0; i<27; i++){
            if(freqArr1[i]!=freqArr2[i]){
                return false;
            }
        }

        return true;
    }
};