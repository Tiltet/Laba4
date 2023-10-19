#pragma once
#include <iostream>
#include <vector>
#include "Employee.cpp"

using namespace std;

struct company_info
{
    int id;
    string name;
};


class Company
{
private:
    vector<company_info> info;
public:

    Employee *user;

    Company(Employee *User);

    ~Company();
};

Company::Company(Employee *User)
{
    this->user = User;
}

Company::~Company()
{

}
