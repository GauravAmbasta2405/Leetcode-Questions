class Solution {
public:
    
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) 
    {
        //if top-left corner has value 1 it means there in no path
        if(obstacleGrid[0][0]==1) return 0;
        
        //store no. of rows and columns
        int m = obstacleGrid.size(), n=obstacleGrid[0].size();
        
        //create dp and initialize it with 0
        vector<vector<int>> dp(m, vector<int> (n, 0));
        
        //base condition for bottom-up approach
        dp[0][0] = 1;
        
        //traverse through the matrix
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                //if we are at top-left corner(0,0) we don't have left(0,-1) and up(-1,0,) cell
                //so to avoid this condition we continue at 0,0
                if(i==0 && j==0) continue;
                
                //if there is no obstacle
                if(obstacleGrid[i][j]==0)
                {
                    int up=0, left=0;

                    //store top cell value
                    if(i-1 >=0)
                        up = dp[i-1][j];

                    //store left cell value
                    if(j-1 >=0)
                        left = dp[i][j-1];
                
                    //and add them for current cell to get no. of unique paths 
                    //to reach at current position
                    dp[i][j] = up + left;
                }
            }
        }
        //return dp at (m-1, n-1) that will be the no. of unique paths
        //to reach at bottom right corner
        return dp[m-1][n-1];
         
    }
};