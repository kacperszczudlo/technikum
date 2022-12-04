#include <iostream>
#include <sstream>
using namespace std;

void GetEnum(){
enum class Dzien {Poniedzialek = 1, Wtorek = 2, Sroda = 3, Czwartek = 4, Piatek = 5, Sobota = 6, Niedziela = 7, Koniec = 9, Inny};

unsigned int dd{};
do{
cout << "Podaj numer dnia tygodnia: ";
cin >> dd;
dd = (dd <= 0 || dd > 7) && dd !=9 ? 8 : dd;
Dzien d1 = static_cast<Dzien>(dd);
switch(d1){
    case Dzien::Poniedzialek: cout << "Wybrano poniedzialek" << endl; break;
    case Dzien::Wtorek: cout << "Wybrano Wtorek" << endl; break;
    case Dzien::Sroda: cout << "Wybrano Sroda" << endl; break;
    case Dzien::Czwartek: cout << "Wybrano Czwartek" << endl; break;
    case Dzien::Piatek: cout << "Wybrano Piatek" << endl; break;
    case Dzien::Sobota: cout << "Wybrano Sobota" << endl; break;
    case Dzien::Niedziela: cout << "Wybrano Niedziela" << endl; break;
    case Dzien::Koniec: cout << "Koniec" << endl; break;
    default: cout << "Bledny wybor" << endl;
}
cout << "Wybrano: " << static_cast<int>(d1) << endl;
}while(dd !=9);
}


void numberToString() {
cout << "==================\n";
int liczbaInt = 56;
double liczba0 = 45.9;
cout << liczbaInt + liczbaInt << endl;
string liczbaString = to_string(liczbaInt);
string liczba0String = to_string(liczba0);
cout << liczbaString + liczbaString << endl;
cout << liczba0String + liczba0String << endl;
cout << "==================\n";
ostringstream os;
os << liczbaInt;
string liczbaString2 = os.str();
cout << liczbaString2 + liczbaString2 << endl;
}


void stringToNumber() {
string stringVal = "ala ma kota";
string stringDouble = "12.5";
istringstream is (stringDouble);
int intVal{};
double doubleval{};
//is >> intVal;
//cout << stringVal + stringVal << endl;
//cout << intVal + intVal << endl;
is >> doubleval;
cout << doubleval + doubleval << endl;
}


int parseInt(string liczba) {
//int liczba = parseInt("345");
}
int main()
{
    //GetEnum();
    //numberToString();
    stringToNumber();
    return 0;
}
