#include "Figure.h"
float Figure::figure(float x1, float x2, float x3, float x4, float y1, float y2, float y3, float y4)
{
	float a, b, c, d;
	this->x1 = x1;
	this->x2 = x2;
	this->x3 = x3;
	this->x4 = x4;
	a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	b = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	c = sqrt(pow(x4 - x3, 2) + pow(y4 - y3, 2));
	d = sqrt(pow(x1 - x4, 2) + pow(y1 - y4, 2));
	if ((a >= b + c + d) or (b >= a + c + d) or (c >= b + a + d) or (d >= b + c + a))
	{
		return false;
	}
	else
	{
		P = a + b + c + d;
		if (is_square() == true or is_prug() == true)
		{
			S = a * b;
		}
		else
		{
			float ac = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
			float bd = sqrt(pow(x4 - x2, 2) + pow(y4 - y2, 2));
			S = (ac * bd) / 2;
		}
	}
}
void Figure::show()
{
	if (is_square() == true)
	{
		cout << "Этот четырёхугольник квадрат (квадрат - это частный случай ромба)" << endl;
	}
	else if (is_prug() == true)
	{
		cout << "Этот четырёхугольник прямоугольник" << endl;
	}

	else if (is_romb() == true)
	{
		cout << "Этот четырёхугольник ромб" << endl;
	}
	if (is_in_circle() == true)
	{
		cout << "В этот четырёхугольник можно вписать в круг" << endl;
	}
	else if (is_in_circle() == false)
	{
		cout << "В этот четырёхугольник нельзя вписать в круг" << endl;
	}
	if (is_out_circle() == true)
	{
		cout << "Вокруг этого четырёхугольника можно описать окружность" << endl;
	}
	else if (is_out_circle() == false)
	{
		cout << "Вокруг этого четырёхугольника нельзя описать окружность" << endl;
	}
	cout << "Пириметр: " << P << endl;
	cout << "Площадь: " << S << endl;
}
bool Figure::is_prug()
{
	float ba_x = x1 - x2;
	float ba_y = y1 - y2;
	float bc_x = x3 - x2;
	float bc_y = y3 - y2;

	float da_x = x1 - x4;
	float da_y = y1 - y4;
	float dc_x = x3 - x4;
	float dc_y = y3 - y4;

	float cb_x = x2 - x3;
	float cb_y = y2 - y3;
	float cd_x = x4 - x3;
	float cd_y = y4 - y3;

	float a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	float b = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	float c = sqrt(pow(x4 - x3, 2) + pow(y4 - y3, 2));
	float d = sqrt(pow(x1 - x4, 2) + pow(y1 - y4, 2));

	if (((((ba_x * bc_x) + (ba_y * bc_y)) == 0) and (((da_x * dc_x) + (da_y * dc_y)) == 0) and (((cb_x * cd_x) + (cb_y * cd_y)) == 0)) and ((a == c) and (b == d)))
	{
		return true;
	}
}
bool Figure::is_square()
{
	float ba_x = x1 - x2;
	float ba_y = y1 - y2;
	float bc_x = x3 - x2;
	float bc_y = y3 - y2;

	float da_x = x1 - x4;
	float da_y = y1 - y4;
	float dc_x = x3 - x4;
	float dc_y = y3 - y4;

	float cb_x = x2 - x3;
	float cb_y = y2 - y3;
	float cd_x = x4 - x3;
	float cd_y = y4 - y3;

	float a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	float b = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	float c = sqrt(pow(x4 - x3, 2) + pow(y4 - y3, 2));
	float d = sqrt(pow(x1 - x4, 2) + pow(y1 - y4, 2));
	if ((a == b == c == d) and ((((ba_x * bc_x) + (ba_y * bc_y)) == 0) and (((da_x * dc_x) + (da_y * dc_y)) == 0) and (((cb_x * cd_x) + (cb_y * cd_y)) == 0)))
	{
		return true;
	}
}
bool Figure::is_romb()
{
	float ba_x = x1 - x2;
	float ba_y = y1 - y2;
	float bc_x = x3 - x2;
	float bc_y = y3 - y2;

	float da_x = x1 - x4;
	float da_y = y1 - y4;
	float dc_x = x3 - x4;
	float dc_y = y3 - y4;

	float a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	float b = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	float c = sqrt(pow(x4 - x3, 2) + pow(y4 - y3, 2));
	float d = sqrt(pow(x1 - x4, 2) + pow(y1 - y4, 2));
	if (((a == c) and (b == d)) and ((((ba_x * bc_x) + (ba_y * bc_y))) == (((da_x * dc_x) + (da_y * dc_y)))))
	{
		return true;
	}
}
bool Figure::is_in_circle()
{
	if ((is_square() == true) or (is_romb() == true))
	{
		return true;
	}
	else
	{
		return false;
	}

}
bool Figure::is_out_circle()
{
	float a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	float b = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	float c = sqrt(pow(x4 - x3, 2) + pow(y4 - y3, 2));
	float d = sqrt(pow(x1 - x4, 2) + pow(y1 - y4, 2));
	float ac = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
	float bd = sqrt(pow(x4 - x2, 2) + pow(y4 - y2, 2));
	if (ac * bd == a * c + b * d)
	{
		return true;
	}
	else
	{
		return false;
	}
}