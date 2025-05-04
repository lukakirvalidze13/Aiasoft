/*
cin considers a space (whitespace, tabs, etc) as a terminating character, 
which means that it can only store a single word (even if you type many words):

That's why, when working with strings, we often use the getline() function to read a line of text.
It takes cin as the first parameter, and the string variable as second:
*/

#include <iostream>
using namespace std;
int main(){


    string username;
    cout << "Type your username \n";
    getline(cin,username);
    cout << "Your username set to: " << username; 

    return 0;
}