#include <iostream>
#include "Classes/Employee.cpp"
#include "Classes/Admin.cpp"
#include "Classes/Developer.cpp"
#include "Classes/Director.cpp"
#include "Classes/Meneger.cpp"
#include "Classes/Tester.cpp"

using namespace std;

int main()
{    
    Employee employee;
    Admin admin;
    Developer developer;
    Director director;
    Meneger meneger;
    Tester tester;

    employee.print_info();
    admin.test_function();
    developer.test_function();
    director.function_test();
    meneger.funtcion_test();
    tester.funtcion_test();

    return 0;
}