#include <iostream>
using namespace std;


class Date
{
	int Day;
	int Month;
	int Year;
	void update();
public:
	Date(int , int , int );
	Date(const Date & D);
	void Set_Date(int, int, int);
	Date operator++();// ++D
	Date operator++(int);//D++
	Date operator+=(int Days);// try void
	bool operator>(Date d);
	bool operator<(Date d);
	bool operator==(Date d);
	void print();
};