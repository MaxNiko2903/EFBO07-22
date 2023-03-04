#include "eq2.h"
eq2::eq2(double a1, double b1, double c1)
{
    a = a1; b = b1; c = c1;
    D = b * b - 4 * a * c;
}


void eq2::set(double a1, double b1, double c1)
{
    a = a1; b = b1; c = c1;
    D = b * b - 4 * a * c;
}
double eq2::find_X()
{
    if (D < 0)
    {
        cout << "Корней нет" << endl;
        return 0;
    }
    else 
    {
        if (D == 0)
        {
            cout << "Корень один - " ;
            double x = (-b - sqrt(D)) / (2 * a);
            cout << x;
            return x;
        }
        else
        {
            cout << "Корней 2, наибольший - " ;
            double x1 = (-b - sqrt(D)) / (2 * a);
            double x2 = (-b + sqrt(D)) / (2 * a);
            if (x1 > x2)
            {
                cout << x1;
                return x1;
            }
            else
            {
                cout << x2;
                return x2;
            }
        }
    }
}
double eq2::find_Y(double x1)
{
    return a * x1 * x1 + b * x1 + c;
}
double eq2::find_Y(double a, double b, double c)
{
    return a + b + c;
}