#include "Collaborator.h"

Collaborator::Collaborator() {}
Collaborator::Collaborator(string n, string p, string e) : User(n, p, e) {}

void Collaborator::showRole() const {
    // For output in main
}

void Collaborator::changeTaskState(Task& task, const string& newState) const {
    task.changeState(newState);
}
