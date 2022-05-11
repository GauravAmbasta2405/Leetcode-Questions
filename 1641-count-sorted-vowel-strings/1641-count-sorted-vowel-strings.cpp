class Solution {
    
    int dfs(int n, int i, vector<vector<int>>& memo) {
        if(n == 0) return 1;
        if(memo[n][i] != -1) return memo[n][i];
        int ret = 0;
        for(int j = i; j < 5; j++) {
            ret += dfs(n-1, j, memo);
        }
        
        return memo[n][i] = ret;
        
    }
    
public:
    int countVowelStrings(int n) {
        vector<vector<int>> memo(n+1, vector<int>(5, -1));
        return dfs(n, 0, memo);
    }
};