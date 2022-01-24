class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //Boyer-Moore Voting Algorithm
        
        int count = 1, candidate=nums[0], n = nums.size();
        for(int i=1;i<n;i++){
            if (count==0)
                candidate = nums[i];
            count += (nums[i]==candidate)?1:-1;
        }
        return candidate;
        
        // unordered_map<int, int> mp;
        // for(int i:nums){
        //     if (mp.find(i)==mp.end()){
        //         mp[i] = 1;
        //     }
        //     else
        //         mp[i]++;
        // }
        // int max=INT_MIN, ele;
        // for(auto i:mp){
        //     if (i.second>max){
        //         max = i.second;
        //         ele = i.first;
        //     }
        // }
        // return ele;
    }
};