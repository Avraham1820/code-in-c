#include <iostream>
using namespace std;
#include "RoundList.h"



RoundList ::RoundList()//constructor
{
	List();
	last=NULL;
}

void RoundList ::add( int val)//add to first place
{  

	if (isEmpty()) //if the list is empty we insert the first element in the list
	{
		List::add(val);
		last=head;//to close the circle
		last->next=head;
	}
	else
	{
		Link*x=head;
		head=new Link(val,x);
		last->next=head;
	}
}
void RoundList::clear()
{   
	last->next=NULL;//so i can use in func clear in list

	List::clear();
}

void RoundList ::removeFirst()
{
	Link* p=head;
	if(p==last)//if there is one element in the list
	{
    head=NULL;
	delete p;
	}
	else
	List ::removeFirst();


	if (isEmpty())
		last = NULL;
}

void RoundList ::addToEnd( int val)
{
	if (!isEmpty())
	{
		last->next = new Link (val,head);//regular addition
		last = last->next;
	}
	else//if the list is empty
	{
		add(val);
	}
}

int RoundList::search(int index)//search element in the list 
{
	if(head==NULL)
		return 0;

	Link*x=head;

	for(int i=0;i<index;i++)
	{
		x=x->next;
	}
	
	return x->value;
}

