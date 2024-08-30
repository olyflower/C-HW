/* 5. Напишіть функцію, яка приймає два параметри типу unsigned short int
і повертає результат ділення першого параметра на другий.
Функція не повинна виконувати операцію поділу,
якщо друге число дорівнює нулю, але в цьому випадку вона має повернути значення -1.

 6. Напишіть програму, яка запитує у користувача два числа і викликає функцію,
записану при виконанні вправи 5. Виведіть результат або повідомлення про помилку,
якщо функція поверне значення, що дорівнює - 1.*/

#include <iostream>
using namespace std;

int Divide(unsigned short int, unsigned short int);

int main()
{
	unsigned short int a;
	unsigned short int b;
	int result;

	cout << "Enter first number: ";
	cin >> a;
	cout << "Enter second number: ";
	cin >> b;
	result = Divide(a, b);
	if (result != -1)
	{
		cout << "Result: " << result << "\n";
	}
	else
	{
		cout << "Error: divide dy zero!\n";
	}

	return 0;
}

int Divide(unsigned short int x, unsigned short int y)
{
	if (y != 0)
	{
		return x / y;
	}
	else
	{
		return -1;
	}
}
