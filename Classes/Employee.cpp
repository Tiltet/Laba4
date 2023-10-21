#pragma once
#include "Employee.h"

using namespace std;

// ФУНКЦИЯ ВЫВОДА ОДНОГО ПРОЕКТА
void Employee::print_project(projects item)
{
    cout << "Project ID - " << item.id << endl;
    cout << "Project NAME - " << item.name << endl;
    cout << "Project DEVELOPER NAME - " << item.developer_name << endl;
    cout << "Project MENEGER NAME - " << item.meneger_name << endl;
    cout << "Project TESTER NAME - " << item.tester_name << endl;
    if (item.test_status == true)
    {
        cout << "Project TEST STATUS - testing" << endl;
    }
    else
    {
        cout << "Project TEST STATUS - no testing" << endl;
    }

    switch (item.developer_status)
    {
    case 1:
        cout << "Project DEVELOPER STATUS - not being developed" << endl;
        break;
    case 2:
        cout << "Project DEVELOPER STATUS - is being developed" << endl;
        break;
    case 3:
        cout << "Project DEVELOPER STATUS - developed" << endl;
        break;
    case 4:
        cout << "Project DEVELOPER STATUS - frozen" << endl;
        break;
    default:
        cout << "Project DEVELOPER STATUS - no status" << endl;
        break;
    }
    cout << endl;
}
// ФУНКЦИЯ ВЫВОДА ОДНОГО ПРОЕКТА

// ФУНКЦИЯ ДЛЯ ВЫВОДА ВСЕХ ПРОЕКТОВ
void Employee::print_all_project()
{
    system("clear");
    int number = 1;
    for (auto item : information)
    {
        cout << "Project №" << number << endl;
        print_project(item);
        cout << endl;
        number++;
    }
}
// ФУНКЦИЯ ДЛЯ ВЫВОДА ВСЕХ ПРОЕКТОВ

// ФУНКЦИЯ ДОБАВЛЕНИЯ НОВОГО ПРОЕКТА
/* void Employee::add_new_project()
{
    system("clear");
    projects project;

    cout << "\nEnter Project ID(100000 - 999999): ";
    cin >> project.id;
    while (project.id > 999999 || project.id < 100000)
    {
        cout << "\nError. Enter again(100000 - 999999): ";
        cin >> project.id;
    }

    cout << "\nEnter Project NAME: ";
    rewind(stdin);
    cin >> project.name;

    cout << "\nEnter project DEVELOPER NAME: ";
    rewind(stdin);
    getline(cin, project.developer_name);

    cout << "\nEnter Project MENEGER NAME: ";
    rewind(stdin);
    getline(cin, project.meneger_name);

    // ЛОМАЕТСЯ !!!!
    cout << "\nEnter Project TEST STATUS(0 - no testing, 1 - testing): ";
    cin >> project.test_status;
    while (project.test_status != true && project.test_status != false)
    {
        cout << "Error. Enter again: ";
        cin >> project.test_status;
    }
    // ЛОМАЕТСЯ !!!!

    cout << "\nDEVELOPER STATUS:" << endl
         << "1 - not being developed" << endl
         << "2 - is being developed" << endl
         << "3 - developed" << endl
         << "4 - frozen" << endl;

    cin >> project.developer_status;
    while (project.developer_status > 4 || project.developer_status < 1)
    {
        cout << "\nDEVELOPER STATUS:" << endl
             << "1 - not being developed" << endl
             << "2 - is being developed" << endl
             << "3 - developed" << endl
             << "4 - frozen" << endl;
        cout << "Error. Enter again: ";

        cin >> project.developer_status;
    }

    this->information.push_back(project);
} */
// ФУНКЦИЯ ДОБАВЛЕНИЯ НОВОГО ПРОЕКТА