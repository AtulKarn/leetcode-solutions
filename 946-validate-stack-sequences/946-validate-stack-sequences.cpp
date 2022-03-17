class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> stk;
        int n = pushed.size();
        int j=0;
        for(int i:pushed){
            stk.push(i);
            while(!stk.empty() && j<n && stk.top()==popped[j]){
                stk.pop();
                j++;
            }
        }
        return j==n;
    }
};