//AUTHOR:	Eliran shaharabani	
//IDs:		032472664
//KVUTZA:   
//TITTLE:	Targil 3 Seif 4
//SUBJECT:	
/****************************************
*										*
*	DESCRIPTION:						*
*
*										*
*****************************************/

#include <iostream>
#include <string>
using namespace std;



	int main()
	{
		string str , str1;
		getline(cin, str);
		int index;

		for (int i = 0; i < 3; i++)
		{
			index = str.find(' ');
			str[index] = '*';
		}
		
		cout << str << "\n";
		
		//str1 = "#!!@1234";
		index = str.rfind('*');
		//str1 = str.assign()
		str1.append(str, 0, index+1 );
		
		str1 += "#!!@1234";
        cout << str1 << "\n";
		
		index=str1.find('*');
		str.assign(str1, 4, str1.length());
		cout << str << "\n";

		index = str.find('*');
		str1.assign(str, 4, str.length());
		cout << str1 << "\n";
	
		index = str1.find('*');
		str.assign(str1, 4, str.length());
		cout << str << "\n";
		
		
		
	//	system("pause");
	return 0;
}