class Solution {
public:
    static bool compareByValue(pair<int, int>& a, pair<int, int>& b) {
    return a.second > b.second;
}
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        int n = nums.size();

        map<int,int> mp;

        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }

        vector<pair<int,int>> v_pair(mp.begin() , mp.end());

        sort(v_pair.begin() , v_pair.end() , compareByValue);
        vector<int> ans;

        for(int i=0;i<k;i++)
        {
            ans.push_back(v_pair[i].first);
        }    

        return ans;

        

    }
};