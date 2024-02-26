// Raw Pointers and new and delete operators

#include<iostream>
using namespace std;

int main() {
    int *ptr = new int;
    *ptr = 10;
    cout << ptr << ": " << *ptr << endl;
    delete ptr;
    
    cout << "\n-----------------------------------------------\n\n";

    int n = 10;
    int *ptrArray = new int[n];
    for(int i = 0; i < n; i++)
        ptrArray[i] = i;
    for(int i = 0; i < n; i++)
        cout << ptrArray[i] << " ";
    delete[] ptrArray;

    cout << "\n-----------------------------------------------\n\n";

    return 0;
}