class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector <int> v(nums.size());
        int sum=0;
        for(int i=0; i<nums.size();i++){
            sum+=nums[i];
            v[i]=sum;
        }
        return v;
        
    }
};