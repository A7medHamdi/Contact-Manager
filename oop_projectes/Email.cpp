#include <iostream>
#include <string>
#include "Email.h"
using namespace std;
Email::Email(string e, string t, string d) : email(e), type(t), description(d) {}

void Email::setemail(string e) {
    email = e;
}

void Email::settype(string t) {
    type = t;
}

void Email::setdescription(string d) {
    description = d;
}

void Email::get() const {
    cout << "Email: " << email << " (" << type << ") - " << description << "\n";
}
