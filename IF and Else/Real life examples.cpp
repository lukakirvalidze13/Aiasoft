#include <iostream>
using namespace std;
int main(){

    int doorCode = 1337;
    if(doorCode == 1337){
        cout << "Correct code,\ndoor is now open\n";
    }else{
        cout << "Wrong code,\nthe door remains closed\n";
    }


    int myNum = 10; //is this a positive or negative number?
    if(myNum > 0){
        cout << "This value is a positive number" << endl;
    }else if(myNum < 0){
        cout << "This number is a negative number" << endl;
    }else{
        cout << "This value is 0 \n";
    }



    return 0;
}