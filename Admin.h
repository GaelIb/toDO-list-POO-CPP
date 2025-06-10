#ifndef ADMIN_H
#define ADMIN_H

#include "User.h"
#include "Task.h"

class Admin : public User {
public:
    Admin();
    Admin(string, string, string);

    void showRole(); // override

    Task createTask(string, string, string, int);
    void assignTask(Task*, string);
};

#endif
