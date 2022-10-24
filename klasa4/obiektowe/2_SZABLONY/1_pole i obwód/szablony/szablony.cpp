#include <iostream>

using namespace std;

//Definicja szablonu - wzorca funkcji polePr()
template <typename T> //Delaracja parametru T szablonu
T polePr(T pBok1, T pBok2) {
    return(pBok1 * pBok2);
}

//Definicja szablonu - wzorca funkcji obwodPr()
template <typename T> //Deklaracja parametru T szablonu
T obwodPr(T pBok1, T pBok2) {
    return (2 * pBok1 + 2* pBok2);
}

template <typename O>
O poleKo(O pi) {
    return (3.14 * (pi * pi));
}

template <typename O>
O obwodKo(O pi) {
    return (2 * 3.14 * pi);
}
int main()
{
    float bok1{ 1.5 }, bok2{ 2.5 }; //zmienne pomocnicze reprezentuj¹ce boki prostok¹ta
    float pi{ 4.5 }; //zmienna pomocnicza reprezentuje pi

    //wywo³anie funkcji w sposob jawny - podajemy typ
    cout << "Pole prostakata wynosi: " << polePr<int>(bok1, bok2) << endl;
    cout << "Obwod prostakata wynosi: " << obwodPr<int>(bok1, bok2) << endl << endl;

    //wywo³anie funkcji w sposob nie jawny - nie podajemy typu, kompilator sam okresla
    cout << "Pole prostakata wynosi: " << polePr(bok1, bok2) << endl;
    cout << "Obwod prostakata wynosi: " << obwodPr(bok1, bok2) << endl << endl;

    cout << "Pole kola wynosi: " << poleKo(pi) << endl;
    cout << "Obwod kola wynosi: " << obwodKo(pi) << endl;

    return 0;
}



