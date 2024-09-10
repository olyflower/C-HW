/*5. Організуйте цикл do… while, лічильник якого змінюється від 100 до 200 з кроком 2.*/

#include <iostream>
using namespace std;

int main()
{
	int i = 100;
	do
	{
		cout << i << "\n";
		i += 2;

	} while (i <= 200);

	return 0;
}