#include "Project.h"

Project::Project() {}
Project::Project(string n, string d) : name(n), dueDate(d) {}

string Project::getName() const { return name; }
string Project::getDueDate() const { return dueDate; }
int Project::getNumTasks() const { return tasks.size(); }
int Project::getNumMembers() const { return members.size(); }

void Project::setName(const string& n) { name = n; }
void Project::setDueDate(const string& d) { dueDate = d; }

void Project::addTask(const Task& t) {
    if (tasks.size() < 5) tasks.push_back(t);
}

void Project::addMember(Admin& a) {
    members.push_back(&a);
}

void Project::addMember(Collaborator& c) {
    members.push_back(&c);
}

const vector<Task>& Project::getTasks() const { return tasks; }
const vector<User*>& Project::getMembers() const { return members; }

void Project::changeTaskState(int idx, const string& newState) {
    if (idx >= 0 && idx < tasks.size()) tasks[idx].changeState(newState);
}
