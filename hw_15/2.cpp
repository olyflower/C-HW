/* 2. Виконайте від класу JetPlane, оголошеного в першій вправі, новий клас Boeing747.*/

#include <iostream>
using namespace std;

class Rocket
{
public:
	Rocket() { cout << "Roket constructor" << endl; }
	~Rocket() { cout << "Roket destructor" << endl; }
	void launch()
	{
		cout << "Launching a rocket" << endl;
	}
};

class Airplane
{
public:
	Airplane() { cout << "Airplane constructor" << endl; }
	~Airplane() { cout << "Airplane destructor" << endl; }
};

class JetPlane : public Rocket, public Airplane
{
public:
	JetPlane() { cout << "JetPlane constructor" << endl; }
	~JetPlane() { cout << "JetPlane destructor" << endl; }
};

class Boeing747 : public JetPlane
{
public:
	Boeing747() { cout << "Boeing747 constructor" << endl; }
	~Boeing747() { cout << "Boeing747 destructor" << endl; }
};

int main()
{
	Boeing747 someBoeing747;
	someBoeing747.launch();
}
