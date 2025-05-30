#ifndef ADMIN_H
#define ADMIN_H

#include "User.h"
#include "Task.h"

class Admin : public User {
public:
    Admin();
    Admin(string, string, string);
    void showRole() const override;

    Task createTask(string name, string description, string assignedTo, int estimatedHours) const;
    void assignTask(Task& task, string newAssignedTo) const;
};

#endif
