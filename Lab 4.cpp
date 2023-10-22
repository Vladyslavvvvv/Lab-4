#include <iostream>
#include <fstream>
#include "kvn_participant.h"

using namespace std;

int main() {
    string name, movie, team;
    int age;

    cout << "Enter the student's name: ";
    cin >> name;
    cout << "Enter the age of the student: ";
    cin >> age;
    Student student(name, age);
    cout << endl;

    cout << "Enter the actor's name: ";
    cin >> name;
    cout << "Enter the actor's age: ";
    cin >> age;
    cout << "Enter the name of the movie: ";
    cin >> movie;
    Actor actor(name, age, movie);
    cout << endl;

    cout << "Enter the name of the KVN participant: ";
    cin >> name;
    cout << "Enter the age of the KVN participant: ";
    cin >> age;
    cout << "Enter the film of the KVN participant: ";
    cin >> movie;
    cout << "Enter the team of the KVN participant: ";
    cin >> team;
    KvnParticipant participant(name, age, movie, team);
    cout << endl;

    // Output and writing to a file
    student.display();
    actor.display();
    participant.display();

    ofstream file("output.txt", ios::out | ios::app | ios::binary);

    if (file.is_open()) {
        student.writeToFile(file);
        actor.writeToFile(file);
        participant.writeToFile(file);
        file.close();
    }
    else {
        cout << "Unable to open the file." << endl;
    }

    return 0;
}