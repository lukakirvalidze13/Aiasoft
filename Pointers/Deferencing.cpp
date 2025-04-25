/*In the example from the previous page, we used the pointer variable to get the memory address of a variable
(used together with the & reference operator). However, 
you can also use the pointer to get the value of the variable, by using the * operator (the dereference operator):
*/

#include <iostream>
using namespace std;
int main(){
    string car = "BMW X5 2025"; // variable declaration
    string* ptr = &car; //Pointer declaration

    cout << ptr << endl; // Reference: Output the memory address of car with the pointer (0x6dfed4)

    cout << *ptr << endl; // Dereference: Output the value of food with the pointer (BMW X5 2025)




    return 0;
}