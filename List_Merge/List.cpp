

#include <iostream>
using namespace std;
#include "List.h"





List& List::operator=(const List &l)
{ 
	Link *src, *trg;//define two pointers one for each list,src - source, trg - new list

	if (l.head == NULL)//if source is empty list
	{
		(*this).clear();
		head = NULL; // to mark
	}
	else //list is not empty
	{
		/*Link* temp ;
		temp = new Link(l.head->value,NULL);
		head = temp;*/
		//create first element in list
		(*this).clear();
		head = new Link(l.head->value, NULL);

		//two pointers will each get beginning of list
		src = l.head;
		trg = head;
		//go over source list until end of list
		while(src->next!=NULL)
		{
			//create new Link, and attach to end of new list
			trg->next = new Link((src->next)->value, NULL);
			//קדם מצביעים
			src = src->next;
			trg = trg->next;
		}
	}
	return *this;
}




List::Link::Link( int val, Link* nxt) : value(val), next(nxt)   {}

List::Link::Link(const Link& source) : value(source.value),next(source.next)  {}
//--------------------------------------------
//  class List implementation
//--------------------------------------------
List::List(): head(NULL)
{
	// no further initialization
}

List::List(const List &l) 
{
	Link *src, *trg;//define two pointers one for each list,src - source, trg - new list

	if(l.head==NULL)//if source is empty list
		head=NULL;
	else //list is not empty
	{
		/*Link* temp ;
		temp = new Link(l.head->value,NULL);
		head = temp;*/
		//create first element in list
		head = new Link(l.head->value, NULL);

		//two pointers will each get beginning of list
		src = l.head;
		trg = head;
		//go over source list until end of list
		while(src->next!=NULL)
		{
			//create new Link, and attach to end of new list
			trg->next = new Link((src->next)->value, NULL);
			//קדם מצביעים
			src = src->next;
			trg = trg->next;
		}
	}
}

List::~List()
{
	clear();
}

void List::clear()
{
	//// empty all elements from the List
	//Link* next;//temp pointer
	//for (Link * p=head; p != NULL; p=next)
	//{
	//	// delete the element pointed to by p
	//	next=p->next;//point to next element
	//	p->next=NULL;
	//	delete p;
	//	
	//}
	//// mark that the List contains no elements
	//head=NULL;

	//without next
	// empty all elements from the List
	for (Link * p=head; p != NULL; p = head)
	{
		// delete the element pointed to by p
		head = p->next;//point to next element
		p->next = NULL;
		delete p;

	}
	// mark that the List contains no elements
	head=NULL;
}

bool List::isEmpty() const
{
	// test to see if the List is empty
	// List is empty if the pointer to the head
	// Link is null

	return head == NULL;
}
void List::add( int val)
{
	//Add a new value to the front of a Linked List
	head = new Link(val, head);
	if(head==NULL) 
		throw "failed in memory allocation";
}

int List::firstElement() const
{
	// return first value in List
	if (isEmpty())
		throw "the List is empty, no first Element";
	return head->value;
}

bool  List::search(const  int &val) const
{
	// loop to test each element
	for (Link* p=head; p!=NULL ; p=p->next)
		if (val == p->value)
			return true;
	// not found
	return false;
}

void List::removeFirst()
{
	if (head != NULL)
	{
		Link* p = head;
		head = head->next;
		p->next = NULL;
		delete p;
	}
}
void List::insert(int key)
{
	if (head == NULL)
		//head=new Link(key,NULL);//if the first item to insert is the first
		(*this).add(key);

	Link*k=head;//pointer to head

	Link*p=head->next;
	if(key<(k->value))
		//head=new Link(key,k);
		(*this).add(key);
	else
	{
		for(;p!=NULL&&p->value<key;)//till the item will be smaller than the previous item
		{
			p=p->next;
			k=k->next;
		}

		k->next=new Link(key,p);

	}

}

void List::remove(int key)
{
	Link*k=head;

	Link*p=head->next;
	if (key == k->value)//if the first item to remove is the first
	{
		head = head->next;
		k->next = NULL;
		delete k;
	}
	else
	{

		for(;p!=NULL&&p->value!=key;)//searching the relevant item
		{
			p=p->next;
			k=k->next;
		}
		if(p==NULL)
			throw "value not found";
		else
		{
			k->next = p->next;
			p->next = NULL;
			delete p;
		}
	}

}








