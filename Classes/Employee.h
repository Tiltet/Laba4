// ВИРТУАЛЬНЫЙ КЛАСС Employee
#pragma once
#include <vector>

using namespace std;

// СТРУКТУРА ПРОЕКТА
struct projects
{
    int id;
    string name;
    string developer_name;
    string meneger_name;
    string tester_name;
    bool test_status;
    int developer_status;
};
// СТРУКТУРА ПРОЕКТА

class Employee
{
protected:
    vector<projects> information;                   // ВЕКТОР, КОТОРЫЙ ХРАНИТ ИНФОРМАЦИЮ О КОМПАНИИ
    string name;                                    // ХРАНИТ ИМЯ ПОЛЬЗОВАТЕЛЯ

    void print_project(projects project);           // ФУНКЦИЯ ВЫВОДА ОДНОГО ПРОЕКТА

public:
    Employee(string name);

    virtual void print_all_user_project() = 0;      // ВИРТУАЛЬНАЯ ФУНКЦИЯ ДЛЯ ВЫВОДА ПРОЕКТОВ ЮЗЕРА
    virtual void menu() = 0;                        // ВИРТУАЛЬНАЯ ФУНКЦИЯ МЕНЮ ЮЗЕРА
    virtual void function_user() = 0;               // ВИРТУАЛЬНАЯ ФУНКЦИЯ

    void print_all_project();                       // ФУНКЦИЯ ВЫВОДА ВСЕХ ПРОЕКТОВ КОМПАНИИ
    // void add_new_project();                      // ФУНКЦИЯ ДОБАВЛЕНИЯ НОВОГО ПРОЕКТА

    ~Employee();
};

Employee::Employee(string name)
{
    this->name = name;

    // ДОБАВЛЕНИЕ ПРОЕКТОВ, ЧТОБЫ НЕ ВВОДИТЬ С КЛАВИАТУРЫ
    // ДОБАВИМ ПЕРВЫЙ ПРОЕКТ
    projects project;
    project.id = 111111;
    project.name = "Game 1";
    project.developer_name = "developer 1";
    project.meneger_name = "meneger 1";
    project.tester_name = "tester 1";
    project.test_status = true;
    project.developer_status = 1;

    this->information.push_back(project);
    // ДОБАВИМ ПЕРВЫЙ ПРОЕКТ

    // ДОБАВИМ ВТОРОЙ ПРОЕКТ
    project.id = 222222;
    project.name = "Game 2";
    project.developer_name = "developer 2";
    project.meneger_name = "meneger 2";
    project.tester_name = "tester 2";
    project.test_status = true;
    project.developer_status = 2;

    this->information.push_back(project);
    // ДОБАВИМ ВТОРОЙ ПРОЕКТ
    // ДОБАВЛЕНИЕ ПРОЕКТОВ, ЧТОБЫ НЕ ВВОДИТЬ С КЛАВИАТУРЫ

    cout << endl << "Конструктор Employee" << endl;
}

Employee::~Employee()
{
    information.clear();
    // cout << endl << "Деконструктор Employee" << endl;
}
