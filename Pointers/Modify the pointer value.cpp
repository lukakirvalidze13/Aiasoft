#include <iostream>
using namespace std;
int main(){
    string car = "BMW X5 2026";
    string car1 = "BMW X6 2025";
    string* ptr = &car;
    string* ptr1 = &car1;
    cout << car;
    cout << endl;
    cout << &car << endl; // Output the memory address of car (0x6dfed4kdmskdm)
    cout << &car1 << endl; //Output the memory address of car1

    *ptr = "BMW X5 2025";
    cout << *ptr;
    cout << endl;
    cout << &car;









    return 0;
}