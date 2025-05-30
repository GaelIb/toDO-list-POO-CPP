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

    string getName() const;
    string getPhone() const;
    string getEmail() const;

    void setName(const string&);
    void setPhone(const string&);
    void setEmail(const string&);

    virtual void showRole() const = 0;
    virtual ~User() {}
};

#endif

