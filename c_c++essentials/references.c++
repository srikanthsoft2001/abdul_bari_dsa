#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int &r = a;
    int b = 100;
    r = b;

    cout << a << endl;
    r++;
    cout << a << endl;

    cout << r << endl;
}