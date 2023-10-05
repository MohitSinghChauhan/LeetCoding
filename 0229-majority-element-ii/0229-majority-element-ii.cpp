class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt = nums.size()/3;
        vector<int> ans;

        unordered_map<int,int> map;

        for(int i=0; i< nums.size(); i++){
            map[nums[i]]++;
        }

        for(auto i : map){
            if(i.second>cnt){
                ans.push_back(i.first);
            }
        }

        return ans;
    }
};