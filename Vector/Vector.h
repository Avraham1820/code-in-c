#include<iostream>
using namespace std;

class Vector{
private:
	int *data;  //pointer to vector
	int size;
	int capacity;
public:

	Vector(int sizeVec = 10);
	Vector(const Vector&);
	~Vector();
	void print() const;
	int getCapacity(){ return capacity; }
	int getSize(){ return size; }
	Vector& operator=(const Vector &);
	bool operator==(const Vector& s) const;
	int operator *(Vector&a);
	Vector operator +(Vector&a);
	void clear();
	void delLast();
	void insert(int val);
	friend ostream& operator<<(ostream& C_out, Vector ob);
};
