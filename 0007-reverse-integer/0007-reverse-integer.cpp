class Solution {
public:
    int reverse(int x) {
        int n = x;
        int ans=0;
        while(n!=0){
            if(ans>(INT_MAX/10) || ans< (INT_MIN/10)){
            return 0;
            }
            ans=(ans*10)+(n%10);
            n/=10;
        }
        return ans;

    }
};