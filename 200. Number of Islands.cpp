class Solution {
    void markIsland(vector<vector<char>>& grid,int i,int j,int r,int c){
        if(i<0||i>=r||j<0||j>=c)
            return;
        if(grid[i][j]=='1'){
            grid[i][j]='2';
            markIsland(grid,i+1,j,r,c);
            markIsland(grid,i-1,j,r,c);
            markIsland(grid,i,j+1,r,c);
            markIsland(grid,i,j-1,r,c);           
        }
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int r,c,num=0;
        r=grid.size();
        if(r==0)
            return 0;
        c=grid[0].size();
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++){
                if(grid[i][j]=='1'){
                    markIsland(grid,i,j,r,c);
                    num++;
                }
            }
        return num;
    }
};