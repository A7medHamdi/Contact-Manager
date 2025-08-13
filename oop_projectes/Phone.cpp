#include <iostream>
#include <string>
#include "Phone.h"
using namespace std;
Phone::Phone(string n, string t, string d) : phone(n), type(t), description(d) {}

void Phone::setphon(string p) {
    phone = p;
}

void Phone::settype(string t) {
    type = t;
}

void Phone::setdescription(string d) {
    description = d;
}

void Phone::get() const {
    cout << "Phone: " << phone << " (" << type << ") - " << description << "\n";
}