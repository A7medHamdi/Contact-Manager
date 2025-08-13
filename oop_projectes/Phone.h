#pragma once
#include <iostream>
#include <string>
using namespace std;
class Phone
{
    string phone;
    string type;
    string description;

public:
    Phone(string n = " ", string t = " ", string d = " ");
    void setphon(string p);
    void settype(string t);
    void setdescription(string d);
    void get() const;
};
