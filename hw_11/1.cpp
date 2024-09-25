/*1. Перевантажте оператори преінкремента та постінкремента для використання
у вашому класі SimpleCircle зі змінною itsRadius.*/

#include <iostream>
using namespace std;

class SimpleCircle
{
public:
	SimpleCircle();
	SimpleCircle(int itsRadius);
	~SimpleCircle() {};

	void setRadius(int radius) { Radius = radius; }
	int getRadius() const { return Radius; }

	const SimpleCircle &operator++();
	const SimpleCircle operator++(int);

private:
	int Radius;
};

SimpleCircle::SimpleCircle() : Radius(0) {};

SimpleCircle::SimpleCircle(int itsRadius) : Radius(itsRadius) {};

const SimpleCircle &SimpleCircle::operator++()
{
	++Radius;
	return *this;
};

const SimpleCircle SimpleCircle::operator++(int)
{
	SimpleCircle temp(*this);
	++Radius;
	return temp;
};

int main()
{
	SimpleCircle circle;
	SimpleCircle circle2(10);

	++circle2;
	cout << "preincrement result: " << circle2.getRadius() << endl;

	circle2++;
	cout << "postincrement result: " << circle2.getRadius() << endl;

	return 0;
}
