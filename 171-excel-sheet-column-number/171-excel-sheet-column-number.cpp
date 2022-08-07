class Solution {
public:
    int titleToNumber(string s) {
        
        long long power = 1, n=s.size();
        int ans =0;
        for(int i = n-1; i>=0; i--){

            int d = (s[i]-'A'+1);
            ans+= d*power;
            power*=26;
        }
        
        return ans;
        
    }
};