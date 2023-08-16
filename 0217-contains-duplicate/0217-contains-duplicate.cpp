class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        for(auto i : nums)
        {
            auto itr = s.find(i);
            if(itr == s.end()) s.insert(i);
            else return true;
        }

        return false;
    }

};