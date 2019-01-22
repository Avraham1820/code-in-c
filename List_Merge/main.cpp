//AUTHOR1:	Eliran shaharabani	
//IDs:		032472664
//AUTHOR1:	Avishay Zrihan	
//IDs:		305198020
//KVUTZA:  
//TITTLE:	Targil 5 Seif 3
//SUBJECT:	
/****************************************
*										*
*	DESCRIPTION:						*
*
*										*
*****************************************/



#include <iostream>
using namespace std;
#include "List.h"



istream& operator>> (istream& os,List& l)//input
{
	int val;
	cin>>val;
	l.clear();
	l.head =new List::Link(val,NULL);

	List ::Link* x=l.head;

	int m=1;
	do{
		cin>>val;
		if(val>x->value)
		{
			x->next=new List::Link(val,NULL); //till the item to insert is smaller than the prev item
			x=x->next;
		}
		else
			m=0;
	}while(m);

	return os;
}

ostream& operator<< (ostream& os,List& l)//output
{
	os<<'\n';
	for (List::Link* p=l.head; p!=NULL ; p=p->next)
		os << p->value << " ";
	os << endl;
	return os;
}
List merge(const List &list1, const List &list2)//merging 2 lists
{//this func is a friend of the class
	List list3;
	List::Link* L1=list1.head;
	List::Link* L2=list2.head;


	if(L1->value<L2->value)//first step:Comparison of two first elements recorded
	{
		list3.head=new List::Link(L1->value,NULL);
		L1=L1->next;
	}
	else 
	{
		list3.head=new List::Link(L2->value,NULL);
		L2=L2->next;
	}

	List::Link* L3=list3.head;

	while(L1!=NULL&&L2!=NULL)//second step:continue the comparison and Advanced every time
	{
		if(L1->value<L2->value)
		{
			L3->next=new List::Link(L1->value,NULL);
			L1=L1->next;
		}
		else
		{
			L3->next=new List::Link(L2->value,NULL);
			L2=L2->next;
		}
		L3=L3->next;
	}

	while(L1!=NULL)
	{
		L3->next=new List::Link(L1->value,NULL);
		L1=L1->next;
		L3=L3->next;
	}
	while(L2!=NULL)
	{
		L3->next=new List::Link(L2->value,NULL);
		L2=L2->next;
		L3=L3->next;
	}

	return list3;
}


void makeSet(List & l)
{
	if (l.head == NULL || (l.head)->next == NULL)// if we have just one link or less
		return;
	List::Link *k = l.head;
	List::Link *p = (l.head)->next;
	while (p)
	{
		if (k->value == p->value)
		{
			k->next = p->next;
			p->next = NULL;
			delete p;
			p = k->next;
		}
		else 
		{
			k = k->next;
			p = p->next;
		
		}
	}
	return;
}

int main()
{
	   List lst1, lst2, mergedList;

		cout << "enter sorted values for the first list:" << endl;
		cin >> lst1;
		cout << "enter sorted values for the second list:" << endl;
		cin >> lst2;

		mergedList = merge(lst1, lst2);
		cout << "the new merged list: " << mergedList << endl;

		makeSet(mergedList);
		cout << "the new merged set: " << mergedList << endl;

		return 0;
	}



