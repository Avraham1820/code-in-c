#include <iostream>
using namespace std;
#include "Rational.h"

Rational::Rational(int a, int b)
{
	mone = a;
	if (b == 0)
		cout << "ERROR\n", mec = 1;
	else mec = b;
};

void Rational::reduction()
{
	if (mone == 1 || mec == 1)
		return; // we don't need to change
	int i = (mone > mec) ? mec : mone;

	for (; i > 0; i--)
		if (mone % i == 0 && mec % i == 0)//so we found the biggest div
		{
		mone /= i;
		mec /= i;
		}
	return;
};

bool Rational::equal(Rational &r)
{
	this->reduction();
	r.reduction();
	return (mone == r.get_mone() && mec == r.get_mec());
	
};




void Rational::set_mec(int b)
{
	if (b != 0)
		this->mec = b;
	else
	{
		cout << endl;
		cout << "ERROR";
		
	}
};


void Rational::print()
{
	cout << mone << "/" << mec;
};