#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    // declaration of array
    int a[3] = {0};
    int sizeOfArray = sizeof(a) / sizeof(int);

    // learn : Variable sized arrays, cannot be initialized directly.
    int n;
    cout << "enter a number: " << endl;
    cin >> n;

    int b[n] = {1, 2, 3, 4};

    for (int x : b)
    {
        printf("%d\n", x);
    }

    // loop over array
    for (int x : a)
    {
        printf("%d\n", x);
    }
}