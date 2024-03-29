class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int sum=0, curr=0;
        for(int i=2;i<nums.size();i++){
            if (nums[i]-nums[i-1] == nums[i-1]-nums[i-2]){
                curr++;
                sum+=curr;
            }
            else
                curr=0;
        }
        return sum;
    }
};