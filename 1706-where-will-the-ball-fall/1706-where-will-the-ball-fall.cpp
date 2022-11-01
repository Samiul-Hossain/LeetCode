class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        vector<int> ret;
        int r = grid.size();
        int c = grid[0].size();
        for(int j=0; j<c; j++){
            int x = 0;
            int y = j;
            while(1){
                if(x==r){
                    ret.push_back(y);
                    break;
                }
                if(grid[x][y] == 1){
                    if(y+1 == c || grid[x][y+1] == -1){
                        ret.push_back(-1);
                        break;
                    }
                    x = x+1;
                    y = y+1;
                    continue;
                }
                else{
                    if(y-1 < 0 || grid[x][y-1] == 1){
                        ret.push_back(-1);
                        break;
                    }
                    x = x+1;
                    y = y-1;
                    continue;
                }
            }
        }
        return ret;
    }
};