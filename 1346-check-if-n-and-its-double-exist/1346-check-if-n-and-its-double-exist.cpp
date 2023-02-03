class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        set <int> s;
        int x;
        
        for(int i=0; i<arr.size(); i++){
            if(s.find(arr[i])!=s.end()){
                return true;
            }
            x = arr[i];
            s.insert(2*x);
            if(x%2==0){
                s.insert(x/2);
            }
        }
        return false;
    }
};