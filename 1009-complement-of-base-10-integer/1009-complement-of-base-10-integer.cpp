class Solution {
public:
    int bitwiseComplement(int n) {
        if (n==0)
            return 1;
        int complement=0, power = 1;
        while(n){
            int temp = n%2?0:1;
            complement += power*temp;
            power*=2;
            n/=2;
        }
        return complement;
    }
};