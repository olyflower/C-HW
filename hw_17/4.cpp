/*Створіть у програмі з вправи 3 вказівник на функцію-член для доступу
до значення нестатичної змінної-члена і скористайтеся ним для виведення цих значень на друк.*/

#include <iostream>
using namespace std;

class Cats
{
public:
	Cats(int age) : catAge(age) { numberOfCats++; };
	~Cats() { numberOfCats--; };
	int getAge() const { return catAge; };
	static int getNumberOfCats() { return numberOfCats; };

private:
	int catAge;
	static int numberOfCats;
};

int Cats::numberOfCats = 0;

int main()
{
	int (Cats::*getAgePtr)() const = &Cats::getAge;

	Cats *cats[3];
	for (int i = 0; i < 3; i++)
	{
		cats[i] = new Cats(i + 1);
	}
	for (int i = 0; i < 3; i++)
	{
		cout << "Cat age: " << (cats[i]->*getAgePtr)() << endl;

		cout << "Number of cats: " << Cats::getNumberOfCats() << endl;
		delete cats[i];
		cats[i] = nullptr;
	}

	cout << "Number of cats: " << Cats::getNumberOfCats() << endl;

	return 0;
}
