#ifndef COLLABORATOR_H
#define COLLABORATOR_H

#include "User.h"
#include "Task.h"

class Collaborator : public User {
public:
    Collaborator();
    Collaborator(string, string, string);

    void showRole(); // override

    void changeTaskState(Task*, string);
};

#endif
