// Smart Pointers in C++

#include<iostream>
#include<memory>
using namespace std;

int main() {

    // Unique Pointer (unique_ptr)
    unique_ptr<int> p1(new int(5));
    unique_ptr<int> p2 = make_unique<int>(10);
    cout << *p1 << ", " << *p2 << endl;
    cout << "\n-----------------------------------------------\n\n";


    // Transferring ownership
    unique_ptr<int> ptr1(new int(5));
    unique_ptr<int> ptr2 = move(ptr1);
    
    if(ptr1) {
        cout << "ptr1 owns the object" << endl;
    } else {
        cout << "ptr2 owns the object" << endl;
    }
    cout << "\n-----------------------------------------------\n\n";


    return 0;
}