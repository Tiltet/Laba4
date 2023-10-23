// КЛАСС АДМИНИСТРАТОРА
#pragma once
#include "Developer.cpp"
#include "Tester.cpp"
#include "Meneger.cpp"

class Admin : public Developer, public Tester, public Meneger
{
private:
    
public:
    Admin(string name);

    void print_all_user_project(); // ВИРТУАЛЬНАЯ ФУНКЦИЯ ДЛЯ ВЫВОДА ПРОЕКТОВ
    void menu();                   // ВИРТУАЛЬНАЯ ФУНКЦИЯ МЕНЮ
    void function_user();          // ВИРТУАЛЬНАЯ ФУНКЦИЯ

    ~Admin();
};

Admin::Admin(string name) : Employee(name), Developer(name), Tester(name), Meneger(name)
{
    // cout << endl << "Конструктор Admin" << endl;
}

Admin::~Admin()
{

}
