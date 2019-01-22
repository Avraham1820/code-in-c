#include "BA.h"


bool BA:: milga()
{//to know whe deserve milga
	int sum=0;
	for (int i=0; i<courseNum; i++)
		sum+=arrOfGrades[i];
	if(courseNum>=10 && ((float)sum/courseNum)>95) 
		return true;
	return false;
}
void BA:: print()
{
	Student:: print();
	cout<<"grades: ";
	for (int i=0; i<courseNum; i++)
		cout<<arrOfGrades[i]<<' ';
}

int * BA:: getGrades()
{
	return arrOfGrades;
}

