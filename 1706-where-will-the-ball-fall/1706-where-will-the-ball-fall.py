class Solution:
    def findBall(self, grid: List[List[int]]) -> List[int]:
        visit = dict()
        ROWS, COLS = len(grid), len(grid[0])
        result = [-1 for _ in range(COLS)]
        
        def dfs(r, c, startPos):
            if c < 0 or c == COLS:
                return
            if r == ROWS:
                result[startPos] = c
                return
            if (r, c) in visit:
                result[startPos] = result[visit[(r, c)]]
                return
            visit[(r, c)] = startPos
            if grid[r][c] == 1 and (c == COLS-1 or grid[r][c+1] == -1):
                return
            if grid[r][c] == -1 and (c == 0 or grid[r][c-1] == 1):
                return
            if grid[r][c] == 1:
                dfs(r+1, c+1, startPos)
            else:
                dfs(r+1, c-1, startPos)
                
        for c in range(COLS):
            dfs(0, c, c)
        return result