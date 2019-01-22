#include <iostream>
#include <string>
using namespace std;

class Clock
{
	int hour;
	int minute;
	int second;

	int get_h(){ return hour; }
	int get_m(){ return minute; }
	int get_s(){ return second; }
	void set_h(int);
	void set_m(int);
	void set_s(int);
public:
	Clock() :hour(0), minute(0), second(0){};
	Clock(int, int, int);
	Clock(const Clock & clk);

	void operator+=(int);
	friend ostream& operator<<(ostream& out, Clock& ob);
	friend istream& operator>>(istream& in, Clock& ob);


};