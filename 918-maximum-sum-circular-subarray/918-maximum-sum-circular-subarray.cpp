class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int current_max = nums[0], current_min = nums[0], new_min, new_max, total=0;
        for(int i:nums){
            new_max = max(new_max+i, i);
            current_max = max(new_max, current_max);
            new_min = min(new_min+i, i);
            current_min = min(new_min, current_min);
            total+=i;
        }
        return current_max>0?max(total-current_min, current_max):current_max;
    }
};