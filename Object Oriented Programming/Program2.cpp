// Constructors

#include<iostream>
using namespace std;

class Student {
private:
    char name[30];
    int roll_no;
    double fees;
public:
    Student() {
        cout <<"Enter Student Name: ";
        cin >> name;
        cout << "Enter Roll No.: ";
        cin >> roll_no;
        cout << "Enter fee amount: ";
        cin >> fees;
        cout << endl;
    }

    void display() {
        cout << "Student Name: " << name << endl;
        cout << "Roll no.: " << roll_no << endl;
        cout << "Fee amount: " << fees << endl;
    }

};


int main() {
    Student s1;
    s1.display();
    return 0;
}