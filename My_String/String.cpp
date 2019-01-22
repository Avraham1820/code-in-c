//string.cpp

#include "String.h"

void String::setString(const char *  s)// work on field of this->str
{
	if (s)
	{
		/*int len = strlen(s);
		str = new char[len+1];
		strcpy(str,s);*/
		str = strdup(s);
	}
	else
		str = NULL;
}
String String::Insert(int index, const char*s)const //input word b to index in word a
{
	int i;
	char*tmp = new char[strlen(str) + strlen(s) + 1];//
	char*p = str;
	for (i = 0; i<index; i++)//the procedure
	{
		tmp[i] = *p;
		p++;
	}

	while (*s)
	{
		tmp[i] = *s;
		i++;
		s++;
	}
	while (*p)
	{
		tmp[i] = *p;
		i++;
		p++;
	}
	tmp[i] = '\0';
	String Tmp(tmp);//ctor is working
	delete[] tmp;
	return Tmp;
}


String::String(char* s)
{
	setString(s);

}
String::String(const String& s)
{
	setString(s.str);
}
String::~String()
{
	if (str)
		delete[] str;
	else str = NULL;
}
String& String:: operator=(const String& s)
{
	if (str)
		delete[] str;
	setString(s.str);
	return *this;// for multiple loading
}
String String::operator+(const String& s)const
{
	char* tmp = new char[strlen(str) + strlen(s.str) + 1];
	strcpy(tmp, str);
	strcat(tmp, s.str);
	String a(tmp);
	return (a);
}

String String:: operator*(int x)const
{
	char* tmp = new char[x * strlen(str) + 1];
	for (strcpy(tmp, str); x > 1; x--)
		strcat(tmp, str);
	String Tmp(tmp);
	delete[] tmp;
	return Tmp;
}

bool String:: operator<(const String& s)const
{
	if ((strcmp(str, s.str)) == (-1))
		return true;
	else return false;
}
bool String:: operator>(const String& s)const
{
	if ((strcmp(str, s.str)) == (1))
		return true;
	else return false;
}
bool String:: operator==(const String& s)const
{
	if ((strcmp(str, s.str)) == (0))
		return true;
	else return false;
}
bool String:: operator<=(const String& s)const
{
	if ((strcmp(str, s.str)) != (1))// -1 || 0
		return true;
	else return false;
}
bool String:: operator>=(const String& s)const
{
	if ((strcmp(str, s.str)) != (-1))// 1||0
		return true;
	else return false;
}
bool String:: operator!=(const String& s)const
{
	if (*this==s)//
		return false;
	else return true;
}


ostream& operator<<(ostream& out, const String& s)
{
	if (s.str)
		out << s.str << endl;
	return out;
}

istream& operator>>(istream& in, String& s)
{
	//cout << "Enter a new string: ";
	char temp[30];
	//in.getline(temp, 30);
	in >> temp;
	//s = (String)temp;// casting
	s = temp;// casting by compayler
	return in;// for multiple cin >> a >> b; , by ref because we dont need c-ctor
}


int String::length() const
{
	return strlen(str);
}