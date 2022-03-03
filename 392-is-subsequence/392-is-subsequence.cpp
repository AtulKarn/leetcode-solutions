class Solution {
public:
    bool isSubsequence(string s, string t) {
        if (s.size()>t.size())
            return false;
        if (s=="" && t=="")
            return true;
        int poss=0;
        bool flag=false;
        for(int i=0;i<t.size();i++){
            if (t[i] == s[poss]){
                poss++;
            }
            if (poss==s.size()){
                flag=true;
                break;
            }
        }
        return flag;
    }
};