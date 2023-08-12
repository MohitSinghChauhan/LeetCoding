class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result;
        int first=-1,last=-1;
        bool firstFilled=false;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==target){
                if(!firstFilled){
                    first=i;
                    firstFilled=true;
                }
                last=i;
            }
        }
        result.push_back(first);
        result.push_back(last);
        return result;
    }
};