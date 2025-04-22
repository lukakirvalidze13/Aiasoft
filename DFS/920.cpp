#include <iostream>

using namespace std;

int g[21][21];
int used[21]; 
int n, m;

void dfs(int v) {
    used[v] = 1;
    for (int i = 1; i <= n; ++i) { 
        if (g[v][i] == 1 && used[i] == 0) {
            dfs(i);
        }
    }
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        g[u][v] = 1;
        g[v][u] = 1;
    }

    int components = 0;

    for (int i = 1; i <= n; ++i) {
        if (used[i] == 0) {
            dfs(i);
            components++;
        }
    }

    if (components <= 1) {
        cout << 0 << endl; 
    } else { 
        cout << components - 1 << endl; 
    }

    return 0;
}