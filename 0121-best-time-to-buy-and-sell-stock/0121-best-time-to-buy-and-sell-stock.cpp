class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit= 0, num=prices[0];
        int n = prices.size();

        for(int i=1; i<n; i++){

          
        profit = max(profit, prices[i]-num);
           
           num = min(num,prices[i]);
        }
        
        return profit;
    }
};