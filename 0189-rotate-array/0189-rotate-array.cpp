class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(k==nums.size()) return;
        if(nums.size()<k){
            k = k % nums.size();  
        }

        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+(k));
        reverse(nums.begin()+k,nums.end());

    }
};