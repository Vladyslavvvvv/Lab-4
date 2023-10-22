#include "student.h"

using namespace std;

Student::Student(const string& name, int age) : name(name), age(age) {}

void Student::display() {
    cout << "Name: " << name << ", Age: " << age << endl;
}

void Student::writeToFile(ofstream& file) {
    file << "Student" << endl;
    file << "Name: " << name << ", Age: " << age << endl;
}