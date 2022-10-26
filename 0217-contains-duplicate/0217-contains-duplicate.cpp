class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, bool> mp;
        for(int i:nums){
            if (mp.find(i)!=mp.end()){
                return true;
            }
            else{
                mp[i] = true;
            }
        }
        return false;
    }
};