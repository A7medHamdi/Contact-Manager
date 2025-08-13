#pragma once
#include <iostream>
#include <string>
using namespace std;
class Address
{
    string address;
    string type;
    string description;

public:
    Address(string a = " ", string t = " ", string d = " ");
    void setaddress(string a);
    void settype(string t);
    void setdescription(string d);
    void get() const;
};