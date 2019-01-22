#ifndef PHD_H
#define PHD_H

#include "Student.h"

class PHD:public Student
{
protected:
	float numOfSearchHour;

public:
	PHD (string TZ1,string firstName1,string lastName1,int courseNum1,float numOfSearchHour1):Student(TZ1,firstName1,lastName1,courseNum1)
	{
		numOfSearchHour=numOfSearchHour1;
	}
	~PHD(){}
	float getNumOfSearchHour();
	virtual bool milga();
	virtual void print();
};

#endif
