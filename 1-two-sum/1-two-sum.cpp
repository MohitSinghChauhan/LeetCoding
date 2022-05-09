class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> ans;
        unordered_map <int,int> map;
        int n = nums.size();
        for(int i=0; i<n; i++)
        {
            int numberToFind = target - nums[i];
            if(map.find(numberToFind) != map.end()){
                ans.push_back(map[numberToFind]);
                ans.push_back(i);
                break;
            }
            
            map[nums[i]]=i;
            
            
        }

      
     return ans;
        
    }
};