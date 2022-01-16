class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> ans;
        for(int i=0;i<s.size();i+=k){
            string temp = "";
            for(int j=0;j<k;j++){
                if (i+j>=s.size())
                    temp += fill;
                else
                    temp += s[i+j];
            }
            ans.push_back(temp);
        }
        return ans;
    }
};