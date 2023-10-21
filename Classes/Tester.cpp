#pragma once
#include <iostream>
#include "Tester.h"

// ВИРТУАЛЬНАЯ ФУНКЦИЯ ДЛЯ ВЫВОДА ПРОЕКТОВ Tester
void Tester::print_all_user_project()
{
    cout << "Tester: " << this->name << endl
         << endl;

    for (auto item : information)
    {
        if (item.tester_name == this->name)
        {
            this->print_project(item);
        }
    }
}
// ВИРТУАЛЬНАЯ ФУНКЦИЯ ДЛЯ ВЫВОДА ПРОЕКТОВ Tester

// ТЕСТОВАЯ ВИРТУАЛЬНАЯ ФУНКЦИЯ Tester
void Tester::function_user()
{
    cout << "Tester" << endl;
    return;
}
// ТЕСТОВАЯ ВИРТУАЛЬНАЯ ФУНКЦИЯ Tester

// ВИРТУАЛЬНАЯ ФУНКЦИЯ МЕНЮ Tester
void Tester::menu()
{
    int change = 0;

    while (change != 4)
    {
        cout << endl
             << "Welcome, Goodle Tester" << endl
             << "1 - print all Google projects" << endl
             << "2 - print your projects" << endl
             << "3 - change test status" << endl
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
            this->change_test_status();
            break;
        default:
            cout << "Goodbye!!!";
            break;
        }
    }
    return;
}
// ВИРТУАЛЬНАЯ ФУНКЦИЯ МЕНЮ Tester

// ФУНКЦИЯ ИЗМЕНЕНИЯ test_status
void Tester::change_test_status()
{
    int id, test_status;
    cout << "Enter Project ID: ";
    cin >> id;

    int number = 0;
    for (auto item : information)
    {
        if (item.id == id && item.tester_name == this->name)
        {
            cout << endl
                 << "Project found" << endl;

            cout << "\nTEST STATUS:" << endl
                 << "0 - not testing" << endl
                 << "1 - testing" << endl;

            cin >> test_status;
            while (test_status != 0 && test_status != 1)
            {
                cout << "\nTEST STATUS:" << endl
                     << "0 - no testing" << endl
                     << "1 - testing" << endl;

                cout << "Error. Enter again: ";

                cin >> test_status;
            }

            if (test_status == 0)
            {
                information[number].test_status = false;
            }
            else
            {
                information[number].test_status = true;
            }
        }
        else
        {
            cout << "Project not found" << endl;
        }
        number++;
    }
}

// ФУНКЦИЯ ИЗМЕНЕНИЯ test_status
