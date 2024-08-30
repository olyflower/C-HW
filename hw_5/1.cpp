/*1. Запишіть прототип для функції з ім'ям Perimeter,
яка повертає значення типу unsigned long int та приймає
два параметри типу unsigned short int. */

unsigned long int Perimeter(unsigned short int, unsigned short int);

/*2. Запишіть визначення функції Perimeter згідно з оголошенням
у вправі 1. Два параметри, що нею приймаються, представляють довжину
і ширину прямокутника, а функція повертає його периметр
(подвоєна довжина плюс подвоєна ширина).*/

unsigned long int Perimeter(unsigned short int length, unsigned short int width)
{
	return 2 * (length + width);
}
