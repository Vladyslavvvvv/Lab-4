#pragma once
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

class Student {
public:
    Student(const string& name, int age);
    void display();
    void writeToFile(ofstream& file);

protected:
    string name;
    int age;
};