#include <iostream>
using namespace std;
enum level{
    LOW = 69,
    MEDIUM,
    HIGH
};
int main(){
    enum level myVar = HIGH;

    switch(myVar){
        case 69:
        cout << "Low level";
        break;
        case 70:
        cout << "Medium level";
        break;
        case 71:
        cout << "High level";
        break;
    }




    return 0;
}