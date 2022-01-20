class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1, right = 1000000000;
        while(left < right){
            int mid = (left+right)/2;
            int sum = 0;
            for(int i:piles){
                sum += ceil(1.0*i/mid);
            }
            if (sum > h)
                left = mid + 1;
            else
                right = mid;
        }
        return left;
    }
};