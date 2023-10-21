#include <iostream>
#include "Classes/#COMPANY.cpp"
#include "Classes/Employee.cpp"
#include "Classes/Developer.cpp"
#include "Classes/Admin.cpp"
#include "Classes/Director.cpp"
#include "Classes/Meneger.cpp"
#include "Classes/Tester.cpp"

using namespace std;

int main()
{
    system("clear");
    vector<company_info> info;

    Company google;

    int number;

    cout << "Enter number" << endl
         << "1 - developer" << endl
         << "2 - tester" << endl;

    cin >> number;

    google.menu(number, info);

    return 0;
}