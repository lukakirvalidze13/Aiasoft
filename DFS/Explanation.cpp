//Imagine This Scenario:

/*
I am exploring a maze of rooms
Each room has doors to other roomes
I start in one room and my goal is to visit every room i can reach, going as deep as possible before going back and trying another door.

*/

// Translating code into a simple story


#include <iostream>
using namespace std;
int G[21][21], used[21];    // A 2D array for the graph, and a 1D array to mark visited nodes
int n,m,v;                  // n = number of nodes, m = number of edges, v = starting node;
int cnt = 0;                // counter for visited nodes

void DFS(int x){
    used[x] = 1; //Mark current note as visited
    cnt ++; //count it
    cout << "Visited: " << x << endl;

    //Loop through all possible nodes
    for(int k = 1; k<=n; ++k){
        //If there's a connection from x to k
        if(G[x][k] == 1){
            //And if K hasn't been visited yet
            if(used[k] == 0){
                DFS(k); //visit k
            }
        }
    }

}


    // G[i][j] = 1 means node is connected to node
    //Nodes = wveroebi // Edges = wiboebi

int main(){

    cin >> n >> m;

    for(int i = 0; i<m; ++m){
        int a,b;
        cin>> a >> b;
        G[a][b] = 1;
        G[b][a] = 1; //can walk both ways between a and b
    }

    cin >> v; //starting node where to begin
    DFS(v);
    cout << "total visited nodes: " << cnt << endl;

    return 0;
}