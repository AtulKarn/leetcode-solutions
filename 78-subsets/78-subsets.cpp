class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> sub;
        vector<vector<int>> ans;
        subset(ans, sub, 0, nums);
        return ans;
    }
private:
    void subset(vector<vector<int>>& ans, vector<int>& sub, int n, vector<int>& nums){
        ans.push_back(sub);
        for(int i=n;i<nums.size();i++){
            sub.push_back(nums[i]);
            subset(ans, sub, i+1, nums);
            sub.pop_back();
        }
    }
};