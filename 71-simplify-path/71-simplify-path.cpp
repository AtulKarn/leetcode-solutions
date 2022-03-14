class Solution {
public:
    string simplifyPath(string path) {
        string ans, temp;
        vector<string> stk;
        stringstream ss(path);
        while(getline(ss, temp, '/')){
            if (temp == "" or temp == ".")
                continue;
            if (temp != "..") 
                stk.push_back(temp);
            else if (!stk.empty()) 
                stk.pop_back();
        }
        for(auto str: stk)
            ans += "/" + str;
        return ans.empty()?"/":ans;
    }
};