//AUTHOR:	Avraham shaharabani	
//IDs:		032472664
//KVUTZA:  
//TITTLE:	Targil 7 
//SUBJECT:	
/****************************************
*										*
*	DESCRIPTION:						*
*
*										*
*****************************************/
#include <iostream>
using namespace std;

#include<vector>
#include <iterator>

#include "MA.h"
#include "PHD.h"



void printMilga(vector <Student*> vec) //print student's details that deserve milga
{
	vector <Student*>:: iterator ptr1=vec.begin(); //pointer to the begin of the vector
	vector <Student*>:: iterator ptr2=vec.end();//pointer to the end of the vector
	for (; ptr1!=ptr2; ptr1++)
	{
		if ((*ptr1)->milga()) 
		{
			(*ptr1)->print(); 
		}
	}
}


int main()
{

	
	vector <Student*> vec;
	

	int grad1[]={90,100,90};  
	vec.push_back(new BA("123", "abe", "avraham", 3, grad1));  //put in the vector a new student of BA
	int grad2[] = {100,100,90,100,90,100,90,100,90,100}; 
	vec.push_back( new BA("234","yitzhak","avrahamson",10,grad2)); //put in the vector a new student of BA
	int grad3[] = {90,100,90,100,90,100,90}; 
	vec.push_back(new MA("345","yaacov","jacobson",7,grad3,0));  //put in the vector a new student of MA
	vec.push_back(new MA("456","sara","emanu",7,grad3,1));    //put in the vector a new student of MA
	vec.push_back(new PHD("567","rivka","imanu",1,30));    //put in the vector a new student of PHD
	vec.push_back(new PHD("678","rachel","jacobs",2,20));    //put in the vector a new student of PHD
	vec.push_back(new PHD("789","leah","jacobs",2,30));   //put in the vector a new student of PHD

	printMilga(vec);
	//system("pause");
	return 0;

}