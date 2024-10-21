/*1.Напишіть коротку програму, яка оголошує клас з однією звичайною змінною-членом
та однією статичною змінною-членом. Створіть конструктор, який виконує ініціалізацію
змінної-члена та збільшення статичної змінної-члена. Потім оголосіть деструктор,
який зменшує на одиницю значення статичної змінної.*/

#include <iostream>
using namespace std;

class Cats
{
public:
	Cats(int age) : catAge(age)
	{
		cout << "Set static var" << endl;
		cout << "Call constructor" << endl;
		numberOfCats++;
	};
	~Cats()
	{
		cout << "Call destructor" << endl;
		numberOfCats--;
	};
	static int numberOfCats;

private:
	int catAge;
};

int Cats::numberOfCats = 0;

int main()
{
	Cats *cat1 = nullptr;
	Cats *cat2 = nullptr;

	cat1 = new Cats(2);
	cout << "Number of cats: " << Cats::numberOfCats << endl;

	cat2 = new Cats(1);
	cout << "Number of cats: " << Cats::numberOfCats << endl;

	delete cat1;
	cat1 = nullptr;
	delete cat2;
	cat2 = nullptr;

	cout << "Number of cats: " << Cats::numberOfCats << endl;

	return 0;
}
