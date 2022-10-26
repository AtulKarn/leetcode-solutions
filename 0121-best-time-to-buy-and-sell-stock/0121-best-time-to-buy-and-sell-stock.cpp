class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if (n==1)
            return 0;
        int maxPrice = INT_MIN;
        int profit = INT_MIN;
        for(int i=n-2;i>=0;i--){
            maxPrice = max(maxPrice, prices[i+1]);
            profit = max(profit, maxPrice - prices[i]);
        }
        return profit>0?profit:0;
    }
};