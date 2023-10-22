#pragma once
#include <iostream>
#include "Meneger.h"

using namespace std;

// ВИРТУАЛЬНАЯ ФУНКЦИЯ ДЛЯ ВЫВОДА ПРОЕКТОВ Meneger
void Meneger::print_all_user_project()
{
    cout << "Meneger: " << this->name << endl
         << endl;

    for (auto item : information)
    {
        if (item.meneger_name == this->name)
        {
            this->print_project(item);
        }
    }
    return;
}
// ВИРТУАЛЬНАЯ ФУНКЦИЯ ДЛЯ ВЫВОДА ПРОЕКТОВ Meneger

// ТЕСТОВАЯ ВИРТУАЛЬНАЯ ФУНКЦИЯ Meneger
void Meneger::function_user()
{
    cout << "Meneger" << endl;
    return;
}
// ТЕСТОВАЯ ВИРТУАЛЬНАЯ ФУНКЦИЯ Meneger

// ВИРТУАЛЬНАЯ ФУНКЦИЯ МЕНЮ Meneger
void Meneger::menu()
{
    int change = 0;

    while (change != 4)
    {
        cout << endl
             << "Welcome, Goodle Meneger" << endl
             << "1 - print all Google projects" << endl
             << "2 - print your projects" << endl
             << "3 - change developer" << endl
             << "4 - exit" << endl;

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
            this->print_all_user_project();
            break;
        case 3:
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
// ВИРТУАЛЬНАЯ ФУНКЦИЯ МЕНЮ Meneger

// ФУНКЦИЯ ИЗМЕННЕНИЯ Meneger
void Meneger::change_developer()
{
    bool check = false;
    int id;
    cout << "Enter Project ID: ";
    cin >> id;

    int number = 0;
    for (auto item : information)
    {
        if (item.id == id && (item.meneger_name == this->name || this->name == "admin"))
        {
            cout << endl
                 << "Project found" << endl;

            cout << endl << "Enter new Developer name: ";
            cin >> information[number].developer_name;
            break;
        }
        number++;
    }
    if (check == false)
    {
        cout << endl
             << "Project not found" << endl;
    }
    else
    {
        cout << endl
             << "Project found" << endl;
    }
}
// ФУНКЦИЯ ИЗМЕННЕНИЯ Meneger