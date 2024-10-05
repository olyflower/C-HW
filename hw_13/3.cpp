/*Жучки: що неправильно у наступній програмі?

unsigned short SomeArray[5][4];
	for (int i = 0; i < 4; i++)
				for (int j = 0; j < 5; j++)
							SomeArray[i][j] = i + j;

1) масив оголошен як SomeArray[5][4], тому i < 4 невірно та j < 5 невірно
2) можна поставити { } для кращої читабільності коду

*/

int main()
{
	unsigned short SomeArray[5][4];
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			SomeArray[i][j] = i + j;
		}
	}

	return 0;
}
