class Solution {
public:
    string countAndSay(int n) {
        if(n==1){
            return "1";
        }
        string s = countAndSay(n-1);
        string result = "";
        int cnt=1;
        int size = s.size();
        for(int i= 0; i < size-1; i++){
            if(s[i]==s[i+1]) cnt++;
            else{
                result+=(to_string(cnt));
                result.push_back(s[i]);
                cnt=1;
            }
        }

        result+=(to_string(cnt));
        result.push_back(s[size-1]);

        return result;

    }
};