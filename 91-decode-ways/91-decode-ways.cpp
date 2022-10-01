class Solution {
public:
    int dp[101][101][2];
    int helper(int st , int pi , int i , string s)
    {
        if(st and s.size() == i)return 0;
        if(i == s.size()) return 1;
        if(dp[pi][i][st]!=-1)return dp[pi][i][st]; 
        if(!st)
        {
            if(s[i] == '0')
                return 0;
            return dp[pi][i][st] = helper(1 , i , i+1 , s) + helper(0 , i , i+1 , s);
        }
        else
        {
            if(s[pi]>'2' or (s[pi] > '1' and s[i] >'6'))
            {
                return dp[pi][i][st] = 0;
            }
            else
            {
                    return dp[pi][i][st] = helper(0 , i , i + 1 , s);
            }
        }
    }
    int numDecodings(string s) {
        memset(dp , -1 , sizeof dp);
        return helper(0 , 0 , 0 , s);
    }
};