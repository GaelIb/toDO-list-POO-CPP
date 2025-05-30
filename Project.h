#ifndef PROJECT_H
#define PROJECT_H

#include "Task.h"
#include "Admin.h"
#include "Collaborator.h"
#include <vector>
#include <string>
using namespace std;

class Project {
private:
    string name;
    string dueDate;
    vector<Task> tasks;
    vector<User*> members;

public:
    Project();
    Project(string, string);

    string getName() const;
    string getDueDate() const;
    int getNumTasks() const;
    int getNumMembers() const;

    void setName(const string&);
    void setDueDate(const string&);

    void addTask(const Task&);
    void addMember(Admin&);
    void addMember(Collaborator&);

    const vector<Task>& getTasks() const;
    const vector<User*>& getMembers() const;

    void changeTaskState(int, const string&);
};

#endif
