#include <iostream>
using namespace std;


class List
{
protected:

	class Link
	{
	public:
		Link( int linkValue, Link * nextPtr);
		Link (const Link &);

		int value;
		Link * next;
	};	
public:

	List();
	List(const List&);
	~List();


	void add( int value);
	int firstElement() const;
	bool search(const int &value) const;
	bool isEmpty() const;
	void removeFirst();
	void clear();

protected:

	Link* head;


};

