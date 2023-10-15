#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include "actor.h"

using namespace std;

class KvnParticipant : public Actor {
public:
    KvnParticipant(const string& name, int age, const string& movie, const string& team);
    void display();
    void writeToFile(ofstream& file);

private:
    string team;
};