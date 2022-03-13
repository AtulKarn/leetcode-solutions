class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        stk.push(s[0]);
        for (int i=1;i<s.size();i++){
            if (stk.empty())
                stk.push(s[i]);
            else if (s[i]==')' and stk.top()=='(')
                stk.pop();
            else if (s[i]=='}' and stk.top()=='{')
                stk.pop();
            else if (s[i]==']' and stk.top()=='[')
                stk.pop();
            else
                stk.push(s[i]);
        }
        return stk.empty();
    }
};