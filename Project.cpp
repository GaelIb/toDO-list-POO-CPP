#include "Project.h"

Project::Project() {}
Project::Project(string n, string d) {
    name = n;
    dueDate = d;
}

string Project::getName() { return name; }
string Project::getDueDate() { return dueDate; }
int Project::getNumTasks() { return tasks.size(); }
int Project::getNumMembers() { return members.size(); }

void Project::setName(string n) { name = n; }
void Project::setDueDate(string d) { dueDate = d; }


Project& Project::operator+=(Task t) {
    if (tasks.size() < 5) tasks.push_back(t);
    return *this;
}

void Project::addMember(Admin* a) {
    members.push_back(a);
}
void Project::addMember(Collaborator* c) {
    members.push_back(c);
}

vector<Task>& Project::getTasks() { return tasks; }
vector<User*>& Project::getMembers() { return members; }

void Project::changeTaskState(int idx, string newState) {
    if (idx >= 0 && idx < tasks.size()) {
        tasks[idx].changeState(newState);
    }
}
