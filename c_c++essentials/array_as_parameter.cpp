#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

// delclaring a function accessing array and printing it.
void printArray(int A[], int n)
{
    // cout << sizeof(A) / sizeof(int) << endl;
    for (int i = 0; i < n; i++)
    {
        A[i]++;
        cout << A[i] << endl;
    }
}

// return a array - created in heap

int *fun(int n)
{
    int *p;
    p = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        p[i] = i + 1;
        cout << p[i] << endl;
    }

    return p;
}

int main()
{
    // declaring and initilizing the array
    int A[] = {2, 4, 5, 6, 8};
    printArray(A, 5);

    // accessing the heap - array using the pointer in the fun - activation record
    int *B;
    B = fun(5);

    // cout << B << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << B[i] << endl;
    }

    return 0;
}