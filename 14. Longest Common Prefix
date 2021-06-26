class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans=strs[0];
        int s;
        for(int i=1;i<strs.size();i++){
            s=strs[i].size();
            for(int j=0;j<s;j++){
                if (ans[j]!=strs[i][j]){
                    ans.erase(j);
                    s=(s<ans.size()?s:ans.size());
                    continue;
                }
            }
            if (ans.size()>strs[i].size())
                ans.erase(strs[i].size());
            if (ans=="")
                break;
        }
        return ans;
    }
};
