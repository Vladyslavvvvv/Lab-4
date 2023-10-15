#include <iostream>
#include <fstream>
#include "kvn_participant.h"

using namespace std;

int main() {
    string name, movie, team;
    int age;

    cout << "Введіть ім'я студента: ";
    cin >> name;
    cout << "Введіть вік студента: ";
    cin >> age;
    Student student(name, age);
    cout << endl;

    cout << "Введіть імя атора: ";
    cin >> name;
    cout << "Введіть вік актора: ";
    cin >> age;
    cout << "Введіть назву фільму: ";
    cin >> movie;
    Actor actor(name, age, movie);
    cout << endl;

    cout << "Введіть ім'я учасника КВН: ";
    cin >> name;
    cout << "Введіть вік учасника КВН: ";
    cin >> age;
    cout << "Введіть фільм учасника КВН: ";
    cin >> movie;
    cout << "Введіть команду учасника КВН: ";
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