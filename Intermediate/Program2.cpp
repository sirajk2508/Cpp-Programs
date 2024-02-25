#include<iostream>
using namespace std;


// Swap using Pointers
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


// Swap using Reference variable
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
   int x = 5, y = 10;
   cout << "Before Swap: x = " << x << " y = " << y << endl; // Outputs 5 10
   
   swap(x, y);
   cout << "After Swap: x = " << x << " y = " << y << endl;  // Outputs 10 5
}