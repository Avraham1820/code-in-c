using namespace std;
#include <iostream>
#include <string.h>
//############################################################################################
//WRONG: I LEARNED THAT WHEN WE RUN ON CHAR * aRRAY WE SHOUDE STOP BY THE LENGTH OF THE STRING
// AND NOT BY THE '/0', BECAUSE WE CAN'T SEE THE '/0', WE CAN'T FEEL IT. THE END OF THE STRING
// IS NOT NULL. AND THERFOR WE HAVE TO USE THE LENGTH OF THE CHAR ARRAY. AND WE CAN SEE THE
// CONTENT BY THE [] OPERATOR.
//char * frstUnRepLet( char* str)
//{
//	if (str == NULL)
//		return NULL;
//	else if (strlen(str) == 1)
//		return str;
//	else
//	{
//		char  *i, *j;
//		for (i = str; i != '\0'; i++)
//		{
//			for (j = str; *j!='\0'; j++)
//			{
//				if (i == j) continue;
//				if (*i == *j ) break;
//				
//			}
//			if (j== '\0') return i;
//		}
//		return NULL;
//	}
//
//
//}
//######################################################################
using namespace std;
#include <iostream>
#include <string.h>

char* frstUnRepLet(char* str)
{
	if (str == NULL)
		return NULL;
	else if (strlen(str) == 1)
		return str;
	else{

		int len = strlen(str);
		int i, j;
		for (i = 0; i < len; i++)
		{
			for (j = 0; j < len; j++)
			{
				if (i == j)// so its the same leeter - continue - j++
					continue;
				if (str[i] == str[j])// so the leeter repeat, the i isn't good -> i++, j=0
					break;
			}
			//if we got here - two reasons possible: 1)break  2)we cheked all the j and is no match (j==len)
			if (j == len)// so str[i] is the frst letter that not repeat
				return &str[i];
		}
		return NULL;
	}
}



int main()
{
	char *str = "hsgjsgjshktE";
	//cout << "enter a word\n";
	//cin >> str;
	char *tmp = frstUnRepLet(str);
	if (tmp) cout << "\n" << *(tmp);

	system("pause");
	return 0;
}