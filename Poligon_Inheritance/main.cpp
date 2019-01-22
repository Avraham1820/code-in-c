

//לירון שהרבני 203089321
//מרים קורנט 316012616


//sadna c++
//excercise 6.2

#include <iostream>
using namespace std;
#include "Polygon.h"

//the programm create Polygon/Triangle/Rectangle , set and equal between two of them

int main()
{
	
	Rectangle r1(3, 4);
	Rectangle r2(4,5);
	//r1 = r2;
	
	int numSides1,numSides2;
	long side1,side2,side3;
	Polygon* poly1;
	Polygon* poly2;;

	cout<<"enter number of sides for polygon 1:"<<endl;
	cin>>numSides1;

	if(numSides1==3)
	{
		cout<<"enter sides for polygon:"<<endl;
		cin>>side1>>side2>>side3;
		poly1=  new Triangle(side1,side2,side3);

	}
	else if(numSides1==4)
	{
		cout<<"enter sides for polygon:"<<endl;
		cin>>side1>>side2;
		poly1= new Rectangle(side1,side2);

	}
	else
		poly1=new Polygon (numSides1);


	cout<<"enter number of sides for polygon 2:"<<endl;
	cin>>numSides2;

	if (numSides1 != numSides2)
	{
		cout << "not equal" << endl;
		return 0;
	}

	if(numSides1==numSides2)
	{

		if(numSides2==3)
		{
			cout<<"enter sides for polygon:"<<endl;
			cin>>side1>>side2>>side3;
			poly2= new Triangle(side1,side2,side3);

		}

		else if(numSides2==4)
		{
			cout<<"enter sides for polygon:"<<endl;
			cin>>side1>>side2;
			poly2= new Rectangle(side1,side2);

		}
		else
			poly2=new Polygon(numSides2);

	}



	if ((*poly1) == (*poly2))
		cout<<"equal"<<endl;
	else
		cout<<"not equal"<<endl;

	return 0;
}
/*
case1:
enter number of sides for polygon 1:
3
enter sides for polygon:
20 10 15
enter number of sides for polygon 2:
3
enter sides for polygon:
11 14 20
equal
Press any key to continue . . .


case2:
enter number of sides for polygon 1:
3
enter sides for polygon:
20 10 15
enter number of sides for polygon 2:
3
enter sides for polygon:
10 14 20
not equal
Press any key to continue . . .

case3:
enter number of sides for polygon 1:
4
enter sides for polygon:
20 15
enter number of sides for polygon 2:
4
enter sides for polygon:
15 10
not equal
Press any key to continue . . .

case4:
enter number of sides for polygon 1:
6
enter sides for polygon:
20 10 5 5 5 15
enter number of sides for polygon 2:
6
enter sides for polygon:
10 10 10 10 5 15
equal
Press any key to continue . . .

case5:
enter number of sides for polygon 1:
6
enter sides:20 10 5 5 5 15
enter number of sides for polygon 2:
2
not equal
Press any key to continue . . .

*/