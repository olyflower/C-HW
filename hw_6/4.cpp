/*4. Напишіть програму з використанням класу Employee,
яка створює два об'єкти класу Employee;
встановлює дані-члени age, Years0fService та Salary, а потім виводить їх значення.*/

#include <iostream>
using namespace std;

class Employee
{
public:
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

int main()
{
	Employee Manager;
	Manager.setAge(35);
	Manager.setYearsOfService(5);
	Manager.setSalary(2200.2);
	Employee Director;
	Director.setAge(36);
	Director.setYearsOfService(2);
	Director.setSalary(10000);

	cout << "Manager is " << Manager.getAge() << " years old, working " << Manager.getYearsOfService() << " years (salary: " << Manager.getSalary() << ")\n";
	cout << "Director is " << Director.getAge() << " years old, working " << Director.getYearsOfService() << " years (salary: " << Director.getSalary() << ")\n";
}