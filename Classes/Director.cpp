#pragma once
#include <iostream>
#include "Director.h"

using namespace std;

// ВИРТУАЛЬНАЯ ФУНКЦИЯ ДЛЯ ВЫВОДА ПРОЕКТОВ Director
void Director::print_all_user_project()
{
    return;
}
// ВИРТУАЛЬНАЯ ФУНКЦИЯ ДЛЯ ВЫВОДА ПРОЕКТОВ Director

// ВИРТУАЛЬНАЯ ФУНКЦИЯ МЕНЮ Director
void Director::menu()
{
    cout << endl
         << "Director menu" << endl;

    int change = 0;

    while (change != 7)
    {
        cout << endl
             << "Welcome, Goodle Director" << endl
             << "1 - print all Google projects" << endl
             << "2 - change developer status" << endl
             << "3 - change test status" << endl
             << "4 - change developer" << endl
             << "5 - add new project" << endl
             << "6 - delete project" << endl
             << "7 - exit" << endl;

        cin >> change;

        while (change < 1 || change > 7)
        {
            cout << "Error. Enter again" << endl;
            cin >> change;
        }

        switch (change)
        {
        case 1:
            system("clear");
            this->print_all_project();
            break;
        case 2:
            system("clear");
            this->change_developer_status();
            break;
        case 3:
            system("clear");
            this->change_test_status();
            break;
        case 4:
            system("clear");
            this->change_developer();
            break;
        case 5:
            system("clear");
            this->add_new_project();
            break;
        case 6:
            system("clear");
            this->delete_project();
            break;
        default:
            cout << "Goodbye!!!";
            break;
        }
    }

    return;
}
// ВИРТУАЛЬНАЯ ФУНКЦИЯ МЕНЮ Director

// ТЕСТОВАЯ ВИРТУАЛЬНАЯ ФУНКЦИЯ Director
void Director::function_user()
{
    cout << endl
         << "Director" << endl;
    return;
}
// ТЕСТОВАЯ ВИРТУАЛЬНАЯ ФУНКЦИЯ Director

// ФУНКЦИЯ ДОБАВЛЕНИЯ НОВОГО ПРОЕКТА
void Director::add_new_project()
{

}
// ФУНКЦИЯ ДОБАВЛЕНИЯ НОВОГО ПРОЕКТА

// ФУНКЦИЯ УДАЛЕНИЯ ПРОЕКТА
void Director::delete_project()
{
    int id, number = 0;
    bool check = false;

    cout << "Enter project id - ";
    cin >> id;

    for (auto item : information)
    {
        if (item.id == id && (this->name == "admin"))
        {
            this->information.erase(information.begin() + number);
            check = true;
        }
        number++;
    }

    if (check == false)
    {
        cout << "Project not found" << endl;
    }
    else
    {
        cout << "Project found" << endl;
    }

    return;
}
// ФУНКЦИЯ УДАЛЕНИЯ ПРОЕКТА