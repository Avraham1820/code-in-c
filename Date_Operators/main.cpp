//AUTHOR:	Eliran shaharabani	
//IDs:		032472664
//KVUTZA:   
//TITTLE:	Targil 2 Seif 2
//SUBJECT:	Date , operators loading
/****************************************
*										*
*	DESCRIPTION:						*
*
*										*
*****************************************/

# include  "Date.h";

int main()
{
	char helpChar;
	int day1, month1, year1;

	cout << "Enter a date" << endl;
	cin >> day1 >> helpChar >> month1 >> helpChar >> year1;

	Date dl(day1, month1, year1);  //using constructor
	dl.print();

	int x;

	cout << "What do you want to do" << endl;
	cin >> x;




	while (x != -1)  //if x=-1 it will be over
	{
		switch (x)
		{
		case 1:
		{
			cout << "Enter a date" << endl;
			cin >> day1 >> helpChar >> month1 >> helpChar >> year1;
			dl.Set_Date(day1, month1, year1);
			dl.print();

		}
			break;


		case 2:
		{
			(++dl).print();
		}
			break;

		case 3:
		{

			(dl++).print();
		}
			break;

		case 4:
		{
			int days;
			cout << "Enter #days" << endl;
			cin >> days;
			dl += days;
			dl.print();
		}
			break;

		case 5:
		{
			cout << "Enter a date" << endl;
			cin >> day1 >> helpChar >> month1 >> helpChar >> year1;
			Date newDate(day1, month1, year1);

			cout << ">: ";
			cout << ((dl>newDate) ? "true" : "false") << endl;      //shorted if
		}
			break;

		case 6:
		{
			cout << "Enter a date" << endl;
			cin >> day1 >> helpChar >> month1 >> helpChar >> year1;
			Date newDate(day1, month1, year1);
			cout << "<: ";
			cout << ((dl<newDate) ? "true" : "false") << endl;


		}
			break;

		case 7:
		{
			cout << "Enter a date" << endl;
			cin >> day1 >> helpChar >> month1 >> helpChar >> year1;
			Date newDate(day1, month1, year1);

			cout << "==: ";
			cout << ((dl == newDate) ? "true" : "false") << endl;
		}
			break;


		}
		cout << "What do you want to do" << endl;
		cin >> x;
	}



	return 0;








	//system("pause");
}