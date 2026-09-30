#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

// defining a structure
struct Rectangle
{
    int length;
    int bredth;
};

int main()
{
    //    declaring the structure in the main memory in the stack
    struct Rectangle r = {10, 20};

    // creating a pointer for the rectangle variable.
    Rectangle *p = &r;
    cout << p->length << endl;
    cout << p->bredth << endl;

    // creating a rectangle object in a heap memory
    // pointer creating in a stack
    Rectangle *n = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    n->length = 100;
    n->bredth = 200;
    cout << n << endl;
    cout << n->length << endl;
    cout << n->bredth << endl;

    // Rectangle o = new Rectangle;

    return 0;
}