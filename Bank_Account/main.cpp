//AUTHOR:	Eliran shaharabani	
//IDs:		032472664
//KVUTZA:   David Cohen
//TITTLE:	Targil 4 Seif 2
//SUBJECT:	
/****************************************
*										*
*	DESCRIPTION:						*
*
*										*
*****************************************/
#include "Clock.h"
#include "Account.h"
using namespace std;
enum action
{
	stop,
	balance,
	deposit,
	withdraw,
	sumDeposit,
	sumWithdraw
};
action menu()
{
	cout << "enter 1 to get account balance" << endl;
	cout << "enter 2 to deposit money" << endl;
	cout << "enter 3 to withdraw money" << endl;
	cout << "enter 4 to see the sum of all withdraws" << endl;
	cout << "enter 5 to see the sum of all Deposits" << endl;
	cout << "enter 0 to stop" << endl<<endl;
	int x;
	cin >> x;
	return (action)x;
}
int findAccount(Account* bank, int size)
{
	
	int number, code;
	cout << "please enter account number: \n";
	cin >> number;
	int i = 0;
	while (i<size && bank[i].getAccountNumber() != number)
		i++;
	cout << "please enter the code: \n";
	cin >> code;
	if (bank[i].getCode() == code)
		return i;
	else return -1;
}

//*******************************
static Clock c(8,0,0);
//********************************


void printTransaction(Account a, action ac)
{
	int sum;
	//Clock c;
	cout << c << "\t";
	;
	switch (ac)
	{
	case balance:
		cout << "account #: " << a.getAccountNumber() << "\t";
		cout << "new balance: " << a.getBalance() << endl;
		break;
	case deposit: 
		
	    cout << "account #: " << a.getAccountNumber() << "\t";
		cout << "new balance: " << a.getBalance() << endl;
		break;
	case withdraw: 
		cout << "account #: " << a.getAccountNumber() << "\t";
		cout << "new balance: " << a.getBalance() << endl;
		//cout << c << "\t";
		break;
	case sumDeposit:                              
		cout << "sum of all deposits: " << Account::getSumDeposit() << endl;
		break;
	case sumWithdraw:
		cout << "sum of all withdraws: " << Account::getSumWithdraw() << endl;
		
		//cout << c << "\t";
		
		break;
	}
}
void getBalance(Account* bank, int size)
{
	int i = findAccount(bank, size);
	printTransaction(bank[i], balance);
}
void checkDeposit(Account* bank, int size)
{
	int i = findAccount(bank, size);
	if (i != -1)
	{
		float amount;
		cout << "enter the amount of the check: \n";
		cin >> amount;
		bank[i].deposit(amount);
	    printTransaction(bank[i], deposit);
		return;
	}
	c += -30;
	cout << c << "\t";
	cout << "ERROR: wrong code!\n";
	return;
}
void cashWithdraw(Account* bank, int size)
{
	int i = findAccount(bank, size);
	float amount;
	cout << "enter the amount of money to withdraw: /n";
	cin >> amount;
	bank[i].withdraw(amount);
	printTransaction(bank[i], withdraw);
}
int main()
{
	Account bank[1];
	cout << "enter account number and code for 10 accounts:\n\n";
	for (int i = 0; i<10; i++)
		cin >> bank[i];
	action ac = menu();
	while (ac)
	{
		switch (ac)
		{
		case balance:c += 20;
			getBalance(bank, 10);
			break;
		case withdraw:c += 50;
			cashWithdraw(bank, 10);
			break;
		case deposit:c += 30;
			checkDeposit(bank, 10);
			break;
		case sumDeposit:c += 60;
			printTransaction(bank[0], sumDeposit);
			break;
		case sumWithdraw:c += 60;
			printTransaction(bank[0], sumWithdraw);

		}
		ac = menu();
	}
	return 0;
}


