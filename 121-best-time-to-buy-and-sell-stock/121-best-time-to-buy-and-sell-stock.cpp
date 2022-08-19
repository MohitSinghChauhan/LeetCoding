class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n = prices.size();
    
        int mx = 0, mi=INT_MAX, profit=0;
        for(int i=0; i<n; i++){  
            mi=min(mi,prices[i]);
            profit=prices[i]-mi;
            mx=max(mx,profit);        
        }
        return mx;
        
    }
};