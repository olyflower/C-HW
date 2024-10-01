/*1. Запишіть віртуальний конструктор-копіювальник для класу Square.
class Square : public Rectangle {};*/

#include <iostream>
using namespace std;

class Rectangle
{
public:
	Rectangle() {};
	Rectangle(int length);
	virtual ~Rectangle() {};
	Rectangle(const Rectangle &rhs);

	int getLength() const { return Length; }
	void setLength(int length) { Length = length; }
	virtual Rectangle *Clone() { return new Rectangle(*this); }

protected:
	int Length;

private:
	int Width;
};

Rectangle::Rectangle(int length) : Length(length), Width(10) {}

Rectangle::Rectangle(const Rectangle &rhs) : Length(rhs.getLength())
{
	cout << "Rectangle copy constractor\n";
}

class Square : public Rectangle
{
public:
	Square() {};
	Square(int length);
	Square(const Square &rhs);
	virtual ~Square() {};
	virtual Rectangle *Clone() { return new Square(*this); }
};

Square::Square(int length) : Rectangle(length) {}

Square::Square(const Square &rhs) : Rectangle(rhs)
{
	cout << "Square copy constractor\n";
}

int main()
{
	Square square(30);
	Rectangle *clone = square.Clone();

	cout << "Square length: " << square.getLength() << endl;
	cout << "Square clone length: " << clone->getLength() << endl;

	delete clone;

	return 0;
}
