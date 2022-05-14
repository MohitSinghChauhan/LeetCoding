class Solution {
public:
    int strStr(string haystack, string needle) {
        int n1=haystack.size();
        int n2=needle.size();
                    
        if(n1==n2 and n1==1) return 0;
        
        for(int i=0;i<n1;i++){
            if(n2>(n1-i)) return -1;

        if(haystack[i]==needle[0] and n2<=(n1-i)){     
            if(n2==1) return i;
            
            for(int j=i,k=0;j<=n2,k<n2; j++,k++){
                if(haystack[j]!=needle[k]){
                    break;
                }    
                if(k==n2-1){
                    return i;
                }
            }
        }
        }
        
        return -1;
        
    }
};