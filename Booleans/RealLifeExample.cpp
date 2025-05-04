#include <iostream>
using namespace std;
int main(){

    cout << "In order to participate in this project you must be mature enough, are you sure you want to continue? "<< endl;
    int myAge;
    cout << "Enter your age: \n" ;
    cin >> myAge;
    int minAge = 69;
    if(myAge >= minAge){
        cout << "You can participate in this project";
    }else{
        cout << "Unfortunately you can not participate in this project";
    }



    return 0;
}