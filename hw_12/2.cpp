/*2. Жучки: що неправильно у наступному програмному коді?

void SomeFunction(Shape);
Shape *pRect = new Rectangle;
SomeFunction(*pRect);

в SomeFunction надо передавати посилання на об'єкт Shape, щоб не створювалась копія
void SomeFunction(Shape& shape);

далі delete pRect

*/
