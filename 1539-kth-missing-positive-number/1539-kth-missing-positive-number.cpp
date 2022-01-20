class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        if (arr.size()==1){
            return k<arr[0]?k:k+1;
        }
        int num = arr[0] - 1;
        if (k<=num)
            return k;
        int ans = 0;
        int i;
        for(i=1;i<arr.size();i++){
            if (num+arr[i]-arr[i-1]-1>=k){
                ans = arr[i-1] + k - num;
                break;
            }
            else
                num += arr[i] - arr[i-1] - 1;
        }
        if (ans==0)
            ans = arr[i-1] + k - num;
        return ans;
    }
};