class Solution {
public:
    bool winnerOfGame(string colors) {
        int n= colors.size();
        int dpA[n+1];
        int dpB[n+1];
        memset(dpA,0, sizeof dpA);
        memset(dpB,0, sizeof dpB);
        for(int i=1; i<n; i++) {
            if(colors[i-1]=='B' && colors[i+1]=='B' && colors[i]=='B'){
                dpB[i]= dpB[i-1]+1;
            } else dpB[i]=dpB[i-1];
        }
        
          for(int i=1; i<n; i++) {
            if(colors[i-1]=='A'&& colors[i+1]=='A' && colors[i]=='A'){
                dpA[i]= dpA[i-1]+1;
            } else dpA[i]=dpA[i-1];
        }
        
        int maxiA=0;
        int maxiB=0;
        for( auto i: dpB){
            maxiB= max(maxiB,i);
        }
         for( auto i: dpA){
            maxiA= max(maxiA,i);
         }
        
         return maxiA>maxiB ?  true :  false;
        
        
    }
};