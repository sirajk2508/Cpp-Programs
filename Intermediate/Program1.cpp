// Pointers in C++

#include<iostream>
using namespace std;

int add(int a, int b) {
    return a+b;
}

int main() {

    int num = 10;
    int *ptr = &num; // Pointer 'ptr' now points to the memory address of 'num'
    cout << "num: " << num << "\nptr: " << ptr << endl;
    cout << "\n-----------------------------------------------\n\n";

    int val = *ptr; // Value now contains the value of the variable that 'ptr' points to (i.e., 10)
    cout << "val: " << val << endl;
    cout << "\n-----------------------------------------------\n\n";

    int (*funcptr) (int, int) = add;
    int addTwoNumbers = funcptr(3, 2);
    cout << "Add 3 and 2: " << addTwoNumbers << endl;
    cout << "\n-----------------------------------------------\n\n";

    int &referencePtr = num;
    cout << "num: " << num << "\n*ptr: " << *ptr << "\nreferencePtr: " << referencePtr << endl;
    referencePtr = 36;
    cout << "num: " << num << "\n*ptr: " << *ptr << "\nreferencePtr: " << referencePtr << endl;
    cout << "\n-----------------------------------------------\n\n";

    return 0;
}