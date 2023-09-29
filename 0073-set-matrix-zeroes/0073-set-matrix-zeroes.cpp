class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
       int r = matrix.size();
       int c = matrix[0].size();
    //    vector<int> rows(r,1), cols(c,1);
    // first row --> matrix[0][..] 
    // first col --> matrix[..][0]

        int colMark = 1;
       
       for(int i=0; i<r; i++){
           for(int j=0; j<c; j++){
               if(matrix[i][j]==0){
                   
                   matrix[i][0]=0;
                   if(j!=0)
                    matrix[0][j]=0;
                   else
                    colMark = 0;
               }
           }
       }

        for(int i=1; i<r; i++){
           for(int j=1; j<c; j++){
               if(matrix[i][0]==0 || matrix[0][j]==0){
                    matrix[i][j]=0;
               }
           }
       }

       if(matrix[0][0]==0)
        for(int i=0; i<c; i++ )
            matrix[0][i]=0;
        
        if(colMark==0)
            for(int j=0; j<r; j++)
                matrix[j][0]=0;

    }
};

