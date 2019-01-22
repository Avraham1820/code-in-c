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

int main()
{
	cout << "enter two rational numbers\n";
	bool bit=true;
	int a, b, c, d;
	char helpChar = '/';
	cin >> a >> helpChar >> b >> c >> helpChar >> d;
	
	
	if (d==0||b == 0 || helpChar != '/')
	{
		cout << "ERROR\n";
		
		return 0;
	}
	Rational k(a, b);
	Rational p(c, d);
	bit = k.equal(p);
	//bit = p.equal(k);
	if (bit|| k.get_mone() == 0 && p.get_mone()==0)
		cout << "equal";
	else
	{
		cout << "different\n";
		k.print();
		cout << "  ";
		p.print();
	}


	system("pause");
	return 0;
}