#include "rational.h"
int main()
{
    setlocale(0,"");
    int n, verx, niz;
    while (true)
    {
        system("cls");
        cout << "Введите количество дробей: ";
        cin >> n;
        if (n == 0)
        {
            return false;
        }
        rational* mas = new rational[n];
        system("cls");
        for (int i = 0; i < n; i++)
        {
            cout << "Числитель: ";
            cin >> verx;
            cout << "Знаменатель: ";
            cin >> niz;
            mas[i].set(verx, niz);
            mas[i] = rational(verx, niz);
            system("cls"); 
        }
        for (int i = 0; i < n; i++)
        {
            mas[i].show();
        }
        delete[]mas;
        system("pause");
    }
    return 0;
}
