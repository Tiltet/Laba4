#pragma once
#include "Employee.cpp"

using namespace std;

class Developer : public virtual Employee
{
private:

public:
    Developer(string name);

    void print_all_user_project() override;      // ВИРТУАЛЬНАЯ ФУНКЦИЯ ДЛЯ ВЫВОДА ПРОЕКТОВ ЮЗЕРА
    void menu() override;                        // ВИРТУАЛЬНАЯ ФУНКЦИЯ МЕНЮ ЮЗЕРА
    void function_user() override;               // ТЕСТОВАЯ ВИРТУАЛЬНАЯ ФУНКЦИЯ Developer

    void change_developer_status();              // ФУНКЦИЯ ИЗМЕННЕНИЯ developer_status
    // void delete_project();                    // ФУНКЦИЯ УДАЛЕНИЯ ПРОЕКТА

    ~Developer();
};

Developer::Developer(string name) : Employee(name)
{
    cout << endl << "Конструктор Developer" << endl;
    this->menu();
}

Developer::~Developer()
{

}