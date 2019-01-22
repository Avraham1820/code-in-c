class List
{

	//protected:
public:
	//--------------------------------------------
	//  inner class link
	//  a single element for the linked List 
	//--------------------------------------------
	class Link
	{
	public:
		// data areas
		int value;
		Link * next;

		// constructor
		Link( int linkValue=0, Link * nextPtr = NULL);
		Link (const Link &);
		~Link(){}


	};	//end of class Link

	//protected:
private:
	// data field
	///*Link* head;*/

public:
	Link* head;
	// constructors
	List();//default
	List(const List&);//copy list
	~List();//destructor - erase list

	// operations
	void add( int value);//insert element into list
	int firstElement() const;//return value of first element
	bool search(const int &value) const;//חיפוש איבר ברשימה
	bool isEmpty() const;//check if empty
	void removeFirst();//remove first elemnt from list
	void clear();//erase list
	void insert(int key);
	void remove(int key);
	List& operator=(const List & );
	//operators

	friend ostream& operator<< (ostream& os,const List& l);//print elements in  list
	friend istream& operator>> (istream& os,List& l);//insert items to list
	friend List merge(const List &, const List &);//merging 2 lists
	friend void makeSet(  List &);
	//friend List merge2(List,List);//merging without duplication


};


