class Solution {
public:
    int mySqrt(int x) {
        int lo=1, hi=x;
        long long ans;
        while(lo<=hi){
            long long mid = (hi-lo)/2+lo;
            if(mid*mid<=x){
                ans=mid;
                lo=mid+1;
            }else{
                hi=mid-1;
            }
        }
        
        return ans;
        
    }
};