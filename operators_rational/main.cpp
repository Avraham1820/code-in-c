//AUTHOR:	Eliran shaharabani	
//IDs:		032472664
//KVUTZA:   Gay yehezkel
//TITTLE:	Targil 1 Seif 1
//SUBJECT:	
/****************************************
*										*
*	rational						*
*
*										*
*****************************************/

#include <iostream>
using namespace std;
#include "Rational.h"


void Make_a_reduction(Rational &r1, Rational &r2)
{
	Rational tmp1 = r1;
	Rational tmp2 = r2;
	r1.reduction();
	r2.reduction();
}


int main()
{
	
	cout << "Enter two rational numbers\n";
	bool bit=true;
	int A, B, C, D;
	char helpChar = '/';
	cout << "a: ";
	cin >> A >> helpChar >> B;
	cout << "b: ";
	cin >> C >> helpChar >> D;
	
	
	//if (D==0||B == 0 || helpChar != '/')
	//{
	//	cout << "ERROR\n";
	//	
	//	//return 0;
	//}
	
	Rational a(A, B);
	Rational b(C, D);
	
	Make_a_reduction(a, b);

	//the output...
	
	
	
	cout << "b-a: ";
	(b - a).print();

	cout << "a!=b: ";
	if (a != b)cout << "true" ;
	else cout << "false" ;

	cout << "\na<b: ";
	if (a<b)cout << "true" ;
	else cout << "false" ;

	cout << "\na>b: ";
	if (a>b)cout << "true" ;
	else cout << "false" ;

	cout << "\na>=b: ";
	if (a >= b)cout << "true" ;
	else cout << "false" ;

	cout << "\na++: ";
	(a++).print();

	cout << "--a: ";
	(--a).print();

	cout << "a--: ";
	(a--).print();
	

	b = a;

	
	cout << "b-a: ";
	(b - a).print();

	
	
	cout << "\nb/a: ";
	(b / a).print();

	
	cout << "\na!=b: ";//>>>>>>>>>>>>>>>>
	if (a != b)cout << "true" ;
	else cout << "false" ;
	
	cout << "\na<b: ";
	if (a<b)cout << "true" ;
	else cout << "false" ;
	
	cout << "\na>=b: ";
	if (a >= b)cout << "true" ;
	else cout << "false" ;


	//system("pause");
	return 0;
}