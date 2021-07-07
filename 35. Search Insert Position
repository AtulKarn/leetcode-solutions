class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left=0, right=nums.size()-1, mid;
        if (right==0)
            return target>nums[0]?1:0;
        while (left<=right){
            mid = (left+right)/2;
            if (nums[mid]==target)
                return mid;
            else if (nums[mid]<target)
                left=mid+1;
            else
                right=mid-1;
        }
        return left;
    }
};
