class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int current_max=INT_MIN, new_max=0;
        for(int i=0;i<nums.size();i++){
            new_max=new_max+nums[i];
            if(current_max<new_max)
                current_max=new_max;
            if(new_max<0)
                new_max=0;
        }
        return current_max;
    }
};
