#include <cstring>
const int N = 500;
bool vis[N];
bool anc[N];  

bool  dfs(int pos, vector<vector<int>> connections) {
    vis[pos] = true;
    anc[pos] = true;
    for(int i=0;i<connections[pos].size();i++){
        int x = connections[pos][i];
        if(vis[x] && anc[x]){
          return true;
          
        }
        else if(!vis[x] && dfs(x, connections)){
            return true;
        }
        
     
       
    }
     anc[pos] = false;
    return false;
}

bool solution(vector<vector<int>> connections) {

memset(vis, false, connections.size());
memset(anc , false, connections.size());
for(int i=0; i<connections.size(); i++){
    if(!vis[i] && dfs(i, connections) ) return true;
}
return false;

}  
