//AUTHOR:	Eliran shaharabani	
//IDs:		032472664
//KVUTZA:   Gay yehezkel
//TITTLE:	Targil 1 Seif 3
//SUBJECT:	
/****************************************
*										*
*	circle point						*
*
*										*
*****************************************/
#include "Point.h"

int main()
{

	
	int x, y;
	int radius;
	cout << "enter the center point and radius of 3 circles" << endl;


	cin >> x >> y >> radius;
	if (radius <= 0){
		cout << "ERROR" << endl;
		return 1;
	}
	Point A1(x, y);
	Circle A(A1, radius);


	cin >> x >> y >> radius;
	if (radius<0){
		cout << "ERROR" << endl;
		return 1;
	}
	Point B1(x, y);
	Circle B(B1, radius);

	cin >> x >> y >> radius;
	if (radius<0){
		cout << "ERROR" << endl;
		return 1;
	}
	Point C1(x, y);
	Circle C(C1, radius);

	cout << "area A:" << A.area() << " B:" << B.area() << " C:" << C.area();
	cout << endl;
	cout << "hekef A:" << A.hekef() << " B:" << B.hekef() << " C:" << C.hekef();
	cout << endl;


	cout << "enter a list of points" << endl;

	int counterA = 0, counterB = 0, counterC = 0;  //to count how much points there are in an within the circle/

	x = 1; y = 1;

	while (x || y)
	{
		cin >> x >> y;
		Point P1(x, y);

		if (A.check(P1) != 1)    //P1!=1 this is the case that the point is not out of the circle
			counterA++;

		if (B.check(P1) != 1)
			counterB++;

		if (C.check(P1) != 1)
			counterC++;


	}


	cout << "# of points in circle" << " A:" << counterA << " B:" << counterB << " C:" << counterC << endl;

	return 0;

}

/*
output:
enter the center point and radius of 3 circles
0 0 3
1 1 2
5 5 2
area A:28.26 B:12.56 C:12.56
hekef A:18.84 B:12.56 C:12.56
enter a list of points
0 1
1 0
0 4
0 0
# of points in circle A:3 B:3 C:0
Press any key to continue . . .


*/