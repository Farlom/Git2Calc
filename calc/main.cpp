#include <iostream>
#include <funcs.h>

using namespace std;

int main()
{
    float x1, x2; // x1 и x2 это слагаемые\множители
    char symbol; // символ, отвечающий за операцию



    char choice;


    do {
        bool bl = true;

        cin >> x1 >> symbol >> x2;

        if (symbol != '+' and symbol != '-' and symbol != '/' and symbol != '*'){
            do {
                cout << "this symbol is not ok, write new symbol: ";
                cin >> x1 >> symbol >> x2;

            } while ((symbol != '+' and symbol != '-' and symbol != '/' and symbol != '*'));

        }

        bl = true;
        switch(symbol)
        {
        case '+':
            cout << x1 << ' ' << symbol << ' ' << x2 << " = " << Sum(x1, x2);
            break;

        case '-':
            cout << x1 << ' ' << symbol << ' ' << x2 << " = " << Substract(x1, x2);
            break;

        case '/':
            cout << x1 << ' ' << symbol << ' ' << x2 << " = " << Division(x1, x2);
            break;

        case '*':
            cout << x1 << ' ' << symbol << ' ' << x2 << " = " << Multiply(x1, x2);
            break;

        }
        cout << "\nIf you want to continue enter Y: ";
        cin >> choice;

    } while (choice == 'Y' or choice == 'y');

}

