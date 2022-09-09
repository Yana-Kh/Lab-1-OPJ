
#include <iostream>
using namespace std;

int main()
{
    setlocale(0,"");

    int staj, age;
    string job, name;

    cout << "Введите стаж и возраст (лет)";
    cin >> staj >> age;
    cout << "Введите место работ, имя";
    cin >> job >> name;
    
    cout << "Изменения сохранены";
    system("pause");
}


