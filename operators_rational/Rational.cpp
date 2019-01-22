#include <iostream>
using namespace std;
#include "Rational.h"

Rational::Rational(int a, int b)//ctor
{
	mone = a;
	if (b == 0)
		cout << "ERROR\n", mec = 1;
	else mec = b;
	
	if (a<0 && b<0)    //if mone and mehane are negative
	{
		a *= -1;
		b *= -1;
	}
	
};
Rational::Rational (const Rational & r)//copy ctor
{
	mone = r.mone;
	mec = r.mec;
}
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

//bool Rational::equal(Rational &r)const
//{
//	Rational tmp1 = *this;
//	Rational tmp2 = r;
//	tmp1.reduction();
//	tmp2.reduction();
//	return(tmp1.mone == tmp2.mone && tmp1.mec == tmp2.mone);
//};




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


void Rational::print()const
{
	Rational tmp = *this;
	tmp.reduction();
	if (mone == 0)
		cout << "0";
	else if (mone == mec)
		cout << "1";
	else
	    cout << mone << "/" << mec<<endl;
};


//****************************************operators

Rational Rational :: operator+(const Rational & r)
{
	Rational tmp;
	tmp.mone = this->mone * r.mec +  r.mone *this-> mec;
	tmp.mec = this->mec *r.mec;
	return tmp;
}

Rational Rational :: operator-(const Rational & r)
{
	Rational tmp;
	tmp.mone = this->mone * r.mec - r.mone *this->mec;
	tmp.mec = this->mec *r.mec;
	return tmp;
}

Rational Rational ::operator*(const Rational & r)
{
	Rational tmp;
	tmp.mone = this->mone * r.mone;
	tmp.mec = this->mec *r.mec;
	return tmp;
}

Rational Rational :: operator/(const Rational & r)
{
	Rational tmp;
	tmp.mone = this->mone * r.mec;
	tmp.mec = this->mec *r.mone;
	return tmp;
}

bool Rational :: operator==(const Rational & r)const
{
	Rational tmp1 = *this;
	Rational tmp2 = r;
	tmp1.reduction();
	tmp2.reduction();
	return(tmp1.mone == tmp2.mone && tmp1.mec == tmp2.mec);
}
bool Rational :: operator!=(const Rational & r)const
{
	Rational tmp1 = *this;
	Rational tmp2 = r;
	return(!(tmp1 == tmp2));
}
bool Rational :: operator<(const Rational & r)const
{
	return ((r.mone*mec - mone*r.mec) > 0);
}
bool Rational :: operator>(const Rational & r)const
{
	return ((r.mone*mec - mone*r.mec) < 0);
}
bool Rational :: operator<=(const Rational & r)const
{
	return (*this<r || *this==r);
}
bool Rational :: operator>=(const Rational & r)const
{
	return (*this>r || *this == r);
}
Rational Rational :: operator=(const Rational & r)
{
	mone = r.mone;
	mec = r.mec;
	return *this;  // a=b=c
}
void Rational :: operator*=(const Rational & r)
{
	mone *= r.mone;
	mec *= r.mec;
}

Rational Rational::operator++()       //++(mone/mehane)
{
	mone += mec;
	return *this;
}

Rational Rational::operator++(int)       //(mone/mehane)++
{
	Rational temp = *this;
	mone += mec;
	return temp;
}

Rational Rational::operator--()       //--(mone/mehane)
{
	mone -= mec;
	return *this;
}

Rational Rational::operator--(int)       //(mone/mehane)--
{
	Rational temp = *this;
	mone -= mec;
	return temp;
}
