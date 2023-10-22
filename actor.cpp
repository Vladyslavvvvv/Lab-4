#include "actor.h"

using namespace std;

Actor::Actor(const string& name, int age, const string& movie)
    : Student(name, age), movie(movie) {}

void Actor::display() {
    Student::display();
    cout << "Film: " << movie << endl;
}

void Actor::writeToFile(std::ofstream& file) {
    file << "Actor" << endl;
    Student::writeToFile(file);
    file << "Film: " << movie << endl;
}