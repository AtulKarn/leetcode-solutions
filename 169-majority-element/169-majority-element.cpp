class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int i:nums){
            if (mp.find(i)==mp.end()){
                mp[i] = 1;
            }
            else
                mp[i]++;
        }
        int max=INT_MIN, ele;
        for(auto i:mp){
            if (i.second>max){
                max = i.second;
                ele = i.first;
            }
        }
        return ele;
    }
};