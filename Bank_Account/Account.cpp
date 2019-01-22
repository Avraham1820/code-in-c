//BankAccount.cpp
//#include "main.cpp"
#include "Account.h"

Account::Account(int acNum, int code, int b)
{
	_accountNumber = acNum;
	_balance = b;
	set_code(code);
};


void Account::set_code(int c)
{
	bool bit = true;

	while (bit)
	{
		
		try
		{
			if (c < 1000 || c>9999)
				throw "ERROR: code must be of 4 digits!\n";
			bit = false;
			_code = c;
		}
		catch (char* str)
		{
			cout << str;
			cin >> c;
		}
	}
}
istream& operator>>(istream& in, Account& ob)


{
	int acNum, code;
	int b = 0;
	in >> acNum >> code;
	ob._accountNumber = acNum;// no input checking
	ob.set_code(code);
	return in;
}

ostream& operator<<(ostream& out, Account& ob)
{
	out << ob._accountNumber << "\n" << ob._code << "\n" << ob._balance << "\n";
	return out;

}

void Account::withdraw(int nis)
{
	try{
		if (nis > 2500)
			throw "ERROR: cannot withdraw more than 2500 NIS!";
		if (_balance - nis < -6000)
			throw "ERROR: cannot have less than  -6000 NIS!";
		
		_balance -= nis;
		_sumWithdraw += nis;//countSumWithdraw-->static
		//cout << "You withdrewed  " << nis << "  NIS" << endl;
	
	}
	catch (char* str)
	{
		cout << str << "\n";
	}
}

void Account::deposit(int num)
{
	
	try
	{
	if (num>10000)
		throw "ERROR: cannot deposit more than 10000 NIS!";
	//c += 30;
	_balance += num;
	 _sumDesposit += num;  //countSumDeposit-->static!!
    // cout << "You deposited  " << num << "  NIS" << endl;
	}
	catch (char* str)
	{
		cout << str;
	}
}


int Account::_sumWithdraw = 0;
int Account::_sumDesposit = 0;


