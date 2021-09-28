class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n=nums.size(), pos;
        for(int i=0;i<n;i++){
            pos = i+1;
            if ((i%2==0) && (nums[i]%2!=0)){
                while(pos<n-1 && nums[pos]%2!=0)
                    pos+=2;
                int temp=nums[i];
                nums[i]=nums[pos];
                nums[pos]=temp;
            }
            if ((i%2!=0) && (nums[i]%2==0)){
                while(pos<n-1 && nums[pos]%2==0)
                    pos+=2;
                int temp=nums[i];
                nums[i]=nums[pos];
                nums[pos]=temp;
            }
        }
        return nums;
    }
};
