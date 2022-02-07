class Solution {
public:
    char findTheDifference(string s, string t) {
        int xr = 0;
        for(char c:s){
            xr ^= c;
        }
        for(char c:t){
            xr ^= c;
        }
        return (char)xr;
    }
};