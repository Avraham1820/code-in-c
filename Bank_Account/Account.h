#pragma once
#include <iostream>
#include <string>
using namespace std;



class Account
{
	int _accountNumber;
	int _code;
	int _balance;
	static int _sumWithdraw;
	static int _sumDesposit;
	
	
	
	void set_balance(int b){ _balance = b; }
	
	
	
	void set_code(int);
	void set_acNum(int);
public:
	int static getSumWithdraw(){ return _sumWithdraw; }
	int static getSumDeposit(){ return _sumDesposit; }
	
	int getBalance(){ return _balance; }
	int getAccountNumber(){ return _accountNumber; }
	int getCode(){ return _code; }
	Account() :_accountNumber(0), _code(0), _balance(0){};
	Account(int, int, int);
	friend istream& operator>>(istream& in, Account& ob);
	friend ostream& operator<<(ostream& out,Account& ob);//printing the Account
	void withdraw(int nis);
	void  deposit(int);


};

