/*4. Баги: що неправильно у цій функції?

1) int myFunc(unsigned short int x);
{
    return (4 * x);
} 
не потрібна крапка с комою після int myFunc(unsigned short int x); ,
так як це не прототип функції, а вже її визначення
2) треба ініціалізувати значення x    unsigned short int x, y;
*/

// #include <iostream>
// using namespace std;

// int myFunc(unsigned short int x);

// int main()
// {
// 	unsigned short int x, y;
// 	y = myFunc(x);
// 	cout << "x: " << x << " y: " << y << "\n";
// }

// int myFunc(unsigned short int x);
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
