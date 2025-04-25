#include <iostream>
using namespace std;
struct point {
    int x, y;


};

struct person{
    string name;
    int age;
    bool married;
};

struct circle{
    int rad;
    point center;
};


int main(){

    point a,b;  //a-s aqvs ori veli ori wvero
    person q;
    q = {"Guram", 25, 1};
    q.age++;
    cout <<q.age << endl;
    a.x = 3;
    a.y = 7;
    b = {12,17};
    
    cout << b.x << ' '<< b.y << endl;
    
    circle cl;
    
    cl.rad = 25;
    cl.center.x = 7;
    cl.center.y = 10;
    


    return 0;
}