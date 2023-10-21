#include <iostream>
#include <vector>
#include <string>

#include "Classes/Employee.cpp"
#include "Classes/Developer.cpp"
#include "Classes/Meneger.cpp"
#include "Classes/Tester.cpp"
#include "Classes/Admin.cpp"

using namespace std;

void main_menu(string login, string password);

int main()
{
    system("clear");
    string login = "tester";
    string password = "tester";

    // cout << "Enter your Login: ";
    // cin >> login;

    // cout << "Enter your Password: ";
    // cin >> password;
    // rewind(stdin);

    main_menu(login, password);

    return 0;
}

void main_menu(string login, string password)
{
    bool check = true;
    string name;

    while (check)
    {
        if (login == "developer" || password == "developer")
        {
            cout << "Enter your name: ";
            getline(cin, name);

            Developer developer(name);
            break;
        }
        else if (login == "tester" || password == "tester")
        {
            cout << "Enter your name: ";
            getline(cin, name);

            Tester tester(name);
            break;
        }
        else if (login == "meneger" || password == "meneger")
        {
        }
        else if (login == "admin" || password == "admin")
        {
        }
        else if (login == "director" || password == "director")
        {
        }
        else
        {
            cout << "Wrong Login or Password!!!" << endl;
        }
    }
}
