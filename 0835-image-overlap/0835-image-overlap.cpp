class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        int n = img1.size();
        int count = 0;
        for(int x=1-n;x<n;x++){
            for(int y=1-n;y<n;y++){
                int temp = 0;
                for(int i=0;i<n;i++){
                    for(int j=0;j<n;j++){
                        int row = i+x, col = j+y;
                        if ((row<0 || row>=n) || (col<0 || col>=n))
                            continue;
                        temp += img1[i+x][j+y] * img2[i][j];
                    }
                }
                count = max(count, temp);
            }
        }
        return count;
    }
};