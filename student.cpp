#include "student.h"

using namespace std;

Student::Student(const string& name, int age) : name(name), age(age) {}

void Student::display() {
    cout << "��'�: " << name << ", ³�: " << age << endl;
}

void Student::writeToFile(ofstream& file) {
    file << "�������" << endl;
    file << "��'�: " << name << ", ³�: " << age << endl;
}