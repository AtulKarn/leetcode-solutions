class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int lastOne = -2;
        int i;
        for(i=0;i<flowerbed.size()-1;i++){
            if (flowerbed[i]==1)
                lastOne = i;
            if (n==0)
                return true;
            if (flowerbed[i] == 0 && i - lastOne > 1 && flowerbed[i+1]!=1){
                n--;
                lastOne = i;
            }
        }
        if (n==1 && i-lastOne>1 && flowerbed[i]==0)
            return true;
        return n==0;
    }
};