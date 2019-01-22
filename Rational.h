

class Rational
{
private:
	int mone;
	int mec;
	void reduction();
public:
	Rational(int a = 0, int b = 1);
	void set_mone(int a) { mone = a; }
	void set_mec(int b);
	int get_mone() { return mone; }
	int get_mec() { return mec; }
	void print();
	bool equal(Rational &r);
	
};

