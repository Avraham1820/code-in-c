# include  "Date.h";


Date::Date(int D = 1, int M = 1, int Y = 1970)
{
	if (D < 1 || D>30)
	{
		cout << "Error day\n";
		Day = 1;
	}
	else Day = D;
	
	if (M < 1 || M>12)
	{
		cout << "Error month\n";
		Month = 1;
	}
	else Month = M;
	
	if (Y < 1970 || Y>2099)
	{
		cout << "Error year\n";
		Year = 1970;
	}
	else Year = Y;
}

Date::Date(const Date & D)
{
	Day = D.Day;
	Month = D.Month;
	Year = D.Year;
}

void Date::Set_Date(int D, int M, int Y)
{
	if ((D < 1 || D>30) || (M < 1 || M>12) || (Y < 1970 || Y>2099))
		return;
	
		Day = D;
		Month = M;
		Year = Y;
	
}
void Date::update()  //update the date
{
	if (Day>30)
	{
		Month = Month + Day / 30;
		Day = Day % 30;

	}
	if (Month>12)
	{
		Year = Year + Month / 12;
		Month = Month % 12;
	}
	if (Year>2099)
	{
		cout << "Error year\n";
		Year = 1970;
	}
}
Date Date:: operator++()
{
	Day++;
	update();
	return *this;
}

Date Date::operator++(int)// D++
{
	Date tmp = *this;
	Day++;
	update();
	return tmp;
}

Date Date:: operator+=(int Days)
{
	
	Day += Days;
	update();
	return *this;
}

bool Date:: operator>(Date d)
{
	if ((Day + Month * 30 + Year * 365) > (d.Day + d.Month * 30 + d.Year * 365))
		return true;
	else return false;
}
bool Date:: operator<(Date d)
{
	if ((Day + Month * 30 + Year * 365) < (d.Day + d.Month * 30 + d.Year * 365))
		return true;
	else return false;
}
bool Date:: operator==(Date d)
{
	if ((Day + Month * 30 + Year * 365)== (d.Day + d.Month * 30 + d.Year * 365))
		return true;
	else return false;
}
void Date::print()
{
	update();
	cout << Day << "/" << Month << "/" << Year << endl;
}
