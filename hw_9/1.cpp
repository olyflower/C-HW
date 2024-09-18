/*1. Напишіть програму, яка оголошує змінну типу int,
посилання на значення типу int і вказівник на значення типу int.
Використовуйте вказівник та посилання для керування значенням змінної типу int.*/

#include <iostream>
using namespace std;

int main()
{
	int a = 40;

	int &rA = a;
	cout << "rA (посилання): " << rA << endl;

	int *pA = &a;
	cout << "pA (вказівник): " << pA << endl;

	rA = 50;
	cout << "a: " << a << endl;
	cout << "rA (посилання): " << rA << endl;

	*pA = 60;
	cout << "a: " << a << endl;
	cout << "*pA (вказівник): " << *pA << endl;

	return 0;
}