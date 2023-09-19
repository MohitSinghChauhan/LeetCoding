class Solution {

private:
    int countTargetSumWays(int currIdx, vector<int>& nums, int target){

        if(target == 0 && currIdx==nums.size())
            return 1;
        
        if(currIdx == nums.size())
            return 0;

        int includeWithPlus = countTargetSumWays(currIdx+1, nums, target-nums[currIdx]);
        int includeWithMinus = countTargetSumWays(currIdx+1, nums, target+nums[currIdx]);

        return includeWithPlus + includeWithMinus;
    }

public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int currIdx = 0;
        return countTargetSumWays(currIdx, nums, target);
    }
};