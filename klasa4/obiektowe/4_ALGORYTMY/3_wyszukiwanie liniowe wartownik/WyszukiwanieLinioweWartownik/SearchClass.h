#pragma once
#include <cstdlib>
#include <iostream>

using namespace std;

class SearchClass
{
private:
    //zakres tablicy
    const int n = 50;
    int numbersArray[50];
    int searchValue;
        /******************************************************
        nazwa funkcji : sentinelSearch()
        argumenty : <brak> 
        typ zwracany : <int>, <i> - numer index / <-1> - stosowny kominukat
        informacje : < jesli nie jest rowne szukanej wartosci zwieksz o 1
        je¿eli index miesci sie w zakresie 50 to go zwracamy a jezeli jest spoza zakresu to mowi ze jest poza zakresems >
        autor : <Kacper Szczud³o>
        *****************************************************/
    int sentinelSearch() {
        int i = 0;

        while (numbersArray[i] != searchValue) {
            i++;
        }

        if (i < n) return i;
        return -1;
    }
    /******************************************************
       nazwa funkcji : fillTable()
       argumenty : <brak>
       typ zwracany : int, searchValue - wprowadzana wartoœæ
       informacje : < array[1] = 0 dlatego + 1 i randomowa liczba modulo >
       autor : <Kacper Szczud³o>
       *****************************************************/
    void fillTable() {
        for (size_t i = 0; i < n; i++)
        {
            numbersArray[i] = rand() % 100 + 1;
        }
        numbersArray[n] = searchValue;
    }
    /******************************************************
       nazwa funkcji : showNumbers()
       argumenty : <brak>
       typ zwracany : int, numbersArray[i] - tablica liczb
       informacje : < wyœwietlamy tablice liczb po przecinku >
       autor : <Kacper Szczud³o>
       *****************************************************/
    void showNumbers() {
        for (size_t i = 0; i < n; i++)
        {
            cout << numbersArray[i] << ", ";
        }
    }
public:
    /******************************************************
       nazwa funkcji : searchNumber()
       argumenty : <int inputSearchValue>
       typ zwracany : int, sentinelSearch() - funkcja zwracajaca index albo mowi ze jest poza zakresem
       autor : <Kacper Szczud³o>
       *****************************************************/
    int searchNumber(int inputSearchValue) {
        searchValue = inputSearchValue;
        fillTable();
        showNumbers();
        return sentinelSearch();
    }
};

