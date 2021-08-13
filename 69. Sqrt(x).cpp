class Solution {
public:
    int mySqrt(int x) {
        if (x==1)
            return 1;
        long long int left=0, right=x, mid;
        while(right-left>1){
            mid=(left+right)/2;
            if (mid*mid==x)
                return mid;
            else if (mid*mid<x){
                left=mid;
            }
            else if (mid*mid>x){
                right=mid;
            }
        }
        return left;
    }
};
