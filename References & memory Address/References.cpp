//A reference variable is a "reference" to an existing variable, and it is created with the & operator:

#include <iostream>
using namespace std;
int main(){

    string food = "Pizza";
    string &meal = food;
    cout << food << endl << meal;

    







    return 0;
}