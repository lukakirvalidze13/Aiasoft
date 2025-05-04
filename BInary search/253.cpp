#include <bits/stdc++.h>

using namespace std;

int main() {
    
    long long n,w,h;
    cin >> n >> w >> h;
    long long L = 1, R = n * max(w,h);
    
    while(L<R){
        long long  m = (L + R) / 2;
        if((m/w) * (m/h) < n) L = m + 1;
        else R = m;
    }
    
    cout << L;


    return 0;
}