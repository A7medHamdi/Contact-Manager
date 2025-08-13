#include <iostream>
#include <vector>
#include "Contact.h"
#include "User.h"
using namespace std;
Contact::Contact(int c) : count(c)
 {}

void Contact::adduser(User u) {
    users.push_back(u);
    count++;
}

User* Contact::SearchUser(string key) {
    for (int i = 0; i < users.size(); i++) {
        if (users[i].search(key)) {
            return &users[i];
        }
    }
    return nullptr;
}

void Contact::EditUser(string id) {
    User* u = SearchUser(id);
    if (!u) {
        cout << "User not found.\n";
        return;
    }

    string fname, lname, city;
    cout << "Enter new first name: "; cin >> fname;
    cout << "Enter new last name: "; cin >> lname;
    cout << "Enter new city: "; cin >> city;

    u->setFirstname(fname);
    u->setLastname(lname);
    u->setCity(city);

    cout << "User updated successfully.\n";
}

void Contact::DeleteUser(string id) {
    for (int i = 0; i < users.size(); i++) {
        if (users[i].search(id)) {
            users.erase(users.begin() + i);
            count--;
            cout << "User deleted.\n";
            return;
        }
    }
    cout << "User not found.\n";
}

void Contact::ShowAll() const {
    if (users.empty()) {
        cout << "No users to show.\n";
        return;
    }

    for (int i = 0; i < users.size(); i++) {
        users[i].show();
        cout << "\n";
    }

}

int Contact::CountUser() const {
    return count;
}
