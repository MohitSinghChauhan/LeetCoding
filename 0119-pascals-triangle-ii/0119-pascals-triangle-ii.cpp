class Solution {
private:

    int nCr (int n, int r){
        long long num =1;
        for(int i=0; i<r; i++){
            num *= n - i;
            num /= i+1;
        }

        return (int)num;
    }

public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans;
        for(int i=0; i<=rowIndex; i++){
            ans.push_back(nCr(rowIndex, i));
        }
        return ans;
    }
};

// nCr = 