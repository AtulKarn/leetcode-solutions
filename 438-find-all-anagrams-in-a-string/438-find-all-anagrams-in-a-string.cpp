class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int lenp = p.size(), lens = s.size();
        vector<int> ans;
        if (lenp>lens)
            return ans;
        vector<int> vp(26, 0);
        for(char c:p){
            vp[c-'a']++;
        }
        vector<int> vs(26, 0);
        for(int i=0;i<lenp;i++){
            vs[s[i]-'a']++;
        }
        if (vs==vp)
            ans.push_back(0);
        for(int i=1;i<lens-lenp+1;i++){
            vs[s[i-1]-'a']--;
            vs[s[i+lenp-1]-'a']++;
            if(vs==vp){
                ans.push_back(i);
            }
        }
        return ans;
    }
};