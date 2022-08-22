class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0 or (x!=0 and x%10==0)) return false;
        if(x==0) return true;
        long long int rev= 0;
        int n=x;
        while(n!=0){
            int last_digit = n%10;
            rev = rev*10+last_digit;
            n/=10;
        }
        
        if(rev==x) 
        return true;
        
        return false;
    }
       
};