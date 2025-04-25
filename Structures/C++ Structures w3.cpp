/*
Structures (also called structs) are a way to group several related variables into one place.
 Each variable in the structure is known as a member of the structure.
Unlike an array, a structure can contain many different data types (int, string, bool, etc.).
*/
#include <iostream>
using namespace std;
struct{
    int year;
    string model;
    string model1;
    string confirm;
}car,car1,confirmation;
int main(){

    car.year = 2025;
    car.model = "BMW";
    car1.model1 = "X5";
    confirmation.confirm = "Successfully bought";
    cout << car.year << endl << car.model << " " << car1.model1 << endl;
    cout << confirmation.confirm;


    return 0;
}