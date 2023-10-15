#include "actor.h"

using namespace std;

Actor::Actor(const string& name, int age, const string& movie)
    : Student(name, age), movie(movie) {}

void Actor::display() {
    Student::display();
    cout << "Фільм: " << movie << endl;
}

void Actor::writeToFile(std::ofstream& file) {
    file << "Актор" << endl;
    Student::writeToFile(file);
    file << "Фільм: " << movie << endl;
}