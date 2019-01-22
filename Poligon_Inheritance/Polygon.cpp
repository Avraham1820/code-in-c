#include <iostream>
using namespace std;

#include "Polygon.h"

bool Polygon::operator==(Polygon &poly)
{
	if(numSides==poly.numSides)
		if(hekef()==poly.hekef())
			return 1;

	return 0;
}


long Polygon::hekef()//scope
{
	long scope=0;

	for(long i=0;i<numSides;i++)
		scope+=sides[i];

	return scope;
}

void Polygon::getSides()
{
	for(int i=0;i<numSides;i++)
		cout<<sides[i]<<" ";
	cout<<endl;
}

int Polygon::getNumSides()
{
	return numSides;
}

Polygon::Polygon(int numSides1)//constructor
{
	numSides=numSides1;

	sides=new long[numSides];
	if(numSides!=3&&numSides!=4)
	{
		cout<<"enter sides for polygon:\n";
		for(int i=0;i<numSides;i++)
			cin>>sides[i];
	}
}

Polygon::Polygon(const Polygon &temp)//copy constructor
{	
	numSides=temp.numSides;

if(sides)             //cause we want to copy
	delete [] sides;

sides=new long[temp.numSides];

for(int i=0;i<numSides;i++)
	sides[i]=temp.sides[i];
}

