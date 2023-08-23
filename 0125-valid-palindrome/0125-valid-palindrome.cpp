class Solution {
public:
    bool isPalindrome(string s) {
        
    string filtered;
    for(char c : s){
        if(isalnum(c)){
            filtered+=tolower(c);
        }
    }

    string str_rev = filtered;
    reverse(str_rev.begin(), str_rev.end());

    if(str_rev==filtered){
        return true;
    }

    return false;

    }
};