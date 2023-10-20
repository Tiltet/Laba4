#pragma once
#include <iostream>

class Tester
{
private:
    
public:
    Tester();

    void function_test(); // виртуальная функция Employee
    void print_your_projects(); // виртуальная функция Employee для вывода все проектов сотрудника
    void menu(); // виртуальная функция Employee для меню

    void tester_function(); // тестовая функция Tester

    ~Tester();
};

Tester::Tester()
{

}

Tester::~Tester()
{
    
}
