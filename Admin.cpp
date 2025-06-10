#include "Admin.h"

Admin::Admin() {}
Admin::Admin(string n, string p, string e) : User(n, p, e) {}

void Admin::showRole() {
   
}
Task Admin::createTask(string n, string d, string a, int h) {
    Task t(n, d, a, h);
    return t;
}
void Admin::assignTask(Task* t, string newAssigned) {
    if (t) t->setAssignedTo(newAssigned);
}
