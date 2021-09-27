class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        string temp;
        int i;
        unordered_set<string> st;
        for(string s:emails){
            temp = "";
            i=0;
            for(i=0;i<s.size();i++){
                if (s[i]=='+' || s[i]=='@')
                    break;
                if (s[i]=='.')
                    continue;
                temp+=s[i];
            }
            while(s[i]!='@' && i<s.size())
                i++;
            while(i<s.size())
                temp+=s[i++];
            st.insert(temp);
        }
        return st.size();
    }
};
