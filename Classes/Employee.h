#pragma once
#include <iostream>
#include "Employee.cpp"

using namespace std;

struct company_info
{
    int id;
    string name;
};


using namespace std;

class Employee
{
private:
    
public:
    Employee();

    virtual void function_test() = 0;
    virtual void print_your_projects() = 0;
    virtual vector<company_info> menu(vector<company_info> info) = 0;

    ~Employee();
};

Employee::Employee()
{

}

Employee::~Employee()
{
    
}
