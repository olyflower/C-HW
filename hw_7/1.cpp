/*1. Яким буде значення змінної x після завершення циклу
for (int x = 0; x < 100; x++)?
значення змінної x після завершення циклу буде 100
*/

/*2. Створіть вкладений цикл for, що заповнює нулями масив розміром 10×10.*/

#include <iostream>
using namespace std;

int main()
{
	for (int i = 0; i < 10; i++)
	{
		cout << endl;
		for (int j = 0; j < 10; j++)
		{
			cout << 0;
		}
	}
	cout << endl;
}