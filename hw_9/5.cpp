/*6. Напишіть програму, яка призводить до витоку пам'яті.*/

#include <iostream>
using namespace std;

int main()
{
	unsigned short int *pA = new unsigned short int;
	*pA = 10;
	cout << "*pA: " << *pA << endl;

	long *pB = new long;
	*pB = 90000;
	cout << "*pB: " << *pB << endl;

	return 0;
}
