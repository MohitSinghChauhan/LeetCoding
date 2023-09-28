class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //Bruteforce - using set
        int ans =0;
        set<int> st;
        for(int i=0; i<nums.size(); i++){
            st.insert(nums[i]);
        }
        for(auto i : st){
            nums[ans++]=i;
        }

        return ans;
    }
};