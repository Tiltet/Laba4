#pragma once
#include <iostream>
#include <vector>
#include "Employee.cpp"
#include "Developer.cpp"
#include "Tester.cpp"

using namespace std;

struct message
{
    string sender;
    string text;
    string recipient;
};

class Company
{
private:
    vector<message> messages;
    vector<company_info> info;
public:

    Company();

    void print_information(); // выводит всю информацию о компании
    void print_messages(); // выводит все сообщения компании

    void menu(int number); // меню выбора класса

    ~Company();
};

Company::Company()
{
    company_info project;

    project.id = 111111;
    project.name = "Dota 2";

    info.push_back(project);

    project.id = 222222;
    project.name = "Counter-Strike 2";

    info.push_back(project);

    message information;
    information.sender = "Director";
    information.recipient = "All";
    information.text = "Thank you for your conscientious work at Google company";

    messages.push_back(information);
}

Company::~Company()
{

}
