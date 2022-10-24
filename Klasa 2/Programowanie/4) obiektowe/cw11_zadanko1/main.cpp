#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;
int odp;
int a;
int b;
int c = 1;

void wstep(){
    cout << "Witaj! Wybierz co chesz zrobic:" << endl;
    cout << "1 - Wizytowka" << endl;
    cout << "2 - Potegowanie" << endl;
    cout << "3 - Koniec programu" << endl << endl;
    cin >> odp;
}

void wizytowka(){
    cout << "*******************" << endl;
    cout << "* Kacper Szczudło *" << endl;
    cout << "*      1TIP/g     *" << endl;
    cout << "*******************" << endl;
}

void potegowanie(){
    cout << "Podaj liczbe do potegowania: ";
    cin >> a;
    cout << "Podaj potege liczby " << a <<": ";
    cin >> b;
    for(int i=0; i<b; i++){
        c =c*a;
    }
    cout << endl << "Liczba " << a << " do potegi liczby " << b << " wynosi " << c << endl;
}



int main()
{
    wstep();

    if(odp == 1){
        system("cls");
        wizytowka();
        cout << endl;
        wstep();
    }
    if(odp == 2){
        system("cls");
        potegowanie();
        cout << endl;
        wstep();
    }
    if(odp == 3){
        system("cls");
        return 0;
    }
    return 0;
}

