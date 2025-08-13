#include <iostream>
#include <string>
#include <vector>
#include "User.h"
#include "Phone.h"
#include "Email.h"
#include "Address.h"
using namespace std;
User::User(string i, string f, string l, string g, string c, string a)
    : id(i), firstname(f), lastname(l), gender(g), city(c), addedDate(a) {}
User::User(){}
bool User::search(string key) const {
    return (id == key || firstname == key || lastname == key || city == key);
}

void User::setFirstname(string f) {
    firstname = f;
}

void User::setLastname(string l) {
    lastname = l;
}

void User::setCity(string c) {
    city = c;
}

void User::show() const {
    cout << "ID: " << id << "\n";
    cout << "First Name: " << firstname << "\n";
    cout << "Last Name: " << lastname << "\n";
    cout << "Gender: " << gender << "\n";
    cout << "City: " << city << "\n";
    cout << "Added Date: " << addedDate << "\n";

    cout << "Phones:\n";
    for (const auto& p : phones)
        p.get();

    cout << "Emails:\n";
    for (const auto& e : emails)
        e.get();

    cout << "Addresses:\n";
    for (const auto& a : addresses)
        a.get();
}