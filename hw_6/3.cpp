/*3. Перепишіть клас Employee, щоб зробити дані - члени закритими
і забезпечити відкриті методі доступу для читання і
встановлення всіх даних-членів.*/


class Employee
{
public:
	int getAge() const;
	void setAge(int Age);
	int getYearsOfService() const;
	void setYearsOfService(int YearsOfService);
	double getSalary() const;
	void setSalary(double Salary);

private:
	int age;
	int yearsOfService;
	double salary;
};

int Employee::getAge() const
{
	return age;
}

void Employee::setAge(int Age)
{
	age = Age;
}

int Employee::getYearsOfService() const
{
	return yearsOfService;
}

void Employee::setYearsOfService(int YearsOfService)
{
	yearsOfService = YearsOfService;
}

double Employee::getSalary() const
{
	return salary;
}

void Employee::setSalary(double Salary)
{
	salary = Salary;
}