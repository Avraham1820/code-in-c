#include "PHD.h"


bool PHD:: milga()
{
	if( courseNum==2 && numOfSearchHour>25)
		return true;
	return false;
}

float PHD:: getNumOfSearchHour()
{
	return numOfSearchHour;
}

void  PHD:: print()
{
	Student::print();
	cout<<"hours: "<<numOfSearchHour<<endl;
}

