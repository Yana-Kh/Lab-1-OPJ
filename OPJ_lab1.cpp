
#include <iostream>
using namespace std;

int main()
{
    setlocale(0,"");

    int staj, age;
    string work, name;

    cout << "Введите стаж и возраст (лет)" << endl;
    cin >> staj >> age;
    cout << "Введите место работ, имя" << endl;
    cin >> work >> name;
    
    cout << "Изменения сохранены";
    system("pause");
}


