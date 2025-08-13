#include <iostream>
#include <string>
#include "Address.h"
using namespace std;
Address::Address(string a, string t, string d) : address(a), type(t), description(d) {}

void Address::setaddress(string a) {
    address = a;
}

void Address::settype(string t) {
    type = t;
}

void Address::setdescription(string d) {
    description = d;
}

void Address::get() const {
    cout << "Address: " << address << " (" << type << ") - " << description << "\n";
}