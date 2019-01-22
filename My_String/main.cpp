//AUTHOR:	Eliran shaharabani	
//IDs:		032472664
//KVUTZA:   David Cohen
//TITTLE:	Targil 3 Seif 1
//SUBJECT:	
/****************************************
*										*
*	DESCRIPTION:						*
*
*										*
*****************************************/



#include <iostream>
#include <string.h>
using namespace std;
#include "String.h"

String sstrlwr( char*  c)//the same as strlwr(char*)
{
	char* temp = new char[strlen(c)+1];
	char*p = temp;
	strcpy(temp, c);
	while (*p != NULL)
	{
		if (*p >= 'A'&&*p <= 'Z')
		{
			*p = *p + 'a' - 'A';
		}
		p++;
	}
	String Temp(temp);
	delete[] temp;
	return Temp;
}

int main()
{
	int index;
	String A, B, a, b;
	//char* a, b;
	cin >> A;
	cin >> B;
	cin >> index;
	a = sstrlwr(A.get_str());
	b = sstrlwr(B.get_str());
	
	
	
	
	if (a < b)
		cout << "a<b\n";
	else if (a == b) cout << "a=b\n";
	else if (a > b) cout << "a>b\n";
	if (index > b.length())
		cout << "ERROR";
	else
	    cout << B.Insert(index, A.get_str());
	system("pause");
	return 0;
}


