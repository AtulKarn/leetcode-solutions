class Solution {
public:
    string addBinary(string a, string b) {
        if (a=="")
            return b;
        if (b=="")
            return a;
        string ans;
        int sum=0, len_a=a.length()-1, len_b=b.length()-1;
        while(len_a>=0 || len_b>=0 || sum==1){
            sum += len_a>=0?a[len_a]-'0':0;
            sum += len_b>=0?b[len_b]-'0':0;
            ans = char(sum%2+'0')+ans;
            sum/=2;
            len_a--;
            len_b--;
        }
        return ans;
    }
};
