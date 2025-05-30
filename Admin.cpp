#include "Admin.h"

Admin::Admin() {}
Admin::Admin(string n, string p, string e) : User(n, p, e) {}

void Admin::showRole() const {
}

Task Admin::createTask(string name, string description, string assignedTo, int estimatedHours) const {
    return Task(name, description, assignedTo, estimatedHours);
}

void Admin::assignTask(Task& task, string newAssignedTo) const {
    task.setAssignedTo(newAssignedTo);
}
