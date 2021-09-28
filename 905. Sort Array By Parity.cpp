class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int right=nums.size()-1, left=0;
        while(left<right){
            if (nums[left]%2==1 && nums[right]%2==0){
                nums[left] = nums[left] + nums[right];
                nums[right] = nums[left] - nums[right];
                nums[left] = nums[left] - nums[right];
            }
            if (nums[left]%2==0)
                left++;
            if (nums[right]%2==1)
                right--;
        }
        return nums;
    }
};
