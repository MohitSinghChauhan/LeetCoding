class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //Optimal Solution - using two pointer
        int p=0;
        for(int i=1; i<nums.size(); i++){
            if(nums[i]!=nums[p]){
                nums[++p]=nums[i];
            }
        }

        return p+1;
    }
};