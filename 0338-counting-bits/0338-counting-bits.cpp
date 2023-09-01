class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> result;
        for(int j=0; j<=n ; j++){
            int cnt =0;
            int x =j;
            while(x){
                if(x%2==1) cnt++;
                x/=2;
            }
            result.push_back(cnt);
        }
        return result;
    }
};