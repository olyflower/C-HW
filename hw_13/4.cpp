/*4. Жучки: що неправильно в наступній програмі?

	unsigned short SomeArray[5][4];
	for (int i = 0; i <= 5; i++)
				for (int j = 0; j <= 4; j++)
						SomeArray[i][j] = 0;

i <= 5;  та j <= 4;   не потрібно знак =  , тому що вийдемо за границі масиву

*/

int main()
{
	unsigned short SomeArray[5][4];
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 4; j++)
			SomeArray[i][j] = 0;

	return 0;
}
