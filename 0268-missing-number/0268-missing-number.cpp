class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // int sum = nums.size()*(nums.size()+1)/2;
        // for(int i:nums){
        //     sum -= i;
        // }
        // return sum;
        int xr=nums.size();
        for(int i=0;i<nums.size();i++){
            xr = xr ^ i ^ nums[i];
        }
        return xr;
    }
};