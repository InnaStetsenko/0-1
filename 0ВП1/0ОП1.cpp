#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

// описать дом, его интерьер, экстерьер, и обитателей
// типы сущностей:
// дом,
// комната,
// холодильник,
// еда, напиток,
// кошка
// жилец (человек)
class Room
{
    double square;
    string color; // цвет стен
    // ...
};
class House
{
public:
    // 1) что ты такое - какие сделать поля (аттрибуты, свойства, характеристики) - список переменных/констант, которые описывают сущность
    // какие размеры у этого типа объектов (ширина высота глубина)
    // какого оно цвета
    // какой вес и тд
    int storeys; // этажность
    double square; // площадь жилая
    bool parking; // есть ли паркинг
    bool cozy; // уютно ли там
    int balcony_count; // количество балконов
    string address;
    int count_of_rooms; // количество комнат
    Room* rooms = new Room[3]; // по умолчанию в домах по три комнаты

    /////////////////////////////////////////////////////////////////////
    // 2) что можно делать с помощью объектов таког типа? что умеют делаь сами объекты? что можно сделать с объектами?
    void Print() // посмотреть на дом
    {
        cout << "Этажность дома: " << storeys << "\n";
        cout << "Cколько балконов: " << balcony_count << "\n";
        cout << "Адрес дома: " << address << "\n";
    }
    void Sale() // дом можно продать
    {

    }
    void Pass() // дом можно сдать
    {

    }
    void Repair() // дом можно отремонтировать
    {

    }
    void Give() // дом можно подарить
    {

    }
};
class Fridge
{
public:
    int camera;
    int hight;// высота
    int weight;//ширина
    int depth;//глубина
    int count_shelf;// кол полок
    void Print_Fridge() // посмотреть на холодильник
    {
        cout << "Высота: " << hight << "\n";
        cout << "Ширина: " << weight << "\n";
        cout << "Глубина: " << depth << "\n";
        cout << "Количество полок: " << count_shelf << "\n";
        cout << "Количество камер: " << camera << "\n";
    }
    void Sale_Fridge() // холодильник можно продать
    {

    }
    void Repair_Fridge() // холодильник можно отремонтировать
    {

    }
    void Give_Fridge() // холодильник можно подарить
    {

    }
    void Postpone_Fridge() // холодильник можно перенести
    {

    }
};
class Food
{
public:
    int moloko;
    int kefir;// 
    int soup;//
    bool full;//заполнен
    bool cake;// есть сладкое
    void Print_Food() // посмотреть на холодильник
    {
        cout << "Сладкое есть?: " << cake << "\n";
        
    }
    void Postpone_Food() // перенести еду
    {

    }
    void Throw_out() // выкинуть
    {

    }
    void Wash_Food() // помыть
    {

    }
    void Give_F() // подарить
    {

    }
    void Repair_Food() // отремонтировать
    {

    }
};
class Cat
{
public:
    int number;
    string name_Cat;
    int cat_age;
    int color;
    bool kind;
    int norma_corma;
    void buy_Cat()
    {

    }
    void Give_Cat()
    {

    }

    void Wash_Cat()
    {

    }

    void Print_Cat()
    {
        cout << "Кличка: " << name_Cat << "\n";
        cout << "Норма корма: " << norma_corma << "\n";
    }
    void Treat_Cat()
    {

    }
};
class Person
{
public:
    string Name;
    int Age;
    string Adres_Person;
    int hight_Person;
    int weight_Person;
    
    void Print_Person()
    {
        cout << "Имя: " << Name << "\n";
        cout << "Адрес: " << Adres_Person << "\n";
        cout << "Рост: " << hight_Person << "\n";
    }
    void Move_Person()
    {

    }
    void Work_Person()
    {

    }
    void Rest_Person()
    {

    }
    void Study_Person()
    {

    }
};
int main()
{
    setlocale(0, "");
    // создание объекта класса House - по сути, это переменная с типом House
    House AlexHouse; // квартира Александра в Черновцах
    AlexHouse.balcony_count = 1;
    AlexHouse.address = "проспект Победы, 45";
    AlexHouse.storeys = 5;
    AlexHouse.Print();
    Food onefood;
    onefood.cake = true;
    Person Inna;
    Inna.Adres_Person = "Армейская 11";
    Inna.Name = " Инна";
    Inna.hight_Person = 160;
    Inna.Print_Person();
}

