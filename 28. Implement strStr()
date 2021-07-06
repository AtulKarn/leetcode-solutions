class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle=="")
            return 0;
        int h=haystack.size(), n=needle.size(), j;
        for(int i=0;i<h-n+1;i++){
            if (haystack[i]==needle[0]){
                for(j=1;j<n;j++){
                    if (needle[j]!=haystack[i+j]){
                        break;
                    }
                }
            }
            if (j==n){
                return i;
            }
        }
        return -1;
    }
};
