/*5. Bugs: знайдіть помилку у наступному фрагменті програми.
#include <iostream>

using namespace std;

int main()
{
	int *pInt;
	*pInt = 9;
	cout << " The value at pInt: "<< *pInt;

	return 0;
}


int *pInt; -  необїідно присвоїти на початку nullptr
чи інізіалізувати його адресою змінної
*/

#include <iostream>
using namespace std;

int main()
{
	int a;
	int *pInt = &a;
	*pInt = 9;

	cout << " The value at pInt: " << *pInt;

	return 0;
}
