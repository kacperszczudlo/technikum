#include <iostream>

using namespace std;


template <typename T>
void Swap(T& a, T& b) // & - referencja
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 5, b = 7;
    cout << "A wynosi: " << a << ", Po zamianie: " << b << endl;
    Swap<int>(a, b);
    cout << "B wynosi: " << a << ", Po zamianie: " << b << endl;

}



