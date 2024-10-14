/*1. Опишіть клас JetPlane (Реактивний літак), успадковуючи його від двох
базових класів – Rocket (Ракета) та Airplane (Літак).*/

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

int main()
{
	JetPlane someJetPlan;
	someJetPlan.launch();
}
