/*5. Жучки: що неправильно у цій програмі?
замість того, щоб створювати дружній класс у функції void setValue,
треба створити дружню функцію у класі class Animal (для доступу до приватних членів класу)


6. Виправте лістинг, наведений у вправі 5, та відкомпілюйте його.
*/

#include <iostream>
#include <string>

using namespace std;


class Animal
{
public:
	int GetWeight() const { return itsWeight; }
	int GetAge() const { return itsAge; }

	friend void setValue(Animal &, int);

private:
	int itsWeight;
	int itsAge;
};

void setValue(Animal &theAnimal, int theWeight)
{
	// friend class Animal;
	theAnimal.itsWeight = theWeight;
}

int main()
{
	Animal peppy;
	setValue(peppy, 5);
	return 0;
}
