// Control Structures

#include<iostream>
using namespace std;

int main() {

    // Check legal age for vote

    int age;
    cout << "Enter your age: ";
    cin >> age;

    if(age >= 18) {
        cout << "You can vote.\n";
    } else {
        cout << "Sorry, You are not yet elligible to vote.\n";
    }

    // Print 0 to 9 using for-loop
    for(int i = 0; i < 10; i++) {
        cout << i << " ";
    }
    cout << endl;

    // Print 0 to 9 using while-loop
    int i = 0;
    while(i < 10) {
        cout << i << " ";
        i++;
    }
    cout << endl;


    return 0;
}