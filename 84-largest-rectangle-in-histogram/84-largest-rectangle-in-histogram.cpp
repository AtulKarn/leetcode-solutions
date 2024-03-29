class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        if (heights.size()==0)
            return 0;
        
        int n = heights.size();
        vector<int> lessFromLeft(n, 0);
        vector<int> lessFromRight(n, 0);
        lessFromRight[n-1] = n;
        lessFromLeft[0] = -1;
        
        for(int i = 1;i<n;i++){
            int p = i-1;
            while(p>=0 && heights[p]>=heights[i]){
                p = lessFromLeft[p];
            }
            lessFromLeft[i] = p;
        }
        
        for(int i = n-2;i>=0;i--){
            int p = i+1;
            while(p<n && heights[p]>=heights[i]){
                p = lessFromRight[p];
            }
            lessFromRight[i] = p;
        }
        
        int maxArea = 0;
        for(int i=0;i<n;i++){
            maxArea = max(maxArea, heights[i]*(lessFromRight[i] - lessFromLeft[i]-1));
        }
        return maxArea;
    }
};