//An enum is a special type that represents a group of constants (unchangeable values).

#include <iostream>
using namespace std;
enum level{
    LOW,
    MEDIUM,
    HIGH
};
int main(){

    enum level myVar = HIGH;
    cout << myVar;








    return 0;
}