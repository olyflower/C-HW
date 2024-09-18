/* 7. Виправте програму із вправи 6.*/

#include <iostream>
using namespace std;

int main()
{
	unsigned short int *pA = new unsigned short int;
	*pA = 10;
	cout << "*pA: " << *pA << endl;
	delete pA;
	pA = nullptr;

	long *pB = new long;
	*pB = 90000;
	cout << "*pB: " << *pB << endl;
	delete pB;
	pB = nullptr;

	return 0;
}
