#include "Point.h"

const float PI = 3.14;

Point::Point(int X, int Y)  //constructor
{
	x = X;
	y = Y;
}


Point::Point(const Point& p)
{
	x = p.getX();
	y = p.getY();
}

void  Point::print() const
{
	cout << "(" << x << "," << y << ")\n";

}

//////////////////////////////////////////////////////

float Circle::area()const
{
	return PI*radius*radius;
}

float Circle::hekef()const
{
	return 2 * PI*radius;
}

int Circle::check(Point P)const
{
	float d;
	int a1 = (centerPoint.getX() - P.getX());
	int b1 = (centerPoint.getY() - P.getY());
	d = sqrt(a1*a1 + b1*b1);   //this is the way we need to do that calculation

	if (d<radius)
		return -1;
	if (d>radius)
		return 1;
	else
		return 0;
}

Circle::Circle(Point P, int radius1)             //constructor
{
	centerPoint = P;
	radius = radius1;
}

Circle::Circle(){}
