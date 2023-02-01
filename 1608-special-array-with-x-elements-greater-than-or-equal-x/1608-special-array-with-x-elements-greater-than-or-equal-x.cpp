class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i = 0; i <= n; ++i) {
            int count = 0;
            for (int num : nums) {
                if (num >= i) count++;
            }
            if (count == i) return i;
        }
        return -1;
    }
};