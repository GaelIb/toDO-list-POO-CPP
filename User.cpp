#include "User.h"

User::User() {}
User::User(string n, string p, string e) {
    name = n;
    phone = p;
    email = e;
}
string User::getName() { return name; }
string User::getPhone() { return phone; }
string User::getEmail() { return email; }
void User::setName(string n) { name = n; }
void User::setPhone(string p) { phone = p; }
void User::setEmail(string e) { email = e; }
