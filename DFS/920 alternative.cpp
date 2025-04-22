#include <iostream>
#include <queue>
using namespace std;
int g[51][51], used[51];
int main(){
    int n,m;
    cin >> n >> m;
    for(int i = 1; i <= m; ++i){
        int u,v;
        cin >> u >> v;
        g[u][v] = g[v][u] = 1;
        
    }


    queue <int> q;
    int cnt = 0;
    for(int k = 1; k<=n; ++k)
        if(used[k] == 0){
            cnt++;
            q.push(k);
            used[k] = 1;
            while(!q.empty()){
                int v = q.front();
                q.pop();
                for(int i = 1; i <= n; ++i)
                    if (g[v][i] == 1)
                        if (used[i] == 0){
                            q.push(i);
                            used[i] = 1;
                        }
            }
        }


    cout << cnt - 1;



    return 0;
}