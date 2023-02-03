class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        set<int> s;
        int cnt=1;
        int last = arr[arr.size()-1];
        for(auto i: arr){
            s.insert(i);
        }
        for(int i=1; i<=INT_MAX; i++){
            if(s.find(i)!=s.end()){continue;} 
            if(k==cnt) return i;
            cnt++;
        }
        return -1;
    }
};