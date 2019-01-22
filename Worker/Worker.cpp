#include "Worker.h"
#include <iostream>
#include<cstring>
using namespace std;


WorksPortfolio::WorksPortfolio(int ID1 = 0, char* name1 = NULL, float salary1 = 0, int hours1 = 0, int overTime1 = 0) //constructor
{
	setID(ID1);
	setName(name1);
	setSalaryPerHour(salary1);
	setHours(hours1);
	setOverTime(overTime1);

}

float WorksPortfolio::SalaryCalculation()
{
	float x;
	x = hours*salaryPerHour + overTime*1.5*salaryPerHour;
	return x;
}

void WorksPortfolio:: setName(char* a)
{ strcpy(name, a); }