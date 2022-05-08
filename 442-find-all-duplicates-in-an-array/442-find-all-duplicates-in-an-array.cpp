class Solution {
public:
     vector<int> findDuplicates(vector<int>& nums) {
        vector <int> v;
        map<int, int> freq;
        
        for(int i : nums){
            freq[i]++;
        }
        for(auto x: freq){
            if(x.second==2){
                v.push_back(x.first);
            }
        }
        
      return v;
    }
};