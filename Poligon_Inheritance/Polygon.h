

class Polygon
{
protected:
	int numSides;//מס הצלעות
	long *sides;// מערך בגודל מס הצלעות המכיל את אורכי צלעות המצולע. 

public:

	Polygon(int numSides1=0);
	Polygon(const Polygon &temp);//copy constructor
	~Polygon(){if(sides) delete[]sides; sides=NULL;}//destructor
	int getNumSides();
	void getSides();
	long hekef();


	bool operator==(Polygon &poly);

};


class Rectangle: public Polygon//derived class
{
	Rectangle(const Rectangle &temp)
	{
		Polygon(Rectangle);
	}
public:
	Rectangle(long x,long y):Polygon(4)//constructor
	{
		numSides=4;
		sides[0]=x;
		sides[1]=x;
		sides[2]=y;
		sides[3]=y;
	}
	~Rectangle(); //destructor
};



class Triangle: public Polygon//derived class
{
		Triangle(const Triangle &temp)
	{
		Polygon(Triangle);
	}
public:
	Triangle(long x,long y,long z):Polygon(3)//constructor
	{
		numSides=3;
		sides[0]=x;
		sides[1]=y;
		sides[2]=z;
	}
	~Triangle();//destructor
};
