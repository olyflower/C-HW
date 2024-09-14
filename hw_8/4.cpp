/*
6. Bugs: знайдіть помилку у наступному фрагменті програми.

#include <iostream>

using namespace std;

int main()
{
	int SomeVariable = 5;
	cout << "SomeVariable: " << SomeVariable << "\n";
	int *pVar = &SomeVariable;
	pVar = 9;
	cout << "SomeVariable: " << *pVar << "\n";
	return 0;
}


pVar = 9; - потрібно добавити оператор розіменування  *pVar = 9;

*/

#include <iostream>

using namespace std;

int main()
{
	int SomeVariable = 5;
	cout << "SomeVariable: " << SomeVariable << "\n";
	int *pVar = &SomeVariable;
	*pVar = 9;
	cout << "SomeVariable: " << *pVar << "\n";

	return 0;
}
