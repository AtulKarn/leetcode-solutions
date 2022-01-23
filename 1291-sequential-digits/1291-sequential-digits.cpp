class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        int lnum=0, hnum=0;
        int lowtemp = low, hightemp=high;
        while(lowtemp!=0){
            lnum++;
            lowtemp/=10;
        }
        while(hightemp!=0){
            hnum++;
            hightemp/=10;
        }
        vector<int> ans;
        for(int i=lnum;i<=hnum;i++){
            for(int j=1;j<=10-i;j++){
                int temp=0;
                for(int k=0;k<i;k++){
                    temp = temp*10 + (j+k);
                }
                if (temp>=low && temp<=high)
                    ans.push_back(temp);
            }
        }
        return ans;
    }
};