/* Введіть, скомпілюєте і запустіть на виконання програму з вправи 4. 
Який був результат? Чому?

c - не ініціалізована, c = (a - b) в результаті цього виразу с присвоюється 0,
 if (c = (a - b)) => if (0) => false => умова не виконується, в результаті нічого не виведеться*/


#include <iostream>

using namespace std;
int main()

{

	int a = 1, b = 1, c;

	if (c = (a - b))

		cout << "The value of c is: " << c;

	return 0;
}
