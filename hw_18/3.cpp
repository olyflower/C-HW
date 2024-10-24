/*3. Опишіть клас Set, який виконується в межах масиву BoundedAray.*/

#include <iostream>
#include <stdexcept>
using namespace std;

class BoundedArray
{
public:
	BoundedArray() {};
	BoundedArray(int size);
	~BoundedArray() {};
	int &operator[](int index);

	int getSize() const { return arraySize; };

private:
	static const int maxArraySize = 100;
	int array[maxArraySize];
	int arraySize;
};

BoundedArray::BoundedArray(int size) : arraySize(size)
{
	if (arraySize > maxArraySize)
	{
		arraySize = maxArraySize;
	}
	for (int i = 0; i < arraySize; i++)
	{
		array[i] = 0;
	}
}

int &BoundedArray::operator[](int index)
{
	if (index < 0 || index >= arraySize)
	{
		throw out_of_range("Index out of range");
	}
	return array[index];
}

class Set
{
public:
	Set(int size) : setValues(size) {};
	~Set() {};

	int getSetSize() const { return setValues.getSize(); }

private:
	BoundedArray setValues;
};

int main()
{
	Set set(10);
	cout << set.getSetSize() << endl;

	return 0;
}
