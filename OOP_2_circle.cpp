﻿#include "Circle.h"
int main()
{
    setlocale(0, "");
	Circle mas[3];
	for (int i = 0; i < 3; i++)
	{
		float r, x, y;
		cout << "Введите радиус, координаты центра " << i + 1 << "-й окружности через пробел : ";
		cin >> r >> x >> y;
		mas[i].set_circle(r, x, y);
	}
	for (int i = 0; i < 3; i++) {
		float x, y;
		cout << "Введите координаты центра " << i + 1 << "-й окружности через пробел : ";
		cin >> x >> y;
		if (mas[i].check_circle(x, y)) cout << "Окружность пересекается с " << i + 1 << "-й окружностью" << endl;
		else cout << "Окружность не пересекается с " << i + 1 << "-й окружностью" << endl;
	}
	for (int i = 0; i < 3; i++)
	{
		float a, b, c;
		cout << "Введите стороны " << i + 1 << "-го треугольника через пробел : ";
		cin >> a >> b >> c;
		if (mas[i].triangle_around(a, b, c)) cout << "Треугольник описывается окружностью" << endl;
		else cout << "Треугольник не описывается окружностью" << endl;
		if (mas[i].triangle_in(a, b, c)) cout << "Треугольник вписывается в окружность" << endl;
		else cout << "Треугольник не вписывается в окружность" << endl;
	}
    return 0;
}