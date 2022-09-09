
#include <iostream>
using namespace std;

int main()
{
    setlocale(0,"");

    int staj, age;
    string work, name;

    cout << "Вас приветствует сервис по подбору работы!" << endl;
    cout << "Пожжалуйста, введите данные для заполнения вашего аккаунта" << endl;

    cout << "Введите стаж (лет)" << endl;
    cin >> staj;
    cout << "Введите возраст (лет)" << endl;
    cin >> age;
    cout << "Введите место работы" << endl;
    cin >> work;
    cout << "Введите имя" << endl;
    cin >> name;

    cout << "Изменения сохранены";
    system("pause");
}


