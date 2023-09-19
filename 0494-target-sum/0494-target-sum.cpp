class Solution {

private:
    int countTargetSumWays(int currIdx, vector<int>& nums, int target, unordered_map<string, int>& memo){

        if(target == 0 && currIdx==nums.size())
            return 1;
        
        if(currIdx == nums.size())
            return 0;

        string currentKey = to_string(currIdx)+"-"+to_string(target);

        if(memo.find(currentKey)!=memo.end()){
            return memo[currentKey];
        }

        int includeWithPlus = countTargetSumWays(currIdx+1, nums, target-nums[currIdx], memo);
        int includeWithMinus = countTargetSumWays(currIdx+1, nums, target+nums[currIdx], memo);

        return memo[currentKey] = includeWithPlus + includeWithMinus;
    }

public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int currIdx = 0;
        unordered_map<string,int> memo;
        return countTargetSumWays(currIdx, nums, target, memo);
    }
};