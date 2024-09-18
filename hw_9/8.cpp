/*9. Виправте програму із вправи 8.

Cat *MakeCat(int age)
{
	Cat *pCat = new Cat(age);
	return pCat;
}    замість посилання повертаємо вказівник

Cat *pBoots = MakeCat(age);  створюємо об'єкт і повертаємо вказівник

 pBoots->GetAge() доступаємость до метода класу

delete pBoots;  звільняємо пам'ять

*/

#include <iostream>

using namespace std;

class Cat
{
public:
	Cat(int age) { itsAge = age; }
	~Cat() {}
	int GetAge() const { return itsAge; }

private:
	int itsAge;
};

Cat *MakeCat(int age);

int main()
{
	int age = 7;
	Cat *pBoots = MakeCat(age);
	cout << "Boots is: " << pBoots->GetAge() << " years old" << endl;
	delete pBoots;

	return 0;
}

Cat *MakeCat(int age)
{
	Cat *pCat = new Cat(age);
	return pCat;
}
