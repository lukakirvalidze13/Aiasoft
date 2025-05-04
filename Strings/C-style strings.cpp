/*
C-style strings are created with the char type instead of string.

The name comes from the C language, which, unlike many other programming languages,
does not have a string type for easily creating string variables. Instead,
you must use the char type and create an array of characters to make a "string" in C.

As C++ was developed as an extension of C, it continued to support this way of creating strings in C++:
*/

#include <iostream>
using namespace std;
int main(){


    string greeting1 = "Hello there ANN";
    char greeting2[] = "Hello there LU"; // c style string; (an array of characters);
    cout << greeting2;




    return 0;
}