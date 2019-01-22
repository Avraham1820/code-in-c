#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
using namespace std;

class Student
{
protected:
	string TZ;
	string firstName;
	string lastName;
	int courseNum;
public:

	Student(){};//default constructor
	Student(string TZ1,string firstName1,string lastName1,int courseNum1);//constructor
	virtual ~Student(){};  //destructor
	virtual bool milga()=0;//pure virtual
	virtual void print();

	string getTZ();
	string getName();
	string getLastName();
	int getNumCourses();

};

#endif
