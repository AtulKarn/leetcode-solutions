class Solution {
public:
    unordered_map<int, long long int> memo;
    long long mostPoints(vector<vector<int>>& questions) {
        return sumPoints(questions, 0);
    }
    long long sumPoints(vector<vector<int>>& questions, int left){
        if (left>=questions.size()) return 0;
        if (memo.find(left)!=memo.end())
            return memo[left];
        long long takeAns = questions[left][0]+sumPoints(questions, left+questions[left][1]+1);
        long long skipAns = sumPoints(questions, left+1);
        memo[left] = max(takeAns, skipAns);
        return memo[left];
    }
};