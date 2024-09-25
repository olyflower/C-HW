/*6. Жучки: що неправильно у наступному прикладі використання оператора присвоєння?*/

// SQUARE SQUARE::operator=(const SQUARE &rhs)
// {
// 	itsSide = new int;
// 	*itsSide = rhs.GetSide();
// 	return *this:
// }   

/*
1) відсутня перевірка чи дорівнює об'єкт самому собі
2) відсутній опереатор delete
3) return *this:    в кінці крапка з комою
*/