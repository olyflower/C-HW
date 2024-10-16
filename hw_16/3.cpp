/*﻿Напишіть коротку програму, яка оголошує клас з однією звичайною змінною-членом
та однією статичною змінною-членом. Створіть конструктор, який виконує ініціалізацію
змінної-члена та збільшення статичної змінної-члена. Потім оголосіть деструктор,
який зменшує на одиницю значення статичної змінної.*/

#include <iostream>
using namespace std;

class Cats
{
public:
	Cats(string name) : catName(name)
	{
		cout << "Set static var" << endl;
		numberOfCats++;
	};
	~Cats()
	{
		cout << "Call destructor" << endl;
		numberOfCats--;
	};
	static int numberOfCats;

private:
	string catName;
};

int Cats::numberOfCats = 0;

int main()
{
	Cats *cat1 = nullptr;
	Cats *cat2 = nullptr;

	cat1 = new Cats("Tom");
	cout << "Number of Cats: " << Cats::numberOfCats << endl;

	cat2 = new Cats("Barsik");
	cout << "Number of Cats: " << Cats::numberOfCats << endl;

	delete cat1;
	cat1 = nullptr;
	delete cat2;
	cat2 = nullptr;

	cout << "Number of Cats: " << Cats::numberOfCats << endl;

	return 0;
}
