//przekazuje do preprocesora informację o dołączeniu do programu nagłówka biblioteki iostream
#include <iostream>
//zawiera funkcje ogólne takie jak konwersje, alokacja pamięci czy funkcje matematyczne
#include <cstdlib>
//Dołączenie tego nagłówka gwarantuje, że nazwy zadeklarowane przy użyciu połączenia zewnętrznego w nagłówku std biblioteki standardowego języka C są deklarowane w przestrzeni nazw
#include <ctime>
// jest poleceniem, które nakazuje użycia standardowej przestrzeni nazw std
using namespace std;

/********************************************************
 nazwa funkcji: sentinelSearch()
 parametry wejściowe: int arr[], int n, int searchVal - przechowują zmnienne typu int
 wartość zwracana: i / -1 - zwraca indeks odnalezionego elementu / odpowiedni komunikat ( -1 )
********************************************************/
int sentinelSearch(int arr[], int n, int searchVal)
{
    int i = 0;

    while (arr[i] != searchVal)
        i++;

    if (i < n)
        return i;
    return -1;
}

/********************************************************
 nazwa funkcji: fillArray()
 parametry wejściowe: int n, int array[], int searchVal - przechowują zmnienne typu int
 wartość zwracana: searchVal - przeszukuje tablice
********************************************************/
void fillArray(int n, int array[], int searchVal) {
    for (int i = 0; i < n; i++)
    {
        array[i] = (rand() % 100) + 1;
    }
    array[n] = searchVal;
}

/********************************************************
 nazwa funkcji: ouputArray()
 parametry wejściowe: int n, int array[] - przechowują zmnienne typu int
 wartość zwracana: array[i] - wypełnia tablice
********************************************************/
void ouputArray(int n, int array[]) {
    for (int i = 0; i < n; i++)
    {
        cout << array[i];
        if (i < n - 1) cout << ", ";
    }
}

int main()
{
    const int n = 50;
    int numbersArray[n + 1];
    int searchValue;
    //kiedy nie użyjesz funkcji srand do ustawienia ziarna będzie używana domyślna wartość - 1
    //time(NULL) zwraca czas unixowy masz pewność że ziarno będzie inne za każdym uruchomieniem programu
    srand(time(NULL));
    //wyświetlenie napisu
    cout << "Podaj liczbe, której szukasz: "; 
    //wartość do wyszukania jest pobierana z klawiatury
    cin >> searchValue;
    //wywołanie funkcji fillArray()
    fillArray(n, numbersArray, searchValue);
    //wyświetlenie wyniku funkcji sentinelSearch()
    cout << sentinelSearch(numbersArray, n, searchValue) << endl;
    //wywołanie funkcji ouputArray()
    ouputArray(n, numbersArray);
    //polecenie to zatrzymuje wykonanie programu do momentu naciśnięcia jakiegoś klawisza
    return 0;
}