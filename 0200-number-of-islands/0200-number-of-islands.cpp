class Solution {
public:
    void DFS(int i, int j, int r, int c, vector<vector<char>>& grid){
        if(i<0 || i>= r || j<0 || j>= c || grid[i][j] == '0')
            return;
        grid[i][j] = '0';
        
        DFS(i-1, j, r, c, grid);
        DFS(i+1, j, r, c, grid);
        DFS(i, j-1, r, c, grid);
        DFS(i, j+1, r, c, grid);
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int islandCount = 0;
        int r = grid.size();
        int c = grid[0].size();
        
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                if(grid[i][j] == '1'){
                    islandCount++;
                    DFS(i, j, r, c, grid);
                }
            }
        }
        return islandCount;
    }
};