class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int cnt=0;
        for(int i=0; i< nums.size()-1;i++){

        if(nums[cnt]!=nums[i+1]){
            cnt++;
            nums[cnt]=nums[i+1];
        }
        }
        
        return cnt+1;
        
    }
};