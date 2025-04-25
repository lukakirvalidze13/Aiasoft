#include <iostream>
using namespace std;
int main(){

    pair <int, int> a,b;

    a.first = 12;
    a.second = 18;

    b = {15,34};

    pair <int, pair <int,int> > q;
    q.first = 2;
    q.second.first = 7;
    q.second.second = 12;
    

    

    return 0;
}