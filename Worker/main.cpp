//AUTHOR:	Eliran shaharabani	
//IDs:		032472664
//KVUTZA:   Gay yehezkel
//TITTLE:	Targil 1 Seif 2
//SUBJECT:	
/****************************************
*										*
*	worker						*
*
*										*
*****************************************/
#include "Worker.h"

int main()
{
	
		int ID1 = 0, hours1 = 0, overTime1 = 0;
		char name1[20];
		float salary1 = 0;
		cout << "enter details, to end enter 0" << endl;

		WorksPortfolio highestSalary(ID1, name1, salary1, hours1, overTime1); //using constructor
		WorksPortfolio hardestWorker(ID1, name1, salary1, hours1, overTime1);

		while (1)
		{
			cin >> ID1;
			if (ID1 == 0)   //then we will stop to get information from the user
				break;
			else
			{
				cin >> name1 >> salary1 >> hours1 >> overTime1;

				while (salary1 < 0 || hours1 < 0 || ID1 < 0 || overTime1 < 0 || name1[0] <= '9' && name1[0] >= '0')
			
				{
					cout << "ERROR\n";
					cin >> ID1;
					if (ID1 == 0)
						break;
					cin >> name1 >> salary1 >> hours1 >> overTime1;
				}
			}

			WorksPortfolio temp(ID1, name1, salary1, hours1, overTime1); //using the constructor.
			//temp is helping to know who is the harder worker and the highest salary worker


			if (temp.SalaryCalculation()>highestSalary.SalaryCalculation())
			{
				highestSalary = temp;
			}
			if (temp.getHours() + temp.getOverTime()>hardestWorker.getHours() + hardestWorker.getOverTime())
			{
				hardestWorker = temp;
			}


		}

		cout << "highest salary: " << highestSalary.getID() << " " << highestSalary.getName() << endl;
		cout << "hardest worker: " << hardestWorker.getID() << " " << hardestWorker.getName() << endl;


	


	//system("pause");
	return 0;
}