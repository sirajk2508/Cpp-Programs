// Lambda Function

#include<iostream>
using namespace std;

int main() {
    /* Lambda function with no capture, parameters, or return type. */

    auto printHello = []() {
        cout << "Hello World!!" << endl;
    };

    printHello();

    /* Lambda function with parameters. */

    auto addTwoNumbers = [](int a, int b) {
        return a+b;
    };
    cout << addTwoNumbers(3, 2) << endl;

    /* Lambda function with capture-by-value. */

    int num1 = 87;
    auto multiply = [num1](int num2) {
        return num1 * num2;
    };
    cout << multiply(39) << endl;

    /* Lambda function with capture-by-reference. */
    int expiresIn = 45;
    cout << "Expires in: " << expiresIn << endl;
    auto updateExpiry = [&expiresIn](int newExpiry) {
        expiresIn = newExpiry;
    };
    updateExpiry(30);
    cout << "Expires in: " << expiresIn << endl;

    return 0;
}