class Solution {
public:
    int sumOfSquares(int n){
        int sum=0;
        while(n){
            sum += (n%10)*(n%10);
            n /= 10;
        }
        return sum;
    }
    bool isHappy(int n) {
        // unordered_set<int> st;
        // while(n != 1){
        //     int sum = sumOfSquares(n);
        //     if (st.find(sum) == st.end()){
        //         st.insert(sum);
        //         n = sum;
        //     }
        //     else{
        //         return false;
        //     }
        // }
        // return true;
        
        int slow = n, fast = sumOfSquares(n);
        while(fast!=1 && slow!=fast){
            slow = sumOfSquares(slow);
            fast = sumOfSquares(sumOfSquares(fast));
        }
        return fast == 1;
    }
};