#include "Task.h"

Task::Task() {
    estimatedHours = 0;
    state = "";
}

Task::Task(string n, string d, string a, int h) {
    name = n;
    description = d;
    assignedTo = a;
    estimatedHours = h;
    state = "";
}

string Task::getName() { return name; }
string Task::getDescription() { return description; }
string Task::getAssignedTo() { return assignedTo; }
string Task::getState() { return state; }
int Task::getEstimatedHours() { return estimatedHours; }

void Task::setName(string n) { name = n; }
void Task::setDescription(string d) { description = d; }
void Task::setAssignedTo(string a) { assignedTo = a; }
void Task::setState(string s) { state = s; }
void Task::setEstimatedHours(int h) { estimatedHours = h; }

void Task::changeState(string newState) { state = newState; }
