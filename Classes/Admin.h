#pragma once
#include "Developer.cpp"
#include "Tester.cpp"

class Admin : public Developer, public Tester
{
private:
    
public:
    Admin(string name);

    void print_all_user_project(); // ВИРТУАЛЬНАЯ ФУНКЦИЯ ДЛЯ ВЫВОДА ПРОЕКТОВ ЮЗЕРА
    void menu();                   // ВИРТУАЛЬНАЯ ФУНКЦИЯ МЕНЮ ЮЗЕРА
    void function_user();          // ВИРТУАЛЬНАЯ ФУНКЦИЯ

    ~Admin();
};

Admin::Admin(string name) : Employee(name), Developer(name), Tester(name)
{
    this->name = name;
    cout << "Конструктор Admin" << endl;
}

Admin::~Admin()
{
}
