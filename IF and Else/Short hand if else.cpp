#include <iostream>
using namespace std;
int main(){

    int time;
    cin >> time;
    string result = (time < 12) ? "Good morning" : "Good evening";
    cout << result;







    return 0;
}

// variable = (condition) ? expressionTrue : expressionFalse;

//There is also a short-hand if else, which is known as the ternary operator because it consists of three operands.
//It can be used to replace multiple lines of code with a single line, and is often used to replace simple if else statements: