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

    string getName() const;
    string getDescription() const;
    string getAssignedTo() const;
    string getState() const;
    int getEstimatedHours() const;

    void setName(const string&);
    void setDescription(const string&);
    void setAssignedTo(const string&);
    void setState(const string&);
    void setEstimatedHours(int);

    void changeState(const string&);
};

#endif
