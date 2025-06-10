#ifndef TASK_H
#define TASK_H
#include <string>
using namespace std;

class Task {
private:
    string name;
    string description;
    string assignedTo;
    string state;
    int estimatedHours;
public:
    Task();
    Task(string, string, string, int);

    string getName();
    string getDescription();
    string getAssignedTo();
    string getState();
    int getEstimatedHours();

    void setName(string);
    void setDescription(string);
    void setAssignedTo(string);
    void setState(string);
    void setEstimatedHours(int);

    void changeState(string);
};

#endif

