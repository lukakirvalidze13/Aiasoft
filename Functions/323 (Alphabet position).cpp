#include <iostream>
using namespace std;
int getSymbolPosition(char letter){
    return ( letter - 'a') + 1;
}
int main(){

    char letter;
    cin >> letter;
    int position = getSymbolPosition(letter);
    cout << position;


    return 0;
}   