/*
In the example from the previous page, the & operator was used to create a reference variable.
But it can also be used to get the memory address of a variable;
which is the location of where the variable is stored on the computer.*/

#include <iostream>
using namespace std;
int main(){
    string name = "BMW X5 2025";
    cout << &name;





    return 0;
}

/*
And why is it useful to know the memory address?

References and Pointers (which you will learn about in the next chapter) are important in C++,
because they give you the ability to manipulate the data in the computer's memory -
which can reduce the code and improve the performance.
These two features are one of the things that make C++ stand out from other programming languages, like Python and Java.
*/