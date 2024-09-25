/*2. Змініть SimpleCircle таким чином, щоб зберігати itsRadius
в динамічній області пам'яті і фіксувати існуючі методи.*/

#include <iostream>
using namespace std;

class SimpleCircle
{
public:
	SimpleCircle();
	SimpleCircle(int itsRadius);
	~SimpleCircle();

	void setRadius(int radius) { *Radius = radius; }
	int getRadius() const { return *Radius; }

	const SimpleCircle &operator++();
	const SimpleCircle operator++(int);

private:
	int *Radius;
};

SimpleCircle::SimpleCircle() : Radius(new int(0)) {};

SimpleCircle::SimpleCircle(int itsRadius) : Radius(new int(itsRadius)) {};

SimpleCircle::~SimpleCircle()
{
	delete Radius;
	Radius = nullptr;
};

const SimpleCircle &SimpleCircle::operator++()
{
	++(*Radius);
	return *this;
};

const SimpleCircle SimpleCircle::operator++(int)
{
	SimpleCircle temp(*this);
	++(*Radius);
	return temp;
};

int main()
{
	SimpleCircle circle;
	SimpleCircle circle2(10);

	++circle2;
	cout << "preincrement result: " << circle2.getRadius() << endl;

	return 0;
}
