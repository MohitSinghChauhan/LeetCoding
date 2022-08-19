class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n = prices.size();
    
        int max = 0, min=INT_MAX;
        for(int i=0; i<n; i++){
            if(prices[i]<min){
                min=prices[i];
                continue;
            }
            if(prices[i]-min>max){
                max=prices[i]-min;
            }
        }
        if(max<=0) return 0;
        return max;
        
    }
};