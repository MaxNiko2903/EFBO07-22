#include "Circle.h"
Circle::Circle(float r, float x, float y)
{
	radius = r;
	x_center = x;
	y_center = y;
}
Circle::Circle() 
{
	radius = 0;
	x_center = 0;
	y_center = 0;
}
void Circle::set_circle(float r, float x, float y)
{
	this->radius = r;
	this->x_center = x;
	this->y_center = y;
}
float Circle::sqaure(float a, float b, float c)
{
	float p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}
bool Circle::triangle_around(float a, float b, float c)
{
	if (a + b > c && a + c > b && b + c > a) return true;
	else return false;
}
bool Circle::triangle_in(float a, float b, float c)
{
	float s = sqaure(a, b, c);
	float calc_r = 2 * s / (a + b + c);
	if (calc_r <= this->radius) return true;
	else return false;
}
bool Circle::check_circle(float x_cntr, float y_cntr)
{
	float dist = sqrt(pow(x_cntr - this->x_center, 2) + pow(y_cntr - this->y_center, 2));
	if (dist <= this->radius) return true;
	else return false;
}