#include "#COMPANY.h"

using namespace std;

// ВЫВОДИТ ВСЮ ИНФОРМАЦИЮ О КОМПАНИИ
void Company::print_information()
{
    for (auto item : info)
    {
        cout << "Project ID - " << item.id << endl;
        cout << "Project NAME - " << item.name << endl;
        cout << endl;
    }
    return;
}
// ВЫВОДИТ ВСЮ ИНФОРМАЦИЮ О КОМПАНИИ



// ВЫВОДИТ ВСЕ СООБЩЕНИЯ КОМПАНИИ
void Company::print_messages()
{
    for (auto item : messages)
    {
        cout << "Message from " << item.sender << endl;
        cout << item.text << endl;
    }
    return;
}
// ВЫВОДИТ ВСЕ СООБЩЕНИЯ КОМПАНИИ



// МЕНЮ ВЫБОРА КЛАССА
void Company::menu(int number, vector<company_info> info)
{
    if (number == 1)
    {
        cout << "Вы зашли в аккаунт Developer" << endl;

        Developer User;
        User.developer_function();

        User.menu(info);

        // this->info = User.change_project_name(this->info);
        // this->print_information();
    }
    else if (number == 2)
    {
        cout << "Вы зашли в аккаунт Tester" << endl;

        Tester User;
        User.function_test();
    }
}
// МЕНЮ ВЫБОРА КЛАССА