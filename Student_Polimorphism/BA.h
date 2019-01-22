#ifndef BA_H
#define BA_H
#include "Student.h"

class BA:public Student
{
protected:
	int *arrOfGrades;

public:
	
	BA (string TZ1,string firstName1,string lastName1,int courseNum1,int *arrOfGrades1):Student(TZ1,firstName1,lastName1,courseNum1)//constructor
	{
		arrOfGrades=new int[courseNum];
		for(int i=0;i<courseNum;i++)
			arrOfGrades[i]=arrOfGrades1[i];
	}
	~BA()//destructor
	{
		if(arrOfGrades)
			delete[] arrOfGrades;
		//arrOfGrades = NULL;
	}
	int * getGrades();

	virtual bool milga();
	virtual void print();
};




#endif
