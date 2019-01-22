#include "Poligon.h"

Point::Point(float X, float Y)  //constructor
{
	x = X;
	y = Y;
}


Point::Point(const Point& p)
{
	x = p.getX();
	y = p.getY();
}

void Point::print()
{
	cout << "(" << x << "," << y << ")\n";
}

float  Point::distance(const Point &p)const
{
	return (sqrt(pow((x - p.x), 2) + pow((y - p.y), 2)));
}
istream& operator>>(istream& c_in, Point& p)
{
	c_in >> p.x;
	c_in >> p.y;
	return c_in;
}




Poligon::Poligon(int num)
{
	_num_Kodkodim = num;
	p_array = new Point[_num_Kodkodim];
	Point p;
	//cout << "please insert" << _num_Kodkodim << " of kodkodim:\n";
	for (int i = 0; i <_num_Kodkodim; i++)
	{
		cin >> p;
		p_array[i] = p;
	}
}

Poligon::Poligon(const Poligon & p)
{
	p_array = new Point[p._num_Kodkodim];
	for (int i = 0; i <p._num_Kodkodim; i++)
	{
		p_array[i] = p.p_array[i];
	}
}

Poligon::~Poligon()
{
	cout << "DTOR\n";
	if (p_array)
		delete[] p_array;
}

float  Poligon::hekef()const
{
	int i = 0;
	float sum = 0;
	Point * t = p_array;
	for (; i < _num_Kodkodim - 1; i++)
	{
		sum += t[i].distance(t[i + 1]);

	}
	sum += t[0].distance(t[_num_Kodkodim - 1]);
	return sum;
}