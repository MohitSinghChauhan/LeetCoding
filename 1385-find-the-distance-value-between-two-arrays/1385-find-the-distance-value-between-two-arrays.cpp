class Solution {
public:
    bool is_valid(vector<int> &arr , int tar , int d)
    {
        int low = 0 , high = arr.size() - 1;
        
        while(low <= high)
        {
            int mid = low + (high-low)/2;
            
           if(abs(arr[mid] - tar) <= d)
               return false;
          else if(arr[mid] < tar)
              low = mid+1;
            else
                high = mid-1;
        }
        return true;
    }
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin() , arr2.end());
        int ans = 0;
        for(auto x : arr1)
        {
            if(is_valid(arr2 , x , d))
                ans++;
        }
        return ans;
    }
};