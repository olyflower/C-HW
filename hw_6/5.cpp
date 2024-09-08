/*5. На основі програми з вправи 3 створіть метод класу Employee,
який повідомляє, скільки тисяч доларів заробляє службовець,
округляючи відповідь до 10 доларів.*/

#include <iostream>
#include <cmath>
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
	double printSalary() const;

private:
	int age;
	int yearsOfService;
	double salary;
};

double Employee::printSalary() const
{
	return round((salary / 1000.0) * 10.0) / 10.0;
}

int main()
{
	Employee Manager;
	Manager.setSalary(300400.500);
	cout << "Salary: $" << Manager.printSalary() << "K\n";
	return 0;
}