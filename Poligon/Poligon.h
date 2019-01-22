#include <cmath>
#include <iostream>
using namespace std;

class Point
{
	float x;
	float y;
public:
	Point(float X = 0, float Y = 0);  //constructor
	Point(const Point& p);   //copy constructor

	float getX() const{ return x; }
	float getY() const{ return y; }
	void setX(float X){ x = X; }
	void setY(float Y){ y = Y; }
	float distance(const Point &p)const;
	void print();
	friend istream& operator>>(istream&, Point&);

};

class Poligon
{
	int _num_Kodkodim;
	Point* p_array;


public:
	Poligon(int num);
	Poligon(const Poligon &);
	~Poligon();
	float hekef()const;
};