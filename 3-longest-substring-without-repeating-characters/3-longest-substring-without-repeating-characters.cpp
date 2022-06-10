class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mp;
        int maxm = 0;
        for(int i=0, j=0;i<s.size();i++){
            if (mp.find(s[i])!=mp.end()){
                j = max(j, mp[s[i]]+1);
            }
            mp[s[i]] = i;
            maxm = max(maxm, i-j+1);
        }
        return maxm;
    }
};