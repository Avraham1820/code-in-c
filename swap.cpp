using namespace std;
#include <iostream>
#include <string.h>
#include <string>
#include <vector>


template <class T>
void swap00(T *a, T *b) // swap between the content of pointers
{
	T  tmp = *a;
	*a = *b;
	*b = tmp;
}
void swap0(char *a, char *b)// get reference char and swap between the contents 
{
	char  temp ;
	temp = *a;
	*a = *b;
	*b = temp;
}
void swap1(int *pa, int *pb)// get reference int and swap between the contents
{
	int temp;
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}
//int a = 3;
//int& b = a;
//b++;
//cout << a; // 4
void swap2(int &a, int &b)// swap between the destinations of pointers 
{                         //& = "yada aricta"
	int temp;
	temp = a;
	a = b;
	b = temp;
}


//swap22(str1[0], str1[1]);
//void swap22(char a, char b)// this foo don't work!!!
//{
//	char  temp;
//	temp = a;
//	a = b;
//	b = temp;
//}

void swap22(char &a, char &b)// swap between the destinations of pointers 
{
	char  temp = a;
	a = b;
	b = temp;
}

// here we get ref vars. here we can touch only in the content.(more safe)
// swap between the destinations of pointers. get access to content of specific adress.
template <class T>     
void swap3(T &a, T &b) 
{      
	T  tmp = a; 
	a = b; 
	b = tmp;
}
// here we get pointer vars. here we can touch both the content and the pointers.
// swap between the content of pointers. get access to address of some content.
template <class T>     
void swap4(T *a, T *b) 
{
	T  tmp = *a;
	*a = *b;
	*b = tmp;
}
int main()
{
	string c11 = "aaaaa", c22 = "bbbbb";
	char c1[] = "aaaaa", c2[] = "bbbbb";
	swap3(c11, c22);
	swap3(c1[2], c2[2]);
	cout << c11 << endl << c22 << '\n';
	cout << c1 << endl << c2 << '\n';
	//############################################################
	int a = 2, b = 3;
	swap1(&a, &b);
	cout << a << endl << b <<'\n';
	//############################################################
	int c = 4, d = 5;
	swap2(c, d);
	cout << c << endl << d << '\n';
	//################################################################3

	int x = 10, y = 20;                              // x:10 y:20
	swap3(x, y);                              // x:20 y:10

	vector<int> foo(4, x), bar(6, y);       // foo:4x20 bar:6x10
	swap3(foo, bar);                          // foo:6x10 bar:4x20

	cout << "foo contains:";
	for (vector<int>::iterator it = foo.begin(); it != foo.end(); ++it)
		cout << ' ' << *it;
	cout << '\n';
	//###################################################################
	system("pause");
	return 0;
}