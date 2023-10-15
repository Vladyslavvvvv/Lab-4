#include "kvn_participant.h"

using namespace std;

KvnParticipant::KvnParticipant(const string& name, int age, const string& movie, const string& team)
    : Actor(name, age, movie), team(team) {}

void KvnParticipant::display() {
    Actor::display();
    cout << "�������: " << team << endl;
}

void KvnParticipant::writeToFile(ofstream& file) {
    file << "������� ���" << endl;
    Actor::writeToFile(file);
    file << "�������: " << team << endl;
}
