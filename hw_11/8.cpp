/*8. Запишіть оголошення класу Square, успадкованого від класу Rectangle,
який, у свою чергу, виготовлений від класу Shape.*/

class Shape
{
};

class Rectangle : public Shape
{
};

class Square : public Rectangle
{
};

int main()
{
	return 0;
}
