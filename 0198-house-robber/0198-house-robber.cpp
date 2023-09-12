class Solution {
public:
    int rob(vector<int>& nums) {
        unordered_map<int,int> memo;
        return maxRobbery(0,nums,memo);
    }
private:
    int maxRobbery(int houseNum, vector<int>& nums, unordered_map<int,int>& memo ){
        if(houseNum>=nums.size()){
            return 0;
        }

        if(memo.find(houseNum)!=memo.end()){
            return memo[houseNum];
        }

        int robbing = nums[houseNum] + maxRobbery(houseNum+2, nums, memo);
        int skipRobbing = maxRobbery(houseNum+1, nums, memo);

        int output = max(robbing, skipRobbing);
        memo[houseNum] = output;

        return output;
    }
};