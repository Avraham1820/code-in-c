//AUTHOR:	Avraham (Eliran) shaharabani	
//IDs:		032472664
//KVUTZA:  
//TITTLE:	Targil 6 Seif 1
//SUBJECT:	
/****************************************
*										*
*	DESCRIPTION:						*
*
*										*
*****************************************/

#include "RoundList.h"


//ostream& operator<< (ostream& os,RoundList& l)//output all the list
//{
//	if(l.head==NULL)
//		return os;
//	
//	for(RoundList::Link *x=l.head;x!=l.last;x=x->next)
//		os<<x->value<<" ";
//
//
//	os<<l.last->value;
//
//	os<<endl;
//
//	return os;
//}
//


enum CHOICES
{
	EXIT, ADD, ADD_TO_END, REMOVE_FIRST, SEARCH, CLEAR, EMPTY
};



int main()
{

	RoundList ls1;
	int choice;
	cout << "Enter your choice: "; 
	cin >> choice;
	while(choice != EXIT)
	{
		int num;
		switch(choice)
		{
		case ADD : cout << "Enter 5 numbers: ";
			for(int i=0; i < 5; i++)
			{
				cin >> num;
				ls1.add(num);
			}
			break;

		case ADD_TO_END :cout << "Enter 5 numbers: ";
			for(int i=0; i < 5; i++)
			{
				cin >> num;
				ls1.addToEnd(num);
			}
			break;

		case REMOVE_FIRST : ls1.removeFirst();
			break;

		case SEARCH: cout << "Enter a number: ";
			cin >> num;
			cout << ls1.search(num)<<endl;
			break;


		case CLEAR: ls1.clear();
			break;

		case EMPTY: if(ls1.isEmpty())
						cout << "Empty"<<endl;
					else
						cout << "Not empty" << endl;
			break;

		default: cout<< "ERROR!"<<endl;
		}
		cout << "Enter your choice: "; 
		cin >> choice;
	}
	return 0;
}



/*
output case 1:
Enter your choice: 1
Enter 5 numbers: 5 4 3 2 1
Enter your choice: 2
Enter 5 numbers: 6 7 8 9 10
Enter your choice: 4
Enter a number: 0
1
Enter your choice: 4
Enter a number: 9
10
Enter your choice: 4
Enter a number: 15
6
Enter your choice: 5
Enter your choice: 6
Empty
Enter your choice: 1
Enter 5 numbers: 6 5 4 3 2
Enter your choice: 3
Enter your choice: 4
Enter a number: 0
3
Enter your choice: 7
ERROR!
Enter your choice: 0
Press any key to continue . . .


output case 2:
Enter your choice: 1
Enter 5 numbers: 1 2 3 4 5
Enter your choice: 2
Enter 5 numbers: 6 7 8 9 10
Enter your choice: 4
Enter a number: 10
5
Enter your choice: 4
Enter a number: 15
6
Enter your choice: 5
Enter your choice: 6
Empty
Enter your choice: 1
Enter 5 numbers: 1 2 3 4 5
Enter your choice: 4
Enter a number: 20
5
Enter your choice: 9
ERROR!
Enter your choice: 4
Enter a number: 40
5
Enter your choice: 0
Press any key to continue . . .

case 3:
Enter your choice: 1
Enter 5 numbers: 5 4 3 2 1
Enter your choice: 3
Enter your choice: 3
Enter your choice: 3
Enter your choice: 3
Enter your choice: 3
Enter your choice: 6
Empty
Enter your choice: 0
Press any key to continue . . .


*/

