class Solution {
public:
    int titleToNumber(string columnTitle) {
        int col = 0, pow=1;
        for(int i=columnTitle.size()-1;i>=0;i--){
            col += (columnTitle[i]-'A'+1)*pow;
            if (i) pow *= 26;
        }
        return col;
    }
};