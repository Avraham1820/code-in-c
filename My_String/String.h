
//string.h -function of class String
#include <iostream>
#include <string.h>

using namespace std;


class String
{
	char* str;
	void setString(const char* s);//
public:
	// constructors
	String(char* s = NULL);//
	String(const String& s);//
	~String();//
	// view function
     char*  get_str() const { return str; }//
	int length() const;
	// modify function
	String& operator=(const String& s);//
	String Insert(int index, const char* str)const;
	//operators
	String operator+(const String& s)const;//& , conserving in copy.Ctor using 
	String operator*(int)const;//
	bool operator<(const String& s)const;//
	bool operator>(const String& s)const;//
	bool operator==(const String& s)const;//
	bool operator<=(const String& s)const;//
	bool operator>=(const String& s)const;//
	bool operator!=(const String& s)const;//

	
	// print
	friend ostream& operator<<(ostream&, const String&);//const String& :for not using c-ctor
	friend istream& operator>>(istream&, String&);//String& withno const because we want to write
	                                              // on this object

};


