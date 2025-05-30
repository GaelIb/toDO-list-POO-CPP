#include "User.h"

User::User() {}
User::User(string n, string p, string e)
    : name(n), phone(p), email(e) {}

string User::getName() const { return name; }
string User::getPhone() const { return phone; }
string User::getEmail() const { return email; }

void User::setName(const string& n) { name = n; }
void User::setPhone(const string& p) { phone = p; }
void User::setEmail(const string& e) { email = e; }
