/*4. Організуйте цикл while, лічильник якого змінюється від 100 до 200 з кроком 2.*/

#include <iostream>
using namespace std;

int main()
{
	int i = 100;
	while (i <= 200)
	{
		cout << i << "\n";
		i += 2;
	}
	return 0;
}