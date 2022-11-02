#include <iostream>

using namespace std;

int main()
{
    float x1, x2; // x1 и x2 это слагаемые\множители
    char symbol; // символ, отвечающий за операцию

    cin >> x1 >> symbol >> x2;

    //feature сделать проверку символа

    switch(symbol)
    {
    case '+':
        cout << 'Функция в разработке';

    case '-':
        cout << 'Функция в разработке';

    case '/':
        cout << 'Функция в разработке';

    case '*':
        cout << 'Функция в разработке';
    }
}

