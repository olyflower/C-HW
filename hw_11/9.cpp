/*9. Припустимо, що у попередньому прикладі об'єкт класу Shape
не використовує параметри, об'єкт класу Rectangle приймає два параметри
(length і width), а об'єкт класу Square - один параметр (length);
запишіть конструктор класу Square.*/

#include <iostream>
using namespace std;

class Shape
{
public:
	Shape() {};
	~Shape() {};
};

class Rectangle : public Shape
{
public:
	Rectangle() {};
	Rectangle(int length);
	~Rectangle() {};

	int getLength() const { return Length; }
	void setLength(int length) { Length = length; }

protected:
	int Length;

private:
	int Width;
};

Rectangle::Rectangle(int length) : Length(length), Width(10) {}

class Square : public Rectangle
{
public:
	Square() {};
	Square(int length);
	~Square() {};
};

Square::Square(int length) : Rectangle(length) {}

int main()
{
	Square square(30);
	cout << "Square length: " << square.getLength() << endl;

	return 0;
}
