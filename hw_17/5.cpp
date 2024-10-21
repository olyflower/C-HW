/*Додайте дві додаткові змінні-члени до класу з попередніх вправ.
Додайте методи доступу, які повертають значення всіх цих змінних.
Усі функції-члени повинні повертати значення однакового типу та мати однакову сигнатуру.
Для доступу до цих методів використовуйте вказівник на функцію члена.*/

#include <iostream>
using namespace std;

class Cats
{
public:
	Cats(int age, int weight, int height) : catAge(age), catWeight(weight), catTailHeight(height) { numberOfCats++; };
	~Cats() { numberOfCats--; };
	int getAge() const { return catAge; };
	int getWeight() const { return catWeight; };
	int getTailHeight() const { return catTailHeight; };
	static int getNumberOfCats() { return numberOfCats; };

private:
	int catAge;
	int catWeight;
	int catTailHeight;
	static int numberOfCats;
};

int Cats::numberOfCats = 0;

int main()
{
	int (Cats::*getAgePtr)() const = &Cats::getAge;
	int (Cats::*getWeightPtr)() const = &Cats::getWeight;
	int (Cats::*getTailHeightPtr)() const = &Cats::getTailHeight;

	Cats *cat = nullptr;
	cat = new Cats(2, 10, 5);
	cout << "Cat age: " << (cat->*getAgePtr)() << endl;
	cout << "Cat weight: " << (cat->*getWeightPtr)() << endl;
	cout << "Cat tail height: " << (cat->*getTailHeightPtr)() << endl;

	delete cat;

	return 0;
}
