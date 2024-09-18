/*5. Виправте програму з вправи 4, щоб виправити блукаючий вказівник.*/

#include <iostream>
using namespace std;

int main()
{
	unsigned short int *pA = new unsigned short int;
	*pA = 10;
	cout << "*pA: " << *pA << endl;
	delete pA;
	pA = nullptr;

	pA = new unsigned short int;
	*pA = 20;
	cout << "*pA (new): " << *pA << endl;

	long *pB = new long;
	*pB = 90000;
	cout << "*pB: " << *pB << endl;

	delete pA;
	pA = nullptr;
	delete pB;
	pB = nullptr;

	return 0;
}
