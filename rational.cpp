#include "rational.h" 
rational::rational(int a1, int b1)
{
	this->a = a1;
	this->b = b1;
	if (b == 0)
	{
		flag = true;
	}
	else
	{
		if (a > b and (!(a % b == 0) or !(b % a == 0)))
		{
			int e = 0;
			float f = 0;
			e = a;
			f = b;
			c = a / b;
			d = e / f;
			flag1 = true;
		}
		else if (a == b) { flag1 = false; }
		else if (a % b == 0)
		{
			a = a / b;
			b = 1;
			flag1 = false;
		}
		else if (b % a == 0)
		{
			b = b / a;
			a = 1;
			flag1 = false;
		}
		flag = false;
	}
}
void rational::set(int a1, int b1)
{
	this->a = a1;
	this->b = b1;
}
void rational::show()
{
	if (flag1 == false and flag == true)
	{
		cout << "Знаменатель этой дроби равен 0" << endl;
		flag = false;
	}
	else if (flag1 == false and flag == false and (a == b))
	{
		cout << "1" << endl;
	}
	else if ( flag1 == true and flag == false)
	{
		if ( d == 0)
		{
			cout << c << endl;
		}
		else if ( d != 0)
		{
			cout  << d << endl;
		}
	}
	else if (flag1 == false and flag == false and !(a == b) and !(a == 0))
	{
		cout << a << "/" << b << endl;
	}
	else if (flag1 == false and flag == false and a == 0)
	{
		cout << a << endl;
	}
}
rational::rational(){}
