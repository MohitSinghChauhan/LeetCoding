class Solution {

private:
   int count_target(vector<int> &nums , int curr_index , int curr_sum , int target , vector<vector<int>> &dp)
   {
       if(curr_sum == target && curr_index == nums.size())
         return 1;
       if(curr_index >= nums.size())
         return 0;
       
       if(dp[curr_index][curr_sum+1000] != -1)
           return dp[curr_index][curr_sum+1000];

       int plus_sum = count_target(nums , curr_index+1 , curr_sum + nums[curr_index] , target , dp);
       int subt_sum = count_target(nums , curr_index+1 , curr_sum - nums[curr_index] , target , dp);

       return  dp[curr_index][curr_sum+1000] = plus_sum + subt_sum;
   }
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        // int currIdx = 0;
         int n = nums.size();
    
        // unordered_map<string,int> memo;
       
        vector<vector<int>> dp(n+1 , vector<int>(2005 , -1));

        return count_target(nums, 0 , 0 ,  target, dp);
    }
};