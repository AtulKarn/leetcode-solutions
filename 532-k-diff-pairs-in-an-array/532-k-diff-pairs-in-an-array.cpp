class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int count=0;
        unordered_map<int, int> mp;
        for(int i:nums)
            mp[i]++;
        for(auto i:mp){
            if ((k==0 && i.second>1) || (k>0 && mp.find(i.first+k)!=mp.end()))
                count++;
        }
        return count;
    }
};