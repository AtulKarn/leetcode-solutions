class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        for(int i:nums){
            int temp = abs(i) - 1;
            if (nums[temp]>0){
                nums[temp] *= -1;
            }
        }
        for(int i=0;i<nums.size();i++){
            if (nums[i]>0)
                ans.push_back(i+1);
        }
        return ans;
    }
};