#include "Student.h"
#include <string>

Student::Student(string TZ1,string firstName1,string lastName1,int courseNum1)//constructor
{
	TZ=TZ1;
	firstName=firstName1;
	lastName=lastName1;
	courseNum=courseNum1;

}


void Student::print()
{
	cout<<"ID: "<<TZ<<endl;
	cout<<"first name: "<<firstName<<endl;
	cout<<"last name: "<<lastName<<endl;
	cout<<"num courses: "<<courseNum<<endl;

}

string Student :: getTZ()
{
	return TZ;
}
string Student :: getName()
{
	return firstName;
}
string Student :: getLastName()
{
	return lastName;
}
int Student :: getNumCourses()
{
	return courseNum;
}



