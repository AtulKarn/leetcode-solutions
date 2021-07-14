class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if (nums.size()==0)
            return 0;
        int i=0, k=nums.size();
        //one method
        // for (int i=0;i<nums.size();i++){
        //     if (nums[i] != val){
        //         nums[k++] = nums[i];
        //     }
        // }
        
        //another method
        while(i<k){
            if(nums[i] == val)
                nums[i]=nums[--k];
            else
                i++;
        }
        return k;
    }
};
