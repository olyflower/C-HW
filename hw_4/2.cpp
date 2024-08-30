/*Ведіть програму з вправи 2. Скомпілюйте і запустіть її на виконання.
Ведіть числа 20, 10 і 50. Ви отримали результат який очікували? Чому ні?

c = (a - b) => присвоюємо с нове значення a - b, замість введенного 50 
і далі перевіряємо if (10) => true => тому виконуємо умову if (c = (a - b))

Щоб отримати вірний результат, треба використовувати знак "==" if (c == (a - b))
*/

#include <iostream>

using namespace std;

int main()

{

	int a, b, c;

	cout << "Please enter three numbers) \n";

	cout << "a: ";

	cin >> a;

	cout << "\nb: ";

	cin >> b;

	cout << "\nc: ";

	cin >> c;

	if (c == (a - b))

	{

		cout << "\na: ";

		cout << a;

		cout << " minus b: ";

		cout << b;

		cout << " equals c: ";

		cout << c << endl;
	}

	else

		cout << "a - b does not equal c: " << endl;

	return 0;
}
