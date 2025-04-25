/*A pointer however, is a variable that stores the memory address as its value.
A pointer variable points to a data type (like int or string) of the same type, 
and is created with the * operator. The address of the variable you're working with is assigned to the pointer:
*/

#include <iostream>
using namespace std;
int main(){

    string food = "Xawapuri";
    string* ptr = &food;


    cout << food;
    cout << endl;
    cout << &food;
    cout << endl;
    cout << ptr;







    return 0;
}