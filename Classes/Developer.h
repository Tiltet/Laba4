#pragma once
#include <iostream>
#include <vector>

using namespace std;

class Developer : public Employee
{
private:
    
public:
    Developer();

    void function_test(); // виртуальная функция Employee
    void print_your_projects(); // виртуальная функция Employee для вывода все проектов сотрудника
    void menu(); // виртуальная функция Employee для меню


    void developer_function(); // тестовая функция Developer
    vector<company_info> change_project_name(vector<company_info> info); // меняет название проекта

    ~Developer();
};

Developer::Developer()
{

}

Developer::~Developer()
{

}
