/*6. Змініть клас Employee так, щоб можна було ініціалізувати дані-члени age,
YearsofService і Salary у процесі "створення" службовця.*/

#include <iostream>
using namespace std;

class Employee
{
public:
	Employee(int initialAge, int initialYearsOfService, double initialSalary);
	~Employee();
	int getAge() const { return age; };
	void setAge(int Age) { age = Age; };
	int getYearsOfService() const { return yearsOfService; };
	void setYearsOfService(int YearsOfService) { yearsOfService = YearsOfService; };
	double getSalary() const { return salary; };
	void setSalary(double Salary) { salary = Salary; };

private:
	int age;
	int yearsOfService;
	double salary;
};

Employee::Employee(int initialAge, int initialYearsOfService, double initialSalary)
{
	age = initialAge;
	yearsOfService = initialYearsOfService;
	salary = initialSalary;
}

Employee::~Employee() {}

int main()
{
	Employee Manager(30, 3, 30000.00);
	cout << "Age: " << Manager.getAge() << "\n";
	cout << "Years of service: " << Manager.getYearsOfService() << "\n";
	cout << "Salary: " << Manager.getSalary() << "\n";
}
