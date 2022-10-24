#include <string>
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
void LoopWhile();
void DoWhile();
int main()
{
    srand(time(0));
    LoopWhile();
    //DoWhile();
    return 0;
}
void LoopWhile() {
    int suma = 0;
    int losowa{0};
    while(suma<100) {
        losowa = rand() % 20; //liczby z przedzia³u <0,20)
        cout << losowa << " ";
        suma += losowa;
    }
    cout << endl << "suma: " << suma << endl;
}
void DoWhile() {
    string wybor;
    do{
        cout << "Czy podoba ci się ten program?(koniec - END): ";
        cin >> wybor;
    } while (wybor != "koniec");
    cout << "Czyli jednak masz go dosc!!!" << endl;
}
