/*7. Баги: що неправильно в наступному оголошенні?

немає крапки з комою в кінці

*/

// class Square
// {
// public:
//     int Side;
// }

class Square
{
public:
    int Side;
};

/*8. Баги: що дуже корисне відсутнє у наступному оголошенні класу?

Відсутній метод для встановлення itsAge
*/

// class Cat
// {
//     int GetAge() const;

// private:
//     int itsAge;
// };

class Cat
{
    int GetAge() const;
    void SetAge(int age);

private:
    int itsAge;
};

/*9. Баги: які три помилки виявить компілятор у цьому коді?

1) 	myTV.itsStation = 9; правильно встановлювати значення через методи класу
2)  TV.SetStation(10); правильно метод викликати на об'єкті класу
3)	TV myOtherTV(2); правильно спочатку оголосити конструктор

*/

// class TV
// {
// public:
//     void SetStation(int Station);
//     int GetStation() const;

// private:
//     int itsStation;
// };
// main()
// {
//     TV myTV;
//     myTV.itsStation = 9;
//     TV.SetStation(10);
//     TV myOtherTV(2);
// }

class TV
{
public:
    TV(int initialStation);
    void SetStation(int Station);
    int GetStation() const;

private:
    int itsStation;
};

TV::TV(int initialStation)
{
    itsStation = initialStation;
}

int main()
{
    TV myTV(6);
    myTV.SetStation(9);
    myTV.SetStation(10);
    TV myOtherTV(2);
}
