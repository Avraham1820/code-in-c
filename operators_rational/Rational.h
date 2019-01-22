

class Rational
{
private:
	int mone;
	int mec;
	void reduction();
public:
	friend void Make_a_reduction (Rational&, Rational&);
	Rational(int a = 0, int b = 1);
	Rational(const Rational&);
	void set_mone(int a) { mone = a; }
	void set_mec(int b);
	int get_mone() { return mone; }
	int get_mec() { return mec; }
	void print()const;
	//bool equal(Rational &r)const;
	
	//all the operators we have defined
	Rational operator=(const Rational &);
	void operator*=(const Rational &);//ther is no shirshur in *=, so void
	//**************operator overloading
	Rational operator+(const Rational &);
	Rational operator-(const Rational &);
	Rational operator*(const Rational &);
	Rational operator/(const Rational &);
	//***********************
	bool operator!=(const Rational &)const;
	bool operator==(const Rational &)const;
	bool operator<=(const Rational &)const;
	bool operator>=(const Rational &)const;
	bool operator<(const Rational &)const;
	bool operator>(const Rational &)const;
	//***********************
	Rational operator++();
	Rational operator++(int);
	Rational operator--();
	Rational operator--(int);
};


