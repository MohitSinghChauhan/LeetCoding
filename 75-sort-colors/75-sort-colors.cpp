class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int n = nums.size();
        int low=0, mid=0, hi=n-1;
        
        while(mid<=hi){
            if(nums[mid]==0){
                swap(nums[mid],nums[low]);
                mid++;
                low++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{
                swap(nums[mid],nums[hi]);
                hi--;
            }
        }
    }
};