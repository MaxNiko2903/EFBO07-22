#include "Figure.h"
int main()
{
	setlocale(0, "");
	Figure mas[3];
	for (int i = 0; i < 3; i++)
	{
		float x1, x2, x3, x4, y1, y2, y3, y4;
		cout << "Введите координаты " << i + 1 << "-го четырёхугольника: " << endl;
		for (int i = 0; i < 4; i++)
		{
			if (i == 0)
			{
				cout << "Введите координаты точки А(x,y) через пробел: ";
				cin >> x1 >> y1;
			}
			else if (i == 1)
			{
				cout << "Введите координаты точки B(x,y) через пробел: ";
				cin >> x2 >> y2;
			}
			else if (i == 2)
			{
				cout << "Введите координаты точки C(x,y) через пробел: ";
				cin >> x3 >> y3;
			}
			else if (i == 3)
			{
				cout << "Введите координаты точки D(x,y) через пробел: ";
				cin >> x4 >> y4;
			}
		}
		mas[i].figure(x1, x2, x3, x4, y1, y2, y3, y4);
		if (mas[i].figure(x1, x2, x3, x4, y1, y2, y3, y4) == false)
		{
			cout << "Четырёхугольника с такими координатами не существует, попробуйте ещё" << endl;
			i--;
		}
		else
		{
			mas[i].show();
			cout << endl;
		}
	}
	return 0;
}