#include <iostream>
#include <vector>
#include <string>

#include "Classes/Employee.cpp"
#include "Classes/Developer.cpp"
#include "Classes/Meneger.cpp"
#include "Classes/Tester.cpp"
#include "Classes/Admin.cpp"
#include "Classes/Director.cpp"

using namespace std;

void main_menu(string login, string password);

int main()
{
    system("clear");
    string login;
    string password;

    cout << "Enter your Login: ";
    cin >> login;

    cout << "Enter your Password: ";
    cin >> password;
    rewind(stdin);

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
            cout << endl << "Developer" << endl;
            cout << "Enter your name: ";
            getline(cin, name);

            Developer user(name);
            user.menu();
            break;
        }
        else if (login == "tester" || password == "tester")
        {
            cout << endl << "Tester" << endl;
            cout << "Enter your name: ";
            getline(cin, name);

            Tester user(name);
            user.menu();
            break;
        }
        else if (login == "meneger" || password == "meneger")
        {
            cout << endl << "Meneger" << endl;
            cout << "Enter your name: ";
            getline(cin, name);

            Meneger user(name);
            user.menu();
            break;
        }
        else if (login == "admin" || password == "admin")
        {
            cout << endl << "Admin" << endl;
            name = "admin";

            Admin user(name);
            user.menu();
            break;
        }
        else if (login == "director" || password == "director")
        {
            cout << endl << "Director" << endl;
            name = "admin";

            Director user(name);
            user.menu();
            break;
        }
        else
        {
            cout << "Wrong Login or Password!!!" << endl;
        }
    }
}
