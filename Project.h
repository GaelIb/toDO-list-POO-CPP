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

    string getName();
    string getDueDate();
    int getNumTasks();
    int getNumMembers();

    void setName(string);
    void setDueDate(string);

    Project& operator+=(Task);

    void addMember(Admin*);
    void addMember(Collaborator*);

    vector<Task>& getTasks();
    vector<User*>& getMembers();

    void changeTaskState(int, string);
};

#endif
