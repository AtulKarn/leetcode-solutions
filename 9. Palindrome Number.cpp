class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0)
            return false;
        int y = x, z=0, temp, a=x%10, count = 0;
        while(x)
        {
            
            temp = x%10;
            if (z>INT_MAX/10)
            {
                count = pow(10,count);
                z = z%count;
                if ((temp == a) && (z == y%10))
                    return true;
                else 
                    return false;
            }
            z = z*10 + temp;
            x = x/10;
            count++;
        }
        if (y == z)
            return true;
        else
            return false;
    }
};
