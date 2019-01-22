#include"Vector.h"





void Vector::insert(int val)
{
	size++;
	if (size <= capacity)
		data[size - 1] = val;
	else
	{
		size--;
		cout << "ERROR\n";
	}
}

void Vector::delLast()
{
	if (size == 0)
		cout << "ERROR\n";
	else
		size--;
}

void Vector::clear()
{
	size = 0;
}

Vector Vector:: operator +(Vector&a)
{
	Vector temp(size + a.size);
	for (int i = 0; i<size; i++)
		temp.insert(data[i]);

	for (int j = 0; j<a.size; j++)
		temp.insert(a.data[j]);

	return temp;
}


int Vector::operator *(Vector&a)
{
	int sum = 0;
	if (size != a.size)
	{
		cout << "ERROR\n";
		return 0;
	}
	else
	{
		for (int i = 0; i<size; i++)
			sum += (data[i] * a.data[i]);

		return sum;
	}
}



bool Vector::operator==(const Vector& s) const
{
	int k = 1;
	if (capacity == s.capacity)
		if (size == s.size)
		{
		for (int i = 0; i<size&&k; i++)
			if (data[i] != s.data[i])
				k = 0;
		}
	if (k)
		return 1;
	return 0;
}



Vector &  Vector::operator =(const Vector & num)
{

	if (num.size>capacity)
	{
		cout << "ERROR\n";
		/*	return *this;*/
	}

	for (int i = 0; i<num.size; i++)
		data[i] = num.data[i];

	size = num.size;

	return *this;
}



Vector::Vector(int sizeVec)
{
	capacity = sizeVec;
	size = 0;
	data = new int[capacity];
}

Vector::Vector(const Vector& V)
{
	size = V.size;
	data = new int[size];
	for (int i = 0; i<size; i++)
		data[i] = V.data[i];
}

Vector::~Vector()
{
	if (size)  delete[] data;
}

void Vector::print() const
{
	cout << "capacity: " << capacity << " size: " << size << " val: ";
	for (int i = 0; i<size; i++)
		cout << data[i] << ' ';
	cout << endl;
}


ostream& operator<<(ostream& C_out, Vector ob)
{
	for (int i = 0; i<ob.size; i++)
		C_out << ob.data[i] << " ";
	return C_out;
}
