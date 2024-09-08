/*1. Напишіть програму, яка запитує число та показник ступеня.
Напишіть рекурсивну функцію, яка зводить число в ступінь шляхом багаторазового множення
числа на себе, тобто. якщо число дорівнює 2, а показник ступеня дорівнює 4,
то ця функція має повернути число 16.*/

#include <iostream>
using namespace std;

int numToPower(int, int);

int main()
{
	int num, exponent;

	cout << "Enter number: \n";
	cin >> num;

	cout << "Enter degree: \n";
	cin >> exponent;

	if (exponent < 0)
	{
		cout << "Degree should be a non-negative integer.\n";
		return 1;
	}

	cout << "Result: " << numToPower(num, exponent) << endl;
}

int numToPower(int number, int power)
{
	if (power == 0)
	{
		return 1;
	}
	else
	{
		return number * numToPower(number, power - 1);
	}
}
