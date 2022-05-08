class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector <int> v;
        
        sort(nums.begin(),nums.end());
        
        for(int i = 1; i< nums.size(); i++){
            if(nums[i-1]==nums[i]) v.push_back(nums[i]);
        }
        
      return v;
    }
};