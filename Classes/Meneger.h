// КЛАСС МЕНЕДЖЕРА ВСЕ РАБОТАЕТ
#pragma once
#include "Employee.cpp"

using namespace std;

class Meneger : public virtual Employee
{
private:

public:
    Meneger(string name);

    void print_all_user_project() override;      // ВИРТУАЛЬНАЯ ФУНКЦИЯ ДЛЯ ВЫВОДА ПРОЕКТОВ ЮЗЕРА
    void menu() override;                        // ВИРТУАЛЬНАЯ ФУНКЦИЯ МЕНЮ ЮЗЕРА
    void function_user() override;               // ТЕСТОВАЯ ВИРТУАЛЬНАЯ ФУНКЦИЯ Developer

    void change_developer();                     // ФУНКЦИЯ ИЗМЕННЕНИЯ developer

    ~Meneger();
};

Meneger::Meneger(string name) : Employee(name)
{
    // cout << endl << "Конструктор Meneger" << endl;
}

Meneger::~Meneger()
{

}