class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0 or (x!=0 and x%10==0)) return false;
        
        string s = to_string(x);
        int n = s.length();
        for(int i=0; i<=n/2-1; i++){
            if(s[i]!=s[n-i-1]) return false;

        }
        return true;
    }
       
};