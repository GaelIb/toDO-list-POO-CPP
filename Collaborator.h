#ifndef COLLABORATOR_H
#define COLLABORATOR_H

#include "User.h"
#include "Task.h"

class Collaborator : public User {
public:
    Collaborator();
    Collaborator(string, string, string);
    void showRole() const override;

    void changeTaskState(Task& task, const string& newState) const;
};

#endif
