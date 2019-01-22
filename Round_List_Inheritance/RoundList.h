

#include "List.h"



class RoundList : public List 
{

protected:
	List::Link *last;

public:


	RoundList ();//constructor
	//RoundList(RoundList & rl);
	//~RoundList();
	int search(int index);//

	void add(int value);//add to first place


	void clear();//make the list empty
	void removeFirst();//delete the firstplace
	void addToEnd(int value);

	//friend ostream& operator<< (ostream& os,List& l);
};