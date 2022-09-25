#include <iostream>
#include<vector>
#include <unordered_map>
#include <cmath>
using namespace std;
int main() {
    int t,n;

    cin>>t;

    while(t--){
        cin>>n;
        vector<long long> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        long long result = 0;
        unordered_map<int,bool>visited;
        long long pairs= 0;
        int k = log2(1e9);
        for(int i=k; i>=0; i--){
            int bitmask = 1<<i;
            for(int j=0; j<n; j++){
                if(visited[j]) continue;
                if(v[j]&bitmask){
                    pairs++;
                    visited[j]=true;
                }
            }
            result += ((pairs*(pairs-1))/2);
            pairs = 0;
        }

        cout<< result <<endl;
    }
    return 0;
}
