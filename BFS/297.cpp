#include <bits/stdc++.h>
using namespace std;

int G[21][21], used[21], n,m;

int main() {
    cin>>n>>m;
    for (int k=1; k<=m; ++k) {
        int u,v; cin>>u>>v;
        G[v][u] = G[u][v] = 1;
    }
    int s,f; cin>>s>>f;
    queue <int>  Q;
    Q.push(s); used[s] = 1;
    
    while (!Q.empty()){
        //pirveli elementi amoReba
        int v = Q.front(); Q.pop();
        for (int k=1; k<=n; k++)
            if (G[v][k]==1)
                if (used[k]==0){
                    Q.push(k);
                    used[k]=used[v]+1;
                }
    }
    
    cout << used[f] - 1;
   
    return 0;
}