#include <cmath>
#include <iostream>
using namespace std;


class Point
{
	int x;
	int y;
	
	
public:
	Point(int X = 0, int Y = 0);  //constructor
	Point(const Point& p);   //copy constructor
	int getX() const{ return x; }
	int getY() const{ return y; }
	void setX(int X){ x = X; }
	void setY(int Y){ y = Y; }

	void print() const;

};



class Circle
{
	Point centerPoint;
	int radius;

public:
	Circle(); //default constructor (not using copy ctor) Circle a;
	Circle(Point, int);// (yes using copy ctor) Circle a(p1,4)

	float area()const;
	float hekef()const;

	int check(Point P)const;

	int getRadius() const{ return radius; }
	void setRadius(int r){ radius = r; }
	void setPoint(int x, int y){ centerPoint.setX(x); centerPoint.setY(y); }

	void PrintPoint(){ cout << "(" << centerPoint.getX() << "," << centerPoint.getY() << ")"; }
};





