class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int count=0;
        for(int i=0;i<n-count;i++){
            if (nums[i]==0){
                for(int j=i;j<n-count-1;j++){
                    swap(nums[j], nums[j+1]);
                }
                count++;
                i--;
            }
            
        }
        
        //This approach works but changes the order of elements, so gives WA
        // int left = 0, right = n-1;
        // while(nums[right]==0)
        //     right--;
        // while(left<right){
        //     if (nums[left]==0){
        //         swap(nums[left], nums[right]);
        //         left++;
        //         while(nums[right]==0)
        //             right--;
        //     }
        //     else
        //         left++;
        // }
    }
};