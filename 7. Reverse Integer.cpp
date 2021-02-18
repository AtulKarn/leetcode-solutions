class Solution {
public:
    int reverse(int x) {
        int a=0, sign=1;
    if (x<0)
    {
        sign=-1;
        if (INT_MAX/-1 > x)
        {
            cout<<0;
            return 0;
        }
        else
        {
            x*=-1;
        }
        
    }
    while (x!=0)
    {
        int rem=x%10;
        if((INT_MAX/10)<a)
        {
            a=0;
            break;
        }
        else
        {
            a=a*10+rem;
        }
        x = x/10;
   }
   a=a*sign;
        return a;
        
    }
};
