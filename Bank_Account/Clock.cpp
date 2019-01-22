#include "Clock.h"

Clock::Clock(int h, int m, int s)
{
	try
	{
		if (s > 59)
			throw  "Invalid time - more than 60 seconds.";
		if (s < 0)
			throw  "Invalid time - negative number of seconds.";
		if (m > 59)
			throw  "Invalid time - more than 60 minutes.";
		if (m < 0)
			throw  "Invalid time - negative number of minutes.";
		if (h > 23)
			throw  "Invalid time - more than 24 hours.";
		if (h < 0)
			throw  "Invalid time - negative number of hours.";
		hour = h;
		minute = m;
		second = s;

	}
	catch (char* str)
	{
		hour = minute = second = 0;
		cout << "Wrong time format. \n";
		cout << str << "\n";
	}

}

Clock::Clock(const Clock&  clk)
{
	second = clk.second;
	minute = clk.minute;
	hour = clk.hour;

}


void Clock::set_s(int s)
{
	try
	{
		if (s > 59)
			throw  "Invalid time - more than 60 seconds.";
		if (s < 0)
			throw  "Invalid time - negative number of seconds.";
		second = s;
	}
	catch (char* str)
	{
		hour = 0;
		minute = 0;
		second = 0;
		cout << "Wrong time format. \n";
		cout << str << "\n";
	}

}
void Clock::set_m(int m)
{
	try
	{
		if (m > 59)
			throw  "Invalid time - more than 60 minutes.";
		if (m < 0)
			throw  "Invalid time - negative number of minutess.";
		minute = m;
	}
	catch (char* str)
	{
		hour = 0;
		minute = 0;
		second = 0;
		cout << "Wrong time format. \n";
		cout << str << "\n";
	}

}
void Clock::set_h(int h)
{
	try
	{
		if (h > 23)
			throw  "Invalid time - more than 24 hours.";
		if (h < 0)
			throw  "Invalid time - negative number of hours.";
		hour = h;
	}
	catch (char* str)
	{
		hour = 0;
		minute = 0;
		second = 0;
		cout << "Wrong time format. \n";
		cout << str << "\n";
	}

}

void Clock ::  operator+=(int s)
{
	second += s;
	if (second > 59)
	{
		minute = minute + second / 60;
		second = second % 60;
	}
	if (minute > 59)
	{
		hour = hour + minute / 60;
		minute = minute % 60;
	}
	hour = hour % 24;

}

ostream& operator<<(ostream& out, Clock& ob)
{
	if (ob.hour<10)
	{
		out << 0 << ob.hour << ":";
	}
	else
	{
		out << ob.hour << ":";

	}

	if (ob.minute<10)
	{
		out << 0 << ob.minute << ":";
	}
	else
	{
		out << ob.minute << ":";

	}

	if (ob.second<10)
	{
		out << 0 << ob.second;
	}
	else
		out << ob.second ;

	return out;

}

istream& operator>>(istream& in, Clock& ob)
{
	int h, m, s;
	char nec = ':';
	in >> h >> nec >> m >> nec >> s;
	if (!(h || m || s))
	{
		ob.hour = ob.minute = ob.second = 0;
		return in;
	}
	ob.set_h(h);
	if (!(ob.hour || ob.minute || ob.second))
		return in;
	ob.set_m(m);
	if (!(ob.hour || ob.minute || ob.second))
		return in;
	ob.set_s(s);
	return in;
}