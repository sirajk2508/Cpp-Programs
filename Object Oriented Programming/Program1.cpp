#include<iostream>
using namespace std;

class Student {
private:
    string student_name;
    int roll_no;

public:
    void setStudentInfo(string name, int id) {
        student_name = name;
        roll_no = id;
    }

    void getStudentInfo() {
        cout << "Student name: " << student_name << endl;
        cout << "Roll Number: " << roll_no << endl;
    }
};

int main() {
    Student st1;
    st1.setStudentInfo("John Cena", 1);
    st1.getStudentInfo();
    return 0;
}