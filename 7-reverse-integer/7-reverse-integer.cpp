class Solution {
public:
    int reverse(int n) {
        
        int ans = 0;
        while(n)
        {
            int rem = n%10;
           //
            if((ans > INT_MAX/10) || (ans < INT_MIN/10))
            {
                return 0;
            }
           ans = ans*10 + rem;
            n/=10;
        }
        return ans;
        
    }
};