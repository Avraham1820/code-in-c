using namespace std;
#include <iostream>
#include <string.h>


//const that save the content that he point, se we can only read - str[i], but not write - str[0] = 'k';
//and we can also move the pointer like str++.
int StrLen(const char * str)  //GOOD FUNCTION
{
	//str[0] = 'k';
	int i;
	for (i = 0; str[i]; i++); //reference question str[i]
	return i;

}

//const that save the content that he point, se we can only read - str[i], but not write - str[0] = 'k';
//we can also make the pointer himself const because we just reading referently by str[i], and not moving
//the pointer like str++
int StrLen3(const char * const str) //GOOD FUNCTION
{
	//str[0] = 'k';
	int i;
	for (i = 0; str[i]; i++); //referently reading str[i]
	return i;

}


//-------------------------------------------------------------------------
//the const save the content of str, and avoid from us to
//make  char * p = str;  that was let us change(p[0]='d';) the content of
//a static array - char q1[] = { 'h', 'e', 'l', 'l', 'o', '\0' };
//or dynamic array char *array = new char[6] { 'h', 'e', 'l', 'l', 'o', '\0' };
//nevertheless if we send anonimouse char* like - char *str = "abcd";
// and : int len = StrLen(str); or just  int len = StrLen("abcd");
// we must use const char* str in the entery of the func, because
// if we just try to change an anonimous char* we will get unhandled ERROR.
//---------------------------------------------------------------
unsigned int StrLen1(const  char * str) //GOOD FUNCTION
									  
{
	//char * p = str;
	//p[0] = 'd';
	if (NULL == str)
		return 0;
	unsigned int Count = 0;
	
	while (*str)
	{
		++Count;
		++str;
		//why we can do that(++str), we have a const? - so the answer is: 
		//that - const  char * str - save the content of str, but the pointer himself
		//let us move him for only reading - moving on the char* string, but we 
		//should Be careful not to exceed over the '\0'. 

	}
	return Count;

}


//the const here don't let us ++str;
unsigned int StrLen2( char * const str)// ERROR FUNCTION

{
	//char * p = str;
	//p[0] = 'd';
	if (NULL == str)
		return 0;
	unsigned int Count = 0;

	while (*str)
	{
		++Count;
		//++str;

	}
	return Count;

}

#define qw 0

int main()
{
#if (qw==0)
	char *str = "abcd";
	
	int len = StrLen(str);
	cout << len << '\n';
	int len1 = StrLen1(str);
	cout << len1 << '\n';
#endif

#if (qw==1)
	//char *str = "abcd";
	char q1[] = { 'h', 'e', 'l', 'l', 'o', '\0' };
	char *array = new char[6] { 'h', 'e', 'l', 'l', 'o', '\0' };
	cout << '\n' << q1;
	cout << '\n' << array;
	//cout << "enter a word\n";
	//cin >> str;
	//int len = StrLen(str);
	int len1 = StrLen1(q1);
	int len2 = StrLen1(array);
	int size = sizeof(q1); // sizeof include the '\0' in the counter
	cout << '\n' <<q1;
	//cout << "\n" << len << "\n";
	cout << "\n" << len1 << "\n";
	cout << "\n" << array << "\n";
#endif

	system("pause");
	return 0;
}