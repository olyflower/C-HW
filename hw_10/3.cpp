/*3. Додайте до класу новий конструктор, який надає
значення свого параметра змінної його itsRadius.*/

#include <iostream>
using namespace std;

class SimpleCircle
{
public:
	SimpleCircle() {};
	SimpleCircle(int radius) : Radius(radius) {};
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
	SimpleCircle circle2(10);

	return 0;
}
