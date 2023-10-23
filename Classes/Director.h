// КЛАСС ДИРЕКТОРА
#pragma once
#include "Admin.cpp"

class Director : public Admin
{
private:
    
public:
    Director(string name);

    void print_all_user_project(); // ВИРТУАЛЬНАЯ ФУНКЦИЯ ДЛЯ ВЫВОДА ПРОЕКТОВ
    void menu();                   // ВИРТУАЛЬНАЯ ФУНКЦИЯ МЕНЮ
    void function_user();          // ВИРТУАЛЬНАЯ ФУНКЦИЯ

    void add_new_project();        // ФУНКЦИЯ ДОБАВЛЕНИЯ НОВОГО ПРОЕКТА
    void delete_project();         // ФУНКЦИЯ УДАЛЕНИЯ ПРОЕКТА

    ~Director();
};

Director::Director(string name) : Employee(name), Admin(name)
{
    // cout << endl << "Конструктор Director" << endl;
}

Director::~Director()
{

}