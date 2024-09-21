/*2. Використовуючи клас, створений у вправі 1, за допомогою конструктора,
заданого за замовчуванням, ініціалізуйте змінну його Radius значенням 5.*/

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
	circle.setRadius(5);

	return 0;
}
