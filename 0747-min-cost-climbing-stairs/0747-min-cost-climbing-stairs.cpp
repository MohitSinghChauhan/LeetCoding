class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        unordered_map<int,int> memo;
        int currentStair = 0;
        return min(calMinCost(currentStair,cost,memo),calMinCost(currentStair+1,cost,memo));
    }
private:
    int calMinCost(int currentStair, vector<int>& cost, unordered_map<int, int>& memo){
        if(currentStair==cost.size())
            return 0;
        else if(currentStair>cost.size())
            return 1000;

        if(memo.find(currentStair)!=memo.end()){
            return memo[currentStair];
        }

        int minCostOneStep = cost[currentStair] + calMinCost(currentStair+1, cost, memo);
        int minCostTwoStep = cost[currentStair] + calMinCost(currentStair+2, cost, memo);

        int minCost = min(minCostOneStep, minCostTwoStep);
        memo[currentStair]=minCost;

        return minCost;
    }
};