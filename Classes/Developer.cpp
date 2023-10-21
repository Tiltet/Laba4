#pragma once
#include "Developer.h"

using namespace std;

// ВИРТУАЛЬНАЯ ФУНКЦИЯ Employee
void Developer::function_test()
{
    cout << "Developer virtual function" << endl;
    return;
}
// ВИРТУАЛЬНАЯ ФУНКЦИЯ Employee



// УНИКАЛЬНЫЙ ВЫВОД
void Developer::developer_function()
{
    cout << "Developer function" << endl;
}
// УНИКАЛЬНЫЙ ВЫВОД



// ВИРТУАЛЬНАЯ ФУНКЦИЯ Employee ДЛЯ ВЫВОДА ВСЕХ ПРОЕКТОВ СОТРУДНИКА
void Developer::print_your_projects()
{
    cout << "print_your_projects" << endl;
    return;
}
// ВИРТУАЛЬНАЯ ФУНКЦИЯ Employee ДЛЯ ВЫВОДА ВСЕХ ПРОЕКТОВ СОТРУДНИКА



// ВИРТУАЛЬНАЯ ФУНКЦИЯ Employee ДЛЯ МЕНЮ
vector<company_info> Developer::menu(vector<company_info> info)
{
    cout << "1 - print your project" << endl
         << "2 - change project name" << endl;

    int number;
    switch (number)
    {
    case 1:
        this->print_your_projects();
        break;
    case 2:
        this->change_project_name();
        break;
    default:
        break;
    }
}
// ВИРТУАЛЬНАЯ ФУНКЦИЯ Employee ДЛЯ МЕНЮ



// МЕНЯЕТ НАЗВАНИЕ ПРОЕКТА
vector<company_info> Developer::change_project_name(vector<company_info> info)
{
    int number = 0;
    for (auto item : info)
    {
        if (item.name == "Dota 2")
        {
            cout << "Find" << endl;
            info[number].name = "Doka 3";
            break;
        }
        number++;
    }
    return info;
}
// МЕНЯЕТ НАЗВАНИЕ ПРОЕКТА