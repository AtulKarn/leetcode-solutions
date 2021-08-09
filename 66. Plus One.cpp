class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size = digits.size()-1;
        if (digits[size]==9){
            while(size>=0 && digits[size]==9){
                digits[size] = 0;
                size--;
            }
            if (size<0)
                digits.insert(digits.begin(), 1);
            else
                digits[size]++;
        }
        else
            digits[digits.size()-1]++;
        return digits;
    }
};
