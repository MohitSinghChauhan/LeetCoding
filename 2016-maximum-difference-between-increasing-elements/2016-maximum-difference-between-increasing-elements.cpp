class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int mn=INT_MAX, mx=-1;
        int n = nums.size();
        
        for(int i=0; i<n; i++){
            mn = min(nums[i],mn);
            mx = max(nums[i]-mn, mx);
        }
        
        if(mx==0) return -1;
        return mx;
        
    }
};