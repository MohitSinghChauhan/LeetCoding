class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> map = {{'M', 1000}, {'D', 500}, {'C', 100}, {'L', 50}, {'X', 10}, {'V', 5}, {'I', 1}};
        int ans = map[s.back()];
        for(int i =0; i<s.size()-1; i++){
            if(map[s[i]]>=map[s[i+1]]){
                ans+=map[s[i]];
            }else{
                ans-=map[s[i]];      
            }
        }

        return ans;
    }
};