/*Запишіть програмний код, який ініціалізує значенням 0 всі
елементи створеного перед цим масиву.*/

#include <iostream>

using namespace std;

int main()
{
	int Arr[3][3];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			Arr[i][j] = 0;
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << Arr[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
