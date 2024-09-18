/*8. Bugs: що неправильно у цій програмі?

1) не звільняється пам'ять, виділена Cat *pCat = new Cat(age);
2) Cat &MakeCat(int age); повертає посилання на об'єкт у динамічній пам'яті

це призводить до витоку пам'яті
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

Cat &MakeCat(int age);

int main()
{
	int age = 7;
	Cat Boots = MakeCat(age);
	cout << "Boots is: " << Boots.GetAge() << " years old" << endl;
	return 0;
}

Cat &MakeCat(int age)
{
	Cat *pCat = new Cat(age);
	return *pCat;
}
