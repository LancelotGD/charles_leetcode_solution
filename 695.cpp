class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int row=grid.size(),col=grid[0].size(),max_size=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                max_size=max(max_size,dfs(grid,i,j,row,col));
            }
        }
    return max_size;
    }
    int dfs(vector<vector<int>>& grid,int row,int col,int row_size,int col_size){
        if(row<0||col<0||row>=row_size||col>=col_size||grid[row][col]==0){
            return 0;
        }
        else{
            grid[row][col]=0;
            return 1+dfs(grid,row+1,col,row_size,col_size)+dfs(grid,row,col+1,row_size,col_size)+dfs(grid,row-1,col,row_size,col_size)+dfs(grid,row,col-1,row_size,col_size);
        }
    }

};
