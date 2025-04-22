#include <iostream>
using namespace std;
int G[21][21], used[21]; // * * * * * * * * * * * * * * *
int n, m, v;
int cnt = 0;
void DFS(int x){ // romel wveroshic vushvebt
    
    used[x] = 1;
    cnt++;
    // G grafis x striqonshi x-is kavshirebia
    for (int k = 1; k<=n; ++k){
        if (G[x][k] == 1)
            if(used[k] == 0)
                    DFS(k); // k-shi klonis gashveba
    }
    
}

int main(){

    cin >> n >> m >> v;
    //grafis shemotana
    for(int i = 1; i<=m; ++i){
        int p,q;
        cin >> p >> q;
        G[p][q] = G[q][p] = 1;
    }
    
    DFS(v);
    cout << cnt;


    return 0;
}