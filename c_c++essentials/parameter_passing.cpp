#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

// creating a swap function -  call by value.
void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

// creating the swap function - call by address.
// now we have the pointers here that can pick those address and now the swap realted activation variables now assing main function variables.
void swap1(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

// call by reference example.

void swap2(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    // call by value
    // creating the swaping items
    int a = 10, b = 20;
    swap(a, b);
    // the actual parameters are not changed.
    cout << a << " " << b << endl;

    int a1 = 10, b1 = 20;
    swap1(&a1, &b1);                 // sharing the address to the function.
    cout << a1 << " " << b1 << endl; // since the pointer have access to the main memory - activation records. it is updated.

    int a2 = 10, b2 = 20;
    swap2(a2, b2);
    cout << a2 << b2 << endl;

    return 0;
}