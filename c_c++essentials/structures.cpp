#include <iostream>
#include <stdio.h>
using namespace std;

// Definationing a structure
struct Rectangle
{
    int length;
    int bredth;
};

struct ComplexNumber
{
    int realValue;
    int imaginaryValue;
};

struct something
{
    int n1;
    char c;
} c1;

int main()
{
    Rectangle rectangle = {10, 5};
    printf("Area of the Rectangle = %d\n", rectangle.length * rectangle.bredth);

    struct ComplexNumber complexnumber;
    complexnumber.realValue = 100;
    complexnumber.imaginaryValue = 200;
    cout << "Real Value: " << complexnumber.realValue << endl;
    cout << "Imaginary Value: " << complexnumber.realValue << endl;

    something c1 = {1, 'c'};
    cout << "size of the something : " << sizeof(c1) << endl;
}

/*
Understanding the Structures
1. Sturcutes are the collection of the Dissimilar Data members/ User defined Data Structures.
2. Defination (doesn't consume any Memory), Inititalization/Varible creation, Accessing the Structure members, size of the variable(should be calculated)
3. Syntax
Structure StructName{
datatype MemberName;
}
struct StrcutureName variableName = --initialization--
*/