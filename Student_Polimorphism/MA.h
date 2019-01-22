#include "BA.h"

#ifndef MA_H
#define MA_H

class MA:public BA
{
protected:
	bool participateInSearchers;
public:	
	MA (string TZ1,string firstName1,string lastName1,int courseNum1,int *arrOfGrades1,bool participateInSearchers1):BA(TZ1,firstName1,lastName1,courseNum1,arrOfGrades1)
	{
		participateInSearchers=participateInSearchers1;
	}
	virtual bool milga();
	virtual void print();
	bool getIfParticipateInSearchers();

};


#endif
