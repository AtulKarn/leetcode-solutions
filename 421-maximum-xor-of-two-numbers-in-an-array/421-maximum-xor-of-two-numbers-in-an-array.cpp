class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
        int currmax=0, mask = 0;
        unordered_set<int> st;
        for(int i=31;i>=0;i--){
            mask = mask | (1 << i);
            st.clear();
            for(int j:nums){
                st.insert(mask & j);
            }
            int candidate = currmax | (1<<i);
            for(int prefix: st){
                if (st.find(prefix^candidate)!=st.end()){
                    currmax = candidate;
                    break;
                }
            }
        }
        return currmax;
    }
};