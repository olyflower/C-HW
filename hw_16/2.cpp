/* Змініть програму з попередньої вправи таким чином, щоб клас Саг теж став ADT,
і зробіть від нього три нові класи: SportsCar (Спортивний автомобіль),
Wagon (Фургон) та Coupe (Двомісний автомобіль-купе).
У класі Car повинна заміщатися одна з віртуальних функцій,
оголошених у класі Vehicle, з викликом базового класу.*/

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

int Vehicle::GetSpeed() const
{
	cout << "Method from ADT Vehicle\n";
	return 0;
}

class Car : public Vehicle
{
public:
	Car() {};
	~Car() {};
	int GetSpeed() const
	{
		return Vehicle::GetSpeed();
	}
	string GetName() const = 0;

	virtual string GetType() const = 0;
};

class SportsCar : public Car
{
public:
	SportsCar(int speed, string name, string category) : sportsCarSpeed(speed), sportCarName(name), sportCarCategory(category) {};
	~SportsCar() {};
	int GetSpeed() const { return sportsCarSpeed; }
	string GetName() const { return sportCarName; };
	string GetType() const { return sportCarCategory; }

private:
	int sportsCarSpeed;
	string sportCarName;
	string sportCarCategory;
};

class Wagon : public Car
{
public:
	Wagon(int speed, string name, string category) : wagonSpeed(speed), wagonName(name), wagonCategory(category) {};
	~Wagon() {};
	int GetSpeed() const { return wagonSpeed; }
	string GetName() const { return wagonName; };
	string GetType() const { return wagonCategory; }

private:
	int wagonSpeed;
	string wagonName;
	string wagonCategory;
};

class Coupe : public Car
{
public:
	Coupe(int speed, string name, string category) : coupeSpeed(speed), coupeName(name), coupeCategory(category) {};
	~Coupe() {};
	int GetSpeed() const { return coupeSpeed; }
	string GetName() const { return coupeName; };
	string GetType() const { return coupeCategory; }

private:
	int coupeSpeed;
	string coupeName;
	string coupeCategory;
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
	vehicle = new Bus(200, "Opel");
	cout << "Bus speed: " << vehicle->GetSpeed() << endl;
	delete vehicle;
	vehicle = nullptr;

	Car *car = nullptr;
	car = new SportsCar(300, "Honda", "Sport");
	cout << "Car name: " << car->GetName() << ", Car speed: " << car->GetSpeed() << ", Car type: " << car->GetType() << endl;
	cout << "Car speed from Car: " << car->Car::GetSpeed() << endl;

	delete car;
	car = nullptr;

	car = new Wagon(200, "Kia", "Wagon");
	cout << "Car name: " << car->GetName() << ", Car speed: " << car->GetSpeed() << ", Car type: " << car->GetType() << endl;

	delete car;
	car = nullptr;

	car = new Coupe(320, "Mazda", "Coupe");
	cout << "Car name: " << car->GetName() << ", Car speed: " << car->GetSpeed() << ", Car type: " << car->GetType() << endl;

	delete car;
	car = nullptr;

	return 0;
}
