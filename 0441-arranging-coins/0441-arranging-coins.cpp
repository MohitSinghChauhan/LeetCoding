class Solution {
public:
    int arrangeCoins(int n) {
       int lo=1,hi=n;
        if(n <= 2)
        return 1;
       while(lo<=hi){
          long long mid =  (hi-lo)/2+lo;
           long long check = mid*(mid+1)/2;
          if(check==n){
              return mid;
          }else if(check>=n){
              hi=mid-1;
          }else{
              lo=mid+1;
          }
       }
        return hi;
    }
};