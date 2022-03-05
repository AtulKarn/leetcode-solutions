class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        vector<int> dp(10001, 0);
        for(int i:nums){
            dp[i] += i;
        }
        int del=0, skip=0;
        for(int i=0;i<10001;i++){
            int deli = skip + dp[i];
            int skipi = max(del, skip);
            del = deli;
            skip = skipi;
        }
        return max(del, skip);
    }
};