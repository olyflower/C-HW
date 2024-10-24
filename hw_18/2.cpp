/*2. Опишіть клас BoundedArray, який є масивом.*/

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

int main()
{
	BoundedArray array(5);
	cout << "Array size: " << array.getSize() << endl;

	cout << "Elements of array: " << endl;
	for (int i = 0; i < array.getSize(); i++)
	{
		array[i] = i * 2;
		cout << array[i] << endl;
	}

	return 0;
}
