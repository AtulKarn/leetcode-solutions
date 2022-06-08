class Solution {
public:
    int removePalindromeSub(string s) {
        string a = s;
        reverse(s.begin(), s.end());
        if (s == a)
            return 1;
        else
            return 2;
    }
};