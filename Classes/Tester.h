#pragma once
#include "Employee.cpp"

class Tester : public virtual Employee
{
private:
    
public:
    Tester(string name);

    void print_all_user_project();      // ВИРТУАЛЬНАЯ ФУНКЦИЯ ДЛЯ ВЫВОДА ПРОЕКТОВ ЮЗЕРА
    void menu();                        // ВИРТУАЛЬНАЯ ФУНКЦИЯ МЕНЮ ЮЗЕРА
    void function_user();               // ВИРТУАЛЬНАЯ ФУНКЦИЯ

    void change_test_status();          // ФУНКЦИЯ ИЗМЕНЕНИЯ test_status 

    ~Tester();
};

Tester::Tester(string name) : Employee(name)
{
    this->name = name;
    cout << endl << "Конструктор Tester" << endl;
}

Tester::~Tester()
{

}
