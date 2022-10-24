#include<iostream>
using namespace std;

//Definicja szablonu klasy Oceny
template<class T, int n>
//UWAGA:
//Szablon klasy oceny ma dwa parametry szablonowe: ugólniony typ danych T oraz liczbê ca³kowit¹ n.
class Oceny {
public:
    T oceny[n]; //zmienna cz³onkowska
    T max() { //funkcja cz³onkowska
        T temp = oceny[0];
        for (int i = 0; i < n; i++) {
            if (oceny[i] > temp) temp = oceny[i];
        }
        return temp;
    }

    T min() { //funkcja cz³onkowska
        T temp = oceny[0];
        for (int i = 0; i < n; i++) {
            if (oceny[i] < temp) temp = oceny[i];
        }
        return temp;
    }
    T srednia() {
        T suma = 0;
        for (int i = 0; i < n; i++) {
            suma += oceny[i];
        }
        return suma / n;
    }
};

int main()
{
    //Utworzenie i inicjalizacja obiektu oceny
    Oceny<float, 6> oceny{ 3,5,4,1,2,6 };
    /*UWAGA:
    Szablon klasy Oceny zosta³ skonkretyzowany za pomoc¹ argumentów szablonowych: typu danych int oraz liczby 3.
    Tym samym zosta³a wygenerowana instancja szablonu klasy Oceny - nowa klasa, w której uogólniony typ danych T zosta³
    zast¹piony typem ca³kowitym int, a parametr n - liczb¹ 3.
    Obiekt oceny jest instancj¹ w³aœnie tej klasy.*/
    cout << "Najwy¿sza z oceny: " << oceny.max() << endl;
    cout << "Najni¿sza z oceny: " << oceny.min() << endl;
    cout << "Srednia ocen: " << oceny.srednia() << endl;
    return 0;
}