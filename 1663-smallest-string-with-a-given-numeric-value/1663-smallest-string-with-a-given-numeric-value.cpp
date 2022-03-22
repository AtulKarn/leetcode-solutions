class Solution {
public:
    string getSmallestString(int n, int k) {
        string ans = "";
        for(int i=0;i<n;i++){
            ans += 'a';
        }
        k -= n;
        int i = n-1;
        while(i>=0 && k>0){
            if (k>25){
                ans[i--] += 25;
                k -= 25;
            }
            else{
                ans[i] += k;
                k=0;
            }
        }
        return ans;
    }
};