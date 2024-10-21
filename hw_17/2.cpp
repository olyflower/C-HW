/*Використовуючи програмний блок із вправи 1, напишіть коротку виконувальну програму,
яка створює три об'єкти, а потім виводить значення їх змінних-членів та
статичної змінної-члена класу. Потім послідовно видаляйте об'єкти та виводьте
на екран значення статичної змінної-члена.*/

#include <iostream>
using namespace std;

class Cats
{
public:
	Cats(int age) : catAge(age) { numberOfCats++; };
	~Cats() { numberOfCats--; };
	int getAge() const { return catAge; };

	static int numberOfCats;

private:
	int catAge;
};

int Cats::numberOfCats = 0;

int main()
{
	Cats *cats[3];
	for (int i = 0; i < 3; i++)
	{
		cats[i] = new Cats(i+1);
	}
	for (int i = 0; i < 3; i++)
	{
		cout << "Cat age: " << cats[i]->getAge() << endl;
		cout << "Number of cats: " << Cats::numberOfCats << endl;
		delete cats[i];
		cats[i] = nullptr;
	}
	cout << "Number of cats: " << Cats::numberOfCats << endl;

	return 0;
}
