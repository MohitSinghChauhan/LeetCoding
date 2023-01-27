class Solution {
public:
    int mySqrt(int x) {
        int lo=1, hi=x;
        long long ans;
        while(lo<=hi){
          int  mid = (hi-lo)/2+lo;
            if(mid<=x/mid){
                ans=mid;
                lo=mid+1;
            }else{
                hi=mid-1;
            }
        }
        
        return ans;
        
    }
};