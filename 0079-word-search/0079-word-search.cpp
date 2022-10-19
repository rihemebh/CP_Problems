class Solution {
public:
    bool vis[6][6];
int ci[4] = {0,1,0,-1};
int cj[4] = {1,0,-1,0};
  
    bool canMove(int i, int j, int n, int m){
        return i>=0 && j>=0 && j<m && i<n;
    }
    bool dfs(vector<vector<char>>& board, int i, int j, int n, int m, string word, string w){ 
        if(!vis[i][j]){
            w+= board[i][j];
            if( w == word ) return true;
            if(word.substr(0, w.size()) != w) return false;
            
            vis[i][j] = true;
            for(int k=0;k<4; k++){
                int xi=i+ci[k];
                int xj=j+cj[k];
                
             if(canMove(xi,xj,n,m) && !vis[xi][xj]&& dfs(board,xi,xj,n,m, word,w)){
                    
                    return true;
                }
               
            }
        }
        
   vis[i][j] =false;
        return false;
        
    }
    bool exist(vector<vector<char>>& board, string word) {
        memset(vis, false, sizeof(vis));
        int n = board.size();
        int m = board[0].size();
        
        for(int i=0; i<n; i++){
               for(int j=0; j<m; j++){
                   memset(vis, false, sizeof(vis));
                   
                   if(board[i][j] == word[0])
                   {if(dfs(board,i,j,n,m,word, ""))
                       return true;
                   }
            
        }
        
        }
        return false;
        
    }
};