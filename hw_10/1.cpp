/*1. Представте оголошення класу SimpleCircle (просте коло)
з єдиною зміною-членом його Radius (радіус).
У класі повинні використовуватися конструктор та деструктор,
задані за умовчанням, а також метод встановлення радіусу.*/

#include <iostream>
using namespace std;

class SimpleCircle
{
public:
	SimpleCircle() {};
	~SimpleCircle() {};

	void setRadius(int radius)
	{
		Radius = radius;
	}

private:
	int Radius;
};

int main()
{
	SimpleCircle circle;

	return 0;
}
