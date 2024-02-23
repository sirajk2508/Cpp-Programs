// Add 2 numbers using a function

#include<iostream>
using namespace std;

int add(int a, int b) {
    return a+b;
}

int main() {
    int a, b;
    cout << "Enter any two numbers: ";
    cin >> a >> b;

    int sum = add(a, b);
    cout << sum << endl;
    return 0;
}