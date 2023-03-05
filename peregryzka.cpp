#include "eq2.h"
int main()
{
    setlocale(0, "");
    double a, b, c;
    while (true)
    {
        system("cls");
        cout << "Ax ^ 2 + Bx + C = 0"<<endl;
        cout << "A:";
        cin >> a;
        cout << "B:";
        cin >> b;
        cout << "C:";
        cin >> c;
        system("cls");
        cout << a << "x ^ 2 + " << b << "x + " << c << " =0" <<endl;
        eq2 exmpl(a, b, c);
        cout << "Что по корням: ";
        if (exmpl.find_X() == 0)
        {
            cout << "Значение квадратного многочлена: " << exmpl.find_Y(6) << endl;
        }
        else
        {
            cout << endl << "Значение квадратного многочлена: " << exmpl.find_Y(6) << endl;
        }
        exmpl.set(a1, b1, c1, a2, b2, c2);
        cout << "sum1 = " << a1 << "sum2 = " << b1 << "sum3 = " << c1 << endl;
        system("pause");
    }

    return 0;
}
