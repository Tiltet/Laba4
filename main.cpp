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

    // Admin admin;
    // Director director;
    // Meneger meneger;
    // Tester tester;
 
    // admin.test_function();
    // developer.test_function();
    // director.function_test();
    // meneger.funtcion_test();
    // tester.funtcion_test();

    Company google;

    google.menu(1);

    // google.print_messages();

    return 0;
}