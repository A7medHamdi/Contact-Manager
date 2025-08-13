#pragma once
#include <iostream>
#include <string>
using namespace std;
class Email
{
    string email;
    string type;
    string description;

public:
    Email(string e = " ", string t = " ", string d = " ");
    void setemail(string e);
    void settype(string t);
    void setdescription(string d);
    void get() const;
};