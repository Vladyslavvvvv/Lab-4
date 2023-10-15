#include "student.h"

using namespace std;

Student::Student(const string& name, int age) : name(name), age(age) {}

void Student::display() {
    cout << "Ім'я: " << name << ", Вік: " << age << endl;
}

void Student::writeToFile(ofstream& file) {
    file << "Студент" << endl;
    file << "Ім'я: " << name << ", Вік: " << age << endl;
}