#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Phone.h"
#include "Email.h"
#include "Address.h"
using namespace std;
class User
{
    string id;
    string firstname;
    string lastname;
    string gender;
    string city;
    string addedDate;
    vector<Phone> phones;
    vector<Email> emails;
    vector<Address> addresses;

public:
    User(string i, string f, string l, string g, string c, string a);
    bool search(string key) const;
    void setFirstname(string f);
    void setLastname(string l);
    void setCity(string c);
    void show() const;
    User::User(){}
   
};
