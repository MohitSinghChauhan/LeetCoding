class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res(2,-1);
        bool isFirstFilled = false;

        for(int i=0; i<nums.size(); i++){
            if(nums[i]==target){
                if(!isFirstFilled){
                    res[0] = i;
                    isFirstFilled = true;
                }
                res[1] = i;
            }
        }

        return res;
    }
};