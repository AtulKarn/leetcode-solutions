class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size()>s2.size())
            return false;
        vector<int> s1map(26, 0);
        vector<int> s2map(26, 0);
        for(char i:s1)
            s1map[i-'a']++;
        int lens1 = s1.size(), lens2 = s2.size();
        for(int i=0;i<lens1;i++){
            s2map[s2[i]-'a']++;
        }
        if (s1map == s2map)
            return true;
        for(int i=1;i<lens2-lens1+1;i++){
            s2map[s2[i-1]-'a']--;
            s2map[s2[i+lens1-1]-'a']++;
            if (s1map==s2map)
                return true;
        }
        return false;
    }
};