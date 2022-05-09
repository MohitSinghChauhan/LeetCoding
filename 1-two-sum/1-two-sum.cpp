class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> ans;
        int n = nums.size();

        for (int i = 0; i < n; i++)
        {
            int k = target - nums[i];
            for (int j = i + 1; j < n; j++)
            {
                if (nums[j] == k)
                {
                    ans.push_back(i);
                    ans.push_back(j);
                    break;
                }
            }
        }

        return ans;
    }
};