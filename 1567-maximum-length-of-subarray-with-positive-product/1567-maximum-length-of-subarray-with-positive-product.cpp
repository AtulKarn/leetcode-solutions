class Solution {
public:
    int getMaxLen(vector<int>& nums) {
        int poscount=0, negcount=0, ans=0;
        for(int i:nums){
            if (i==0){
                poscount=0;
                negcount=0;
            }
            else if (i>0){
                poscount++;
                negcount = negcount==0?0:(negcount+1);
            }
            else{
                int tmp = poscount;
                poscount = negcount==0?0:(negcount+1);
                negcount = tmp+1;
            }
            ans = max(ans, poscount);
        }
        return ans;
    }
};