// Basic Operators

#include <iostream>
using namespace std;

int main()
{
    // Arithmetic Operators
    cout << "Addition of 5 and 1= " << 5 + 1 << endl;
    cout << "Subtraction of 5 and 1= " << 5 - 1 << endl;
    cout << "Multiplication of 5 and 3= " << 5 * 3 << endl;
    cout << "Division of 15 and 3= " << 15 / 3 << endl;
    cout << "Modulus of 15 and 3= " << 15 % 3 << endl;

    cout << endl;

    // Relational Operators
    cout << "Is 5 greater than 4? " << (5 > 4) << endl;
    cout << "Is 5 less than 4? " << (5 < 4) << endl;
    cout << "Is 5 equal to 5? " << (5 == 5) << endl;

    cout << endl;

    // Logical Operators
    if (5 > 4 && 5 < 6)
    {
        cout << "5 is valid" << endl;
    }
    else
    {
        cout << "5 is not valid" << endl;
    }

    cout << endl;

    // Bitwise Operators

    cout << "5 & 1 = " << (5 & 1) << endl;
    cout << "5 | 1 = " << (5 | 1) << endl;
    cout << "~5 = " << (~5) << endl;
    cout << "5 << 1 = " << (5 << 1) << endl;
    cout << "5 >> 1 = " << (5 >> 1) << endl;

    return 0;
}