class Solution {
	int ci[4] = {-1,0,1,0};
	int cj[4] = {0,1,0,-1};
    queue<int> qi;
    queue<int> qj;
public:
    bool canMove(int i, int j, int m, int n){
        if(i<n && j<m && i>=0 && j>=0) return true;
        return false;
    }
    
   /*
   Solution one with DFS 
   void dfs(vector<vector<char>>& grid,int i,int j,int  n,int m){
       
      
        // put like visited
    
        grid[i][j] = '0';
        
        for(int k=0; k<4;k++){
              int xi= ci[k]+i;
              int xj= cj[k]+j;
        
            if(canMove(xi,xj,m,n) && !(grid[xi][xj]=='0' ) ){
              
                dfs(grid,xi,xj, n, m);
            }
        }
     
     return;
     

    }*/
    /*sol 2 with bfs**/ 
    void bfs(vector<vector<char>>& grid,int i,int j,int  n,int m){
        grid[i][j] = '0';
        qi.push(i);
        qj.push(j);
        while(!qi.empty()){
             i = qi.front();
             qi.pop();
             j = qj.front();
             qj.pop();
            
            for(int k =0; k<4;k++){
                int xi = i+ci[k];
                int xj = j+cj[k];
                //if(!canMove(xi,xj,m,n)) continue;
                
                if(canMove(xi,xj,m,n) && (grid[xi][xj] != '0')){
                      qi.push(xi);
                      qj.push(xj);
                     grid[xi][xj] = '0';
                }
              
                
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int res = 0;
  
        for(int i=0; i<n ; i++){
            for (int j=0; j<m; j++){
              if(grid[i][j] == '1'){
                  
                bfs(grid, i, j, n, m);
                  res++;
                    
              }
        
                    
            }
        }
        
        return res;
    }
 
};