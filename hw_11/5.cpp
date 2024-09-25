/*5. Напишіть програму, яка створює два об'єкти класу SimpleCircle.
Для створення одного об'єкта використовуйте конструктор, заданий за замовчуванням,
а другому екземпляру при оголошенні надайте значення 9.
З кожним із об'єктів використовуйте оператор інкремента та виведіть
отримані значення на друк. Нарешті, надайте значення одного об'єкта іншому
об'єкту та виведіть результат на друк.*/

#include <iostream>
using namespace std;

class SimpleCircle
{
public:
	SimpleCircle();
	SimpleCircle(const SimpleCircle &);
	SimpleCircle(int itsRadius);
	~SimpleCircle();

	void setRadius(int radius) { *Radius = radius; }
	int getRadius() const { return *Radius; }

	const SimpleCircle &operator++();
	const SimpleCircle operator++(int);
	SimpleCircle &operator=(const SimpleCircle &);

private:
	int *Radius;
};

SimpleCircle::SimpleCircle()
{
	Radius = new int;
	*Radius = 0;
}

SimpleCircle::SimpleCircle(const SimpleCircle &rhs)
{
	Radius = new int;
	*Radius = rhs.getRadius();
}

SimpleCircle::SimpleCircle(int itsRadius) : Radius(new int(itsRadius)) {};

SimpleCircle::~SimpleCircle()
{
	delete Radius;
	Radius = nullptr;
}

const SimpleCircle &SimpleCircle::operator++()
{
	++(*Radius);
	return *this;
}

const SimpleCircle SimpleCircle::operator++(int)
{
	SimpleCircle temp(*this);
	++(*Radius);
	return temp;
}

SimpleCircle &SimpleCircle::operator=(const SimpleCircle &rhs)
{
	if (this == &rhs)
		return *this;
	*Radius = rhs.getRadius();
	return *this;
}

int main()
{
	SimpleCircle circle1;
	circle1.setRadius(20);

	SimpleCircle circle2(9);

	++circle1;
	cout << "preincrement result circle1 Radius: " << circle1.getRadius() << endl;

	circle1++;
	cout << "postincrement result circle1 Radius: " << circle1.getRadius() << endl;

	++circle2;
	cout << "preincrement result circle2 Radius: " << circle2.getRadius() << endl;

	circle2++;
	cout << "postincrement result circle2 Radius: " << circle2.getRadius() << endl;

	circle2 = circle1;

	cout << "Radius circle2 after '=': " << circle2.getRadius() << endl;

	return 0;
}
