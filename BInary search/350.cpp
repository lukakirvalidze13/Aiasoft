/*
input:
4 8
1 8 3 2
output:
YES

input:
6 1
2 2 5 3 9 2
output:
NO
*/

#include <bits/stdc++.h>
using namespace std;
int main(){


    
    int n,x;
    cin >> n >> x;
    vector <int> a(n);
    for(int i = 0; i<n; ++i){
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    int L = 0, R = n - 1;
    while(L<R){
        int m = (L + R) / 2;
        if(a[m] < x) L = m+1;
        else R=m;
    }
    if(a[L] == x)
    cout << "YES";
    else cout << "NO";

    


    return 0;
}