#include "MA.h"


bool MA:: milga()
{//condition to have milga
	int sum=0;
	for (int i=0; i<courseNum; i++)
		sum+=arrOfGrades[i];
	if(courseNum>=7 && ((float)sum/courseNum)>90 &&participateInSearchers)
		return true;
	return false;
}
void MA:: print()
{
	BA::print();
	if(participateInSearchers)
		cout<<"research: yes\n";
	else
		cout<<"research: no\n";

}
bool MA:: getIfParticipateInSearchers()
{
	return  participateInSearchers;
}


