class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int n = values.size();
        int maxRight = INT_MIN, maxScore = INT_MIN;
        for(int i=n-2;i>=0;i--){
            maxRight = max(maxRight, values[i+1]-(i+1));
            maxScore = max(maxScore, values[i]+i+maxRight);
        }
        return maxScore;
    }
};