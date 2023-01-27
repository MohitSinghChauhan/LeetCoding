class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        bool res = false;
        
        for(int i=0; i<arr.size(); i++){
            if(arr[i]>arr[i+1]){
                res=true;
                return i;
            }
        }
        return -1;
        
    }
};