class Solution {
public:
    bool detectCapitalUse(string word) {
        int capital = 0;
        for(char i:word){
            if (i>='A' && i<='Z')
                capital++;
        }
        if (capital==0 || capital == word.size())
            return true;
        else if (capital==1 && word[0]>='A' && word[0]<='Z')
            return true;
        else
            return false;
    }
};