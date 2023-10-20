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



// Виртуальная функция Employee для вывода все проектов сотрудника
void Developer::print_your_projects()
{
    cout << "print_your_projects" << endl;
    return;
}
// Виртуальная функция Employee для вывода все проектов сотрудника



 // виртуальная функция Employee для меню
 void Developer::menu()
 {
    cout << "menu" << endl;
    return;
 }
// виртуальная функция Employee для меню



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