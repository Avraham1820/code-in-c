using namespace std;
#include <iostream>
#include <string.h>

void StrCpy(char* _dst, const char* _src)
{
	while ((*_dst++ = *_src++));
}


template <class T>
void swap0(T *a, T *b) // swap between the content of pointers
{
	T  tmp = *a;
	*a = *b;
	*b = tmp;
}

char* StrRev(char const* str)
{
	int Len = strlen(str);
	char *tmp = new char[Len + 1];
	StrCpy(tmp, str);
	char *i = &tmp[0];
	char *j = &tmp[Len - 1];
	for (; i < j; i++, j--)
	{
		swap0(i, j);
	}
	return tmp;

}



int main()
{
	char src[30] = { "I am a proggrammer" };
	char dst[30];
	char *rev;
	rev = StrRev(src);
	cout << rev << '\n';
	system("pause");
	return 0;
}