class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if(k==n) return;
        if(n<k){
            k = k % n;  
        }
        vector<int> ans;
        for(int i = n-k ; i<n; i++){
            ans.push_back(nums[i]);
        }
        //Old code -- big blunder
        //code you provided has a bug in the second for loop where you are copying elements from nums[i] to nums[i+k]. The problem is that you are overwriting the elements in nums before you have finished copying all the required elements.
        // for(int i = 0; i<n-k; i++){
        //     nums[i+k]=nums[i];
        // }

        // correct code
        for(int i=n-k-1; i>=0; i-- ){
            nums[i+k]=nums[i];
        }


        for(int i=0; i<k; i++){
            nums[i]=ans[i];
        }
    }
};