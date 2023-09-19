class Solution {
private:
    int findStep(int currIdx, int totalSteps, vector<int>&dp){
        
        if(currIdx == totalSteps)
            return 1;
        if(currIdx>totalSteps)
            return 0;
        
        if(dp[currIdx]!=-1)
            return dp[currIdx];
        
        int firstStep = findStep(currIdx+1, totalSteps, dp);
        int secondStep = findStep(currIdx+2, totalSteps, dp);
        
        return dp[currIdx] = firstStep+secondStep;
    }    
public:
    int climbStairs(int n) {
        int currIdx = 0;
        vector<int> dp(n+1, -1);
        return findStep(0,n,dp);
    }
};