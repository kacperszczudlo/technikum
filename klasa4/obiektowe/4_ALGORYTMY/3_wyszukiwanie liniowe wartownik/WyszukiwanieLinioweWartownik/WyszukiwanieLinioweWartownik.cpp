// WyszukiwanieLinioweWartownik.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "SearchClass.h"

using namespace std;
/*
int sentinelSearch(int arr[], int n, int searchValue) {
    int i = 0;

    while (arr[i] != searchValue) {
        i++;
    }

    if (i < n) return i;
    return -1;
}

void fillTable(int arr[], int n, int searchValue) {
    for (size_t i = 0; i < n; i++)
    {
        arr[i] = rand() % 100 + 1;
    }
    arr[n] = searchValue;
}
*/
int main()
{
    srand(time(NULL));
    int searchValue;
    SearchClass sc;
    cout << "Podaj liczbê ktorej szukasz: ";
    cin >> searchValue;
    cout << std::endl << sc.searchNumber(searchValue);
}