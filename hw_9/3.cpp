/*4. Напишіть програму, яка створює блукаючий вказівник.*/

#include <iostream>
using namespace std;

int main()
{
	unsigned short int *pA = new unsigned short int;
	*pA = 10;
	cout << "*pA: " << *pA << endl;
	delete pA;

	long *pB = new long;
	*pB = 90000;
	cout << "*pB: " << *pB << endl;

	*pA = 20;
	cout << "*pA: " << *pA << endl;
	cout << "*pB: " << *pB << endl;
	delete pB;

	return 0;
}