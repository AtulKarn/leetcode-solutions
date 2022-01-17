class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> mp1;
        unordered_map<string, char> mp2;
        vector<string> v;
        string temp = "";
        int wordCount=0;
        for(int i=0;i<s.size();i++){
            if (s[i]==' '){
                v.push_back(temp);
                temp = "";
            }
            else
                temp += s[i];
            
            
            //Another  approach (needs work) - Check for each word in the loop. 
            //Last word will not be checked so incoplete approach 
            
            // if (wordCount>=pattern.size())
            //     return false;
            // if (s[i] == ' '){
            //     if (mp.find(pattern[wordCount])!=mp.end()){
            //         if (mp[pattern[i]]!=temp)
            //             return false;
            //         else{
            //             wordCount++;
            //             temp = "";
            //         }
            //     }
            //     else{
            //         mp[pattern[i]] = temp;
            //         wordCount++;
            //     }
            // }
            // else
            //     temp += s[i];
        }
        
        v.push_back(temp);
        if (v.size() != pattern.size())
            return false;
        else{
            for(int i=0;i<v.size();i++){
                if (mp1.find(pattern[i])!=mp1.end() || mp2.find(v[i])!=mp2.end()){
                    if (mp1[pattern[i]]!=v[i] || mp2[v[i]]!=pattern[i])
                        return false;
                }
                else{
                    mp1[pattern[i]] = v[i];
                    mp2[v[i]] = pattern[i];
                }
            }
        }
        return true;
    }
};