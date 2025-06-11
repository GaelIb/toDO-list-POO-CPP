#ifndef ADMIN_H
#define ADMIN_H

#include "User.h"
#include "Task.h"
// Derived class: Admin inherits from User

class Admin : public User {
public:
    Admin();
    Admin(string, string, string);

    // Implementation of pure virtual method
    void showRole(); // override

    Task createTask(string, string, string, int);
    void assignTask(Task*, string);
};

#endif
