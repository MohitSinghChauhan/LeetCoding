class Solution {
public:
    int strStr(string haystack, string needle) {
        int n1=haystack.size();
        int n2=needle.size();
                    
        if(n1==n2 and n1==1) return 0;
        
        for(int i=0;i<=n1-n2;i++){
            if(n2>(n1-i)) return -1;

        if(haystack[i]==needle[0]){     
            if(n2==1) return i;
            
            for(int j=0;j<n2; j++){
                int t = i+j;
                if(haystack[t]!=needle[j]){
                    break;
                }    
                if(j==n2-1){
                    return i;
                }
            }
        }
        }
        
        return -1;
        
    }
};