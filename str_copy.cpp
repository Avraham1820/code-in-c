using namespace std;
#include <iostream>
#include <string.h>
#include <assert.h>






void strcpy0(char dest[], const char source[]) // good!!!
{
	int i ;
	for (i = 0; i < strlen(source); i++)
	{
		dest[i] = source[i];
	}
	dest[i] = '\0';
}

void strcpy1(char dest[], const char source[]) // good!!!
{
	int i = 0;
	while (1)
	{
		dest[i] = source[i];

		if (dest[i] == '\0')
		{
			break;
		}

		i++;
	}
}

void strcpy2(char dest[], const char source[]) // good!!!
{
	int i = 0;
	while ((dest[i] = source[i]) != '\0')
	{
		i++;
	}
}

char * strcpy3(char *strDest, const char *strSrc)
{
	assert(strDest != NULL && strSrc != NULL);
	char *temp = strDest;
	while (*strDest++ = *strSrc++); // or while((*strDest++=*strSrc++) != '\0');
	return temp;
}

char *strcpy4(char *d, char *s){
	char *saved = d;
	while ((*d++ = *s++) != '\0');
	return saved; //returning starting address of s1
}

//You can use this code, the simpler the better 
//!Inside while () we copy char by char and moving pointer to the next.
//When the last char \0 will pass and copy while receive 0 and stop.
void strcpy5(char* _dst, const char* _src)
{
	while ((*_dst++ = *_src++));
}
//--------------------------------------------------------------
#define qw 1


int main()
{
	char src_str[] = "wats up";
	char dst_str[100];
	//strcpy2(dst_str, src_str);
	strcpy3(dst_str, src_str);
	cout << dst_str << "\n";


#if (qw==0)

#endif

	system("pause");
	return 0;
}

//cout << sizeof(strDest) << '\n';