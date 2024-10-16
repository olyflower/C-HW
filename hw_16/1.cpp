/*Напишіть програму, яка виробляє класи Саг (Легковий автомобіль) та Bus (Автобус)
від класу Vehicle (Машина). Опишіть клас Vehicle як абстрактний тип даних із двома
чистими віртуальними функціями. Класи Саг та Bus не повинні бути абстрактними.*/

#include <iostream>
using namespace std;

class Vehicle
{
public:
	Vehicle() {}
	virtual ~Vehicle() {}
	virtual int GetSpeed() const = 0;
	virtual string GetName() const = 0;
};

class Car : public Vehicle
{
public:
	Car(int speed, string name) : carSpeed(speed), carName(name) {};
	~Car() {};
	int GetSpeed() const { return carSpeed; };
	string GetName() const { return carName; };

private:
	int carSpeed;
	string carName;
};

class Bus : public Vehicle
{
public:
	Bus(int speed, string name) : busSpeed(speed), busName(name) {};
	~Bus() {};
	int GetSpeed() const { return busSpeed; }
	string GetName() const { return busName; }

private:
	int busSpeed;
	string busName;
};

int main()
{
	Vehicle *vehicle = nullptr;

	vehicle = new Car(300, "Honda");
	cout << "Car name: " << vehicle->GetName() << ", Car speed: " << vehicle->GetSpeed() << endl;
	delete vehicle;
	vehicle = nullptr;

	vehicle = new Bus(200, "Opel");
	cout << "Bus name: " << vehicle->GetName() << ", Bus speed: " << vehicle->GetSpeed() << endl;

	delete vehicle;
	vehicle = nullptr;

	return 0;
}
