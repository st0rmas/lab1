#include <iostream>
#include <cstring>

#include "CMenu.h"
#include "MenuItem.h"

using namespace std;
using namespace SAR;

void func1(){
    cout << sqrt(25) << endl;
}
void func2() {
    string username;
    cout << "Введите ваше имя: ";
    cin >> username;
    cout << endl;
    cout << "Здарова, " << username << endl;
}
void func3() {
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    setlocale(LC_ALL, "ru");
    MenuItem items[3]{ 
        MenuItem("Посчитать корень из 25", func1),
        MenuItem("Поздороваться с пользователем", func2),
        MenuItem("Нарисовать елочку", func3)
    };

    CMenu menu("Вывод меню", items);

    menu.start();
    return 0;
    
}

