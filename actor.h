#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include "student.h"

using namespace std;

class Actor : public Student {
public:
    Actor(const string& name, int age, const string& movie);
    void display();
    void writeToFile(ofstream& file);

private:
    string movie;
};