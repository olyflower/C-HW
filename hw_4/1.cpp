#include <iostream>
using namespace std;

int main()
{
	int a, b;

	cout << "Enter first number a: \n";
	cin >> a;

	cout << "Enter second number b: \n";
	cin >> b;

	if (a > b)
	{
		cout << "a > b \n";
		a = b;
	}
	else
	{
		cout << "a < b \n";
		b = a;
	}

	cout << "New numbers: a = " << a << ", b = " << b << "\n";
}
