#include "Collaborator.h"

Collaborator::Collaborator() {}
Collaborator::Collaborator(string n, string p, string e) : User(n, p, e) {}
// Show role implementation
void Collaborator::showRole() {
}
void Collaborator::changeTaskState(Task* t, string newState) {
    if (t) t->changeState(newState);
}
