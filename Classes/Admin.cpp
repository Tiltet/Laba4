#pragma once
#include <iostream>
#include "Admin.h"

using namespace std;

// ВИРТУАЛЬНАЯ ФУНКЦИЯ ДЛЯ ВЫВОДА ПРОЕКТОВ Admin
void Admin::print_all_user_project()
{
    return;
}
// ВИРТУАЛЬНАЯ ФУНКЦИЯ ДЛЯ ВЫВОДА ПРОЕКТОВ Admin

// ТЕСТОВАЯ ВИРТУАЛЬНАЯ ФУНКЦИЯ Admin
void Admin::function_user()
{
    cout << endl
         << "Admin" << endl;
    return;
}
// ТЕСТОВАЯ ВИРТУАЛЬНАЯ ФУНКЦИЯ Admin

// ВИРТУАЛЬНАЯ ФУНКЦИЯ МЕНЮ Admin
void Admin::menu()
{
    cout << endl
         << "Admin menu" << endl;

    int change = 0;

    while (change != 5)
    {
        cout << endl
             << "Welcome, Goodle Admin" << endl
             << "1 - print all Google projects" << endl
             << "2 - change developer status" << endl
             << "3 - change test status" << endl
             << "4 - change developer" << endl
             << "5 - exit" << endl;

        cin >> change;

        while (change < 1 || change > 4)
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
        default:
            cout << "Goodbye!!!";
            break;
        }
    }

    return;
}
// ВИРТУАЛЬНАЯ ФУНКЦИЯ МЕНЮ Admin