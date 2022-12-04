#include <iostream>
#include <string>
using namespace std;
void Wizytówka(string imie, string nazwisko) {
    string wynik = "* " + imie + " " + nazwisko + " *";
    cout << string(wyniik.size(),'*') << endl;
    cout << wynik << endl;
    cout << string(wyniik.size(),'*') << endl;
}

int main()
{
    cout << "Podaj imie: ";
    string imie;
    cin >> imie;
    cout << "Podaj nazwisko: ";
    string nazwisko;
    cin >> nazwisko;
    Wizytówka(imie,nazwisko);
    //..

    string tekst1 {"Ala ma kota"};
    cout << "Tekst: " << tekst1 << "o rozmiarze; " << tekst1.size() << endl;\
    string tekst2  = string(20,'-');
    cout << tekst2 << endl;
    return 0;
}
