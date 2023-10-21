#pragma once
#include <iostream>
#include "Developer.h"

using namespace std;

// ВИРТУАЛЬНАЯ ФУНКЦИЯ ДЛЯ ВЫВОДА ПРОЕКТОВ Developer
void Developer::print_all_user_project()
{
    cout << "Developer: " << this->name << endl
         << endl;

    for (auto item : information)
    {
        if (item.developer_name == this->name)
        {
            this->print_project(item);
        }
    }
}
// ВИРТУАЛЬНАЯ ФУНКЦИЯ ДЛЯ ВЫВОДА ПРОЕКТОВ Developer

// ВИРТУАЛЬНАЯ ФУНКЦИЯ МЕНЮ Developer
void Developer::menu()
{
    int change = 0;

    while (change != 4)
    {
        cout << "Welcome, Goodle Developer" << endl
             << "1 - print all Google projects" << endl
             << "2 - print your projects" << endl
             << "3 - change developer status" << endl
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
            this->change_developer_status();
            break;
        default:
            cout << "Goodbye!!!";
            break;
        }
    }

    return;
}
// ВИРТУАЛЬНАЯ ФУНКЦИЯ МЕНЮ Developer

// ТЕСТОВАЯ ВИРТУАЛЬНАЯ ФУНКЦИЯ Developer
void Developer::function_user()
{
    cout << "Developer" << endl;
    return;
}
// ТЕСТОВАЯ ВИРТУАЛЬНАЯ ФУНКЦИЯ Developer

// ФУНКЦИЯ ИЗМЕННЕНИЯ developer_status
void Developer::change_developer_status()
{
    int id;
    cout << "Enter Project ID: ";
    cin >> id;

    int number = 0;
    for (auto item : information)
    {
        if (item.id == id && item.developer_name == this->name)
        {
            cout << endl
                 << "Project found" << endl;

            cout << "\nDEVELOPER STATUS:" << endl
                 << "1 - not being developed" << endl
                 << "2 - is being developed" << endl
                 << "3 - developed" << endl
                 << "4 - frozen" << endl
                 << "Enter: ";

            cin >> information[number].developer_status;
            while (information[number].developer_status > 4 || information[number].developer_status < 1)
            {
                cout << "\nDEVELOPER STATUS:" << endl
                     << "1 - not being developed" << endl
                     << "2 - is being developed" << endl
                     << "3 - developed" << endl
                     << "4 - frozen" << endl;
                cout << "Error. Enter again: ";

                cin >> information[number].developer_status;
            }
        }
        number++;
    }
}
// ФУНКЦИЯ ИЗМЕННЕНИЯ developer_status

// ФУНКЦИЯ УДАЛЕНИЯ ПРОЕКТА
/* void Developer::delete_project()
{
    int id, number = 0;
    bool check = false;

    cout << "Enter project id - ";
    cin >> id;

    for (auto item : information)
    {
        if (item.developer_name == this->name && item.id == id)
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
} */
// ФУНКЦИЯ УДАЛЕНИЯ ПРОЕКТА