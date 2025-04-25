#include <iostream>
using namespace std;
enum level{
    LOW = 1,
    MEDIUM,
    HIGH
};
int main(){
    enum level myVar = HIGH;

    switch(myVar){
        case 1:
        cout << "Low level";
        break;
        case 2:
        cout << "Medium level";
        break;
        case 3:
        cout << "High level";
        break;
    }




    return 0;
}