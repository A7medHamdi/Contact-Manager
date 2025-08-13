#pragma once
#include <iostream>
#include "User.h"
#include <vector>
using namespace std;
class Contact
{
    vector<User> users;
    int count;

public:
    Contact(int c = 0);
    void adduser(User u);
    User *SearchUser(string key);
    void EditUser(string id);
    void DeleteUser(string id);
    void ShowAll() const;
    int CountUser() const;
};