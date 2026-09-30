#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int add(int a, int b) // prototype/signature of the function.
// a, b are the formal parameters.
{
    // Function Defination/eloboration.
    return a + b;
}

int main()
{
    int p = 10;
    int q = 20;
    int sum = add(p, q); // function call.
    //p, q are the actual parameters.
    cout << sum << endl;
    return 0;
}

// Functions
/*
1. Functions are part of Modular/procedural Programming
2. terminologies mentioned.
3. an activation record is created in the stack memory on the Main, as the function call is happened we have the memory is created for the specific variables which the main method cannot access and once the end of the function happens the control moved to the function call assignment and the activation record is deleted.
*/