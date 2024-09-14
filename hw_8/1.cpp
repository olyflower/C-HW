#include <iostream>
using namespace std;

/*1. Поясніть зміст наступних об'яв змінних.

	• int *pOne;   - оголошення вказівника *pOne типу int

	• int vTwo:   - оголошення змінной vTwo типу int

	• int *pThree = &vTwo; - присвоєння вказівнику типу int *pThree адреси змінної vTwo


2. Допустимо, в програмі оголошена змінна yourAge типу unsigned short.
Як оголосити вказівник, що дозволяє маніпулювати цією змінною?
*/

unsigned short yourAge;
unsigned short *pYourAge = &yourAge;

/*3. За допомогою вказівника присвойте змінній вашого значення 50.*/

int main()
{
	int a = 10;
	int *pA = &a;
	*pA = 50;

	cout << "a: " << a << endl;

	return 0;
}
