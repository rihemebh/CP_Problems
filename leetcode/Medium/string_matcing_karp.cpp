class Solution {
public:
    int strStr(string haystack, string needle) {
        int m = needle.length();
        int n = haystack.length();
        int h_needle= 0;
        int h_haystack= 0;
        
        for(int i=0; i< m; i++){
          h_needle =  h_needle + needle[i] ;
          h_haystack =  h_haystack + haystack[i];  
        }

        for(int i=0;i<= n-m; i++){
            if(h_haystack == h_needle ){
                int j;
                for(j=0; j< m; j ++ ){
                    if(needle[j] != haystack[i+j]) break;
                }
                if(j>=m){
                    return i;
                }
            
                
            }
            else{
                 h_haystack = h_haystack - haystack[i] + haystack[i+m];
            }
             
        }
        
        return -1;
    }
};
