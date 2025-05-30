#include "Task.h"

Task::Task() : estimatedHours(0), state("Not started") {}

Task::Task(string n, string d, string a, int h)
    : name(n), description(d), assignedTo(a), estimatedHours(h), state("Not started") {}

string Task::getName() const { return name; }
string Task::getDescription() const { return description; }
string Task::getAssignedTo() const { return assignedTo; }
string Task::getState() const { return state; }
int Task::getEstimatedHours() const { return estimatedHours; }

void Task::setName(const string& n) { name = n; }
void Task::setDescription(const string& d) { description = d; }
void Task::setAssignedTo(const string& a) { assignedTo = a; }
void Task::setState(const string& s) { state = s; }
void Task::setEstimatedHours(int h) { estimatedHours = h; }

void Task::changeState(const string& newState) { state = newState; }
