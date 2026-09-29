#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    // declaring data variable and associated address variable.
    int a = 10;
    int *d = &a;

    cout << a << " " << *d << endl; // BRING THE VALUE IS HTE DEREFERENCING

    // cheking things with an array.
    int A[5] = {1, 2, 4, 5, 6};
    int *e = A; // this is actuall taking the index 0  pointer not the entire point to say.
    cout << &A[1] << " " << e << endl;

    // accessing elements in the array.
    for (int i = 0; i < 5; i++)
        cout << e[i] << endl; // we are accsing the array using a pointer.

    int *m;
    m = (int *)malloc(5 * sizeof(int));
    m[0] = 1;
    m[2] = 1;
    m[1] = 1;
    m[3] = 1;
    m[4] = 1;

    for (int i = 0; i < 5; i++)
    {
        /* code */
        cout << m[i] << endl;
    }

    int *n = new int[5];
    n[0] = 1;
    n[1] = 1;
    n[2] = 1;
    n[3] = 1;
    n[4] = 1;
    for (int i = 0; i < 5; i++)
    {
        /* code */
        cout << n[i] << endl;
    }

    // creating a malloc function or space in heap memory
    int *p = (int *)malloc(5 * sizeof(int));
    cout << p << endl;

    p[1] = 200;
    cout << p[1] << endl;

    int *q;
    char *r;
    float *s;
    double *t;
    struct Rectangle *u;

    cout << sizeof(q) << endl;
    cout << sizeof(r) << endl;
    cout << sizeof(s) << endl;
    cout << sizeof(t) << endl;
    cout << sizeof(u) << endl;

    // freeing the memory - end of the program.
    delete[] m;
    free(n);
}

/*
Pointers
--------
accessing the heap memory
accessing the external resources like hd, monitor, keyboard etc
for parameter passing we need pointers.

-> we have data variable and the address variable pointing towards the data variable memory location
-> dynamically creating the datavariable in the heap memory needs malloc function in c and new in c++
-> Dereferencing is the aspect to access the data varaible using the pointer.
*/