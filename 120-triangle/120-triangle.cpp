class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        vector<int> minlen(triangle.back()); //last element of triangle is the last row, assign it to min array
        for(int level = n-2;level>=0;level--){
            for(int i=0;i<=level;i++){
                minlen[i] = min(minlen[i], minlen[i+1]) + triangle[level][i];
            }
        }
        return minlen[0];
    }
};