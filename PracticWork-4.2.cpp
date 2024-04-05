#include <iostream>

using namespace std;

int main()
{
    int x, y, z;
    cout << "Проверка устного счёта!\n\n";
    cout << "Введите первое слогаемое: ";
    cin >> x;
    cout << "Введите второе слогаемое: ";
    cin >> y;
    cout << "Введите их сумму: ";
    cin >> z;
    cout << "----Проверяем результат----\n";
    if (z == x + y) {
        cout << "Верно!\n";
    }
    else {
        cout << "Нет, не верно! Правильный ответ: " << x + y << endl;
    }
    return 0;


}
