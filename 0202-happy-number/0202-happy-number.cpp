class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> st;
        while(n != 1){
            int sum=0, temp = n;
            while(temp){
                sum += (temp%10)*(temp%10);
                temp /= 10;
            }
            if (st.find(sum) == st.end()){
                st.insert(sum);
                n = sum;
            }
            else{
                return false;
            }
        }
        return true;
    }
};