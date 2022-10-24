#include <iostream>
#include<cmath>
using namespace std;

// Definicja szablonu funkcji srednia()
template <typename T> //Deklaracja parametru T szablonu
T srednia(T wyklad, T cwiczenia, T laboratorium, T seminarium) {
    return(wyklad + cwiczenia + laboratorium + seminarium) / 4;
}

template <>
double srednia(double wyklad, double cwiczenia, double laboratorium, double seminarium) // double - liczba zmiennoprzecinkowa
{
    return (round(wyklad) + round(cwiczenia) + round(laboratorium) + round(seminarium)) / 4;
}

int main()
{
    //wywolanie funkcji szablonowej srednia()
    cout << "Srednia z ocen : " << srednia(3, 4, 3, 4) << endl;
    cout << "Srednia z ocen : " << srednia(3.0, 4.5, 3.5, 4.0) << endl;
    return 0;
}




