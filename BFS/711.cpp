#include <iostream>
#include <queue>
using namespace std;

int up (int x){
    if(x>= 9000) return x; 
    x+= 1000;
    return x;
}

int down(int x){ 
    if(x%10==1) return x;
    x-=1;
    return x;
}

int left(int x){
    return (x%1000) * 10 + x / 1000;
}

int right(int x){
    return x%10*1000 + x / 10;
}






int main(){



    //cout << up(1234) << " " << down(1234) << " " << left(1234) << ' ' << right(1234) << endl;

    queue <int> q;
    vector <int> used(10000,0);
    int n, m;
    cin >> n >> m;

    q.push(n); used[n] = 1;

    while (!q.empty()){
        int v = q.front(); q.pop();
        
        int u = up(v), d = down(v), l = left(v), r = right(v);
        if(used[u] == 0){
            q.push(u);
            used[u] = used[v] + 1;
        }
        if(used[d] == 0){
            q.push(d);
            used[d] = used[v] + 1;
        }
        if(used[l] == 0){
            q.push(l);
            used[l] = used[v] + 1;
        }
        if(used[r] == 0){
            q.push(r);
            used[r] = used[v] + 1;
        }


    }

    cout << used[m] - 1;







    return 0;
}