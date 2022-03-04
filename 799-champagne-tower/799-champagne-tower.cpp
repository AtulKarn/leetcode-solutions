class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        vector<vector<double>> v(102, vector<double>(102,0));
        v[0][0] = poured;
        for(int i=0;i<=query_row;i++){
            for(int j=0;j<=i;j++){
                double overflow = (v[i][j]-1.0)/2.0;
                if (overflow>0){
                    v[i+1][j] += overflow;
                    v[i+1][j+1] += overflow;
                }
            }
        }
        return min(1.0, v[query_row][query_glass]);
    }
};