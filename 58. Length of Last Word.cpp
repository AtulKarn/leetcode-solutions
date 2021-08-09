class Solution {
public:
    int lengthOfLastWord(string s) {
        if (s.length()==0)
            return 0;
        if (s.length()==1 && s[0]!=' ')
            return 1;
        int j=0;
        for(int i=s.length()-1;i>=0;i--){
            if (s[i]!=' '){
                while(i>=0 && s[i]!=' '){
                    j++;
                    i--;
                }
                break;
            }  
        }
        return j;
        
    }
};
