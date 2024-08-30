/*3. Баги: що неправильно у цій функції?
1) тип функції myFunc - void, в даному випадку це неправильно
2) y = myFunc(int); невірний виклик функції, в дужках треба писати параметр, а не його тип
3) не інізіалізован параметр функції - x
*/

// #include <iostream>
// using namespace std;

// void myFunc(unsigned short int x);
// int main()
// {
// 	unsigned short int x, y;
// 	y = myFunc(int);
// 	cout << "x: " << x << "y: " << y << "\n";
// }
// void myFunc(unsigned short int x)
// {
// 	return (4 * x);
// }

#include <iostream>
using namespace std;

int myFunc(unsigned short int x);

int main()
{
	unsigned short int x = 2, y;
	y = myFunc(x);
	cout << "x: " << x << " y: " << y << "\n";
}

int myFunc(unsigned short int x)
{
	return (4 * x);
}
