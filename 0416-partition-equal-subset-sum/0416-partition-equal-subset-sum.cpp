class Solution {

private:
    bool canPartitionUtil(int currentIndex, vector<int>& nums , int targetSum, vector<vector<int>> &dp){
        if(currentIndex>=nums.size() && targetSum != 0){
            return false;
        }
        if(targetSum==0){
            return true;
        }
        if(targetSum<0) return false;

        if(dp[currentIndex][targetSum] != -1)
            return dp[currentIndex][targetSum];

        // if(memo.find(currentKey)!=memo.end()){
        //     return memo[currentKey];
        // }
        
    
        bool consider  = false;
        
        if(nums[currentIndex]<=targetSum){
            consider = canPartitionUtil(currentIndex+1, nums, targetSum - nums[currentIndex], dp);
        } 
        bool notConsider = canPartitionUtil(currentIndex+1, nums, targetSum, dp);
        bool result = consider || notConsider;
        return dp[currentIndex][targetSum] = result;
        
    }


public:
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for(auto num : nums){
            sum+=num;
        }
        if(sum%2!=0){
            return false;
        }
        int n = nums.size();
        
        vector<vector<int>> dp(n+1 , vector<int>(sum+1 , -1));
        // int dp[n+1][sum+1];
        // unordered_map<string,bool> memo;

        return canPartitionUtil(0, nums, sum/2, dp);
    }
};