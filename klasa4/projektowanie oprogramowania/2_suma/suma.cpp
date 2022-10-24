
#include <iostream>

using namespace std;

template <class T>
    T suma(T l1, T l2, T l3, T l4, T l5, T l6, T l7, T l8, T l9, T l10) {
        return (l1 + l2 + l3 + l4 + l5 + l6 + l7 + + l8 + l9 + l10);
    };

int main()
{
    float l1;
    float l2;
    float l3;
    float l4;
    float l5;
    float l6;
    float l7;
    float l8;
    float l9;
    float l10;

    cout << "podaj l1" << endl;
    cin >> l1;
    cout << "podaj l2" << endl;
    cin >> l2;
    cout << "podaj l3" << endl;
    cin >> l3;
    cout << "podaj l4" << endl;
    cin >> l4;
    cout << "podaj l5" << endl;
    cin >> l5;
    cout << "podaj l6" << endl;
    cin >> l6;
    cout << "podaj l7" << endl;
    cin >> l7;
    cout << "podaj l8" << endl;
    cin >> l8;
    cout << "podaj l9" << endl;
    cin >> l9;
    cout << "podaj l10" << endl;
    cin >> l10;
    cout << "suma wynosi: " << suma(l1, l2, l3, l4, l5, l6, l7, l8, l9, l10) << endl;
  
}

