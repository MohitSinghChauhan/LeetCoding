class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
       unordered_set<int> rowsArr, colsArr;
       int rows = matrix.size(); 
       for(int i =0; i<rows; i++){
           for(int j=0; j<matrix[i].size(); j++){
               if(matrix[i][j]==0){
                    rowsArr.insert(i);
                    colsArr.insert(j);
                }
            }
       }

       for(auto i : rowsArr){
           for(int j=0; j<matrix[i].size(); j++){
               matrix[i][j] = 0;
           }
       }

     
        for(int j=0; j<rows; j++){
            for(auto i : colsArr){
               matrix[j][i] = 0;
           }
       }
    }
};