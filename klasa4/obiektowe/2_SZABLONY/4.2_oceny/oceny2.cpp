#include<iostream>
#include<cmath>
using namespace std;

//Definicja szablonu klasy (uogólnionej) Oceny
template<class T> //szablon ma jeden parametr szablonowy T
class Oceny {
public:
    //Definicja kontruktora domyœlnego
    Oceny() {
        cout << "Wywo³anie konstruktora klasy ogólnej..." << endl;
    }
    //Definicje szablonów zmiennych cz³onkowskich
    T wyklad;
    T cwiczenia;
    T laboratorium;
    T seminarium;
    //Definicja szablonu funkcji cz³onkowskiej srednia()
    T srednia() {
        return (wyklad + cwiczenia + laboratorium + seminarium) / 4;
        /*UWAGA:
        Je¿eli zmienne cz³onkowskie wyklad, cwiczenia, laboratorium, seminarium nale¿¹ do typu ca³kowitego
        mamy do czynienia z dzieleniem ca³kowitym.*/
    }

};

//Definicja specjalizacji szablonu klasy Oceny dla typu long
template<>
class Oceny<long> {
public:
    //Definicja kontruktora domyœlnego
    Oceny() {
        cout << "Wywo³anie konstruktora klasy specjalizowanej..." << endl;
    }
    //Definicje szablonów zmiennych cz³onkowskich
    long wyklad;
    long cwiczenia;
    long laboratorium;
    long seminarium;
    //Definicja szablonu funkcji cz³onkowskiej srednia()
    long srednia() {
        return (round(wyklad) + round(cwiczenia) + round(laboratorium) + round(seminarium)) / 4;
        /*UWAGA:
        Kod (implementacja) metody œrednia w klasie specjalizowanej ró¿ni siê od kodu szablonu metody o tej samej nazwie
        zdefiniowanej w klasie uogólnionej.*/
    }

};

int main()
{
    //Utworzenie obiektu oceny1
    Oceny<int> oceny1 = Oceny<int>(); //jawne wywo³anie konstruktora domyœlnego
    /*UWAGA:
    Obiekt oceny1 zosta³ utworzony na podstawie klasy ogólnej Oceny po jej konkretyzacji dla typu int.
    Wczeœniej kompilator sprawdzi³, ¿e nie jest dostêpna specjalizacja szablonu Oceny dla typu int.*/
    oceny1.wyklad = 3;
    oceny1.cwiczenia = 4;
    oceny1.laboratorium = 3;
    oceny1.seminarium = 4;
    cout << "Œrednia ocen semestralnych: " << oceny1.srednia() << endl;

    //Utworzenie obiektu oceny2
    Oceny<long> oceny3; //niejawne wywo³anie konstruktora domyœlnego
    /*UWAGA:
    Obiekt oceny2 zostaje utworzony na podstawie specjalizacji szablonu klasy Oceny dla typu danych long.*/
    oceny3.wyklad = 3.0;
    oceny3.cwiczenia = 4.0;
    oceny3.laboratorium = 3.0;
    oceny3.seminarium = 4.0;
    cout << "Œrednia ocen semestralnych: " << oceny3.srednia() << endl;

    return 0;
}