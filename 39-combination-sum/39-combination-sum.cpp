class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<vector<int>>> sums(target+1);
        sums[0].push_back(vector<int>(0));
        for(int i:candidates){
            if (i<=target)
                sums[i].push_back(vector<int>(1,i));
        }
        for(int i=1;i<=target;i++){
            for(int j=0;j<candidates.size();j++){
                if (i+candidates[j]<=target && sums[i]!=sums[0]){
                    for(auto arr:sums[i]){
                        arr.push_back(candidates[j]);
                        sums[i+candidates[j]].push_back(arr);
                    }
                }
            }
        }
        set<multiset<int>> st;
        for(auto i:sums[target]){
            st.insert(multiset<int>(i.begin(), i.end()));
        }
        vector<vector<int>> ans;
        for(auto i:st){
            ans.push_back(vector<int>(i.begin(), i.end()));
        }
        return ans;
    }
};