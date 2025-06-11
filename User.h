// Abstract base class: User

#ifndef USER_H
#define USER_H

#include <string>
using namespace std;

class User {
protected:
    string name;
    string phone;
    string email;
public:
    User();
    User(string, string, string);

    string getName();
    string getPhone();
    string getEmail();

    void setName(string);
    void setPhone(string);
    void setEmail(string);
// Pure virtual method to be implemented by derived classes
    virtual void showRole() = 0;

};

#endif
