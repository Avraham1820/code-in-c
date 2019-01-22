#include <iostream>
using namespace std;

class WorksPortfolio
{
	int ID;
	char name[20];
	float salaryPerHour;
	int hours;
	int overTime;
	//all this private-because we don't want that the control will be in user's hands
public:
	WorksPortfolio(int ID1, char* name1, float salaryPerHour1, int hours1, int overTime1);

	void setID(int a) { ID=a; }
	int getID(){return ID;}
		
	void setName(char* a);
	char* getName(){return name;}
		
	void setSalaryPerHour(float a){ salaryPerHour = a; }
	float getSalaryPerHour(){ return salaryPerHour; }

	void setHours(int a){ hours = a; }
	int getHours(){ return hours; }

	void setOverTime(int a){ overTime = a; }
	int getOverTime(){ return overTime; }

	float SalaryCalculation();


};
