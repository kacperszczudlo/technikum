
#include <iostream>

using namespace std;

class SortSelection {

    static const int n = 10;
    int numbers[n];
    int searchMax(int);

public:
    void sortNumbers();
    void inputNumbers();
    void outputNumbers();
};
/********************************************************
 nazwa funkcji: <SortSelection>
 parametry wejœciowe: <brak> - <przechowuje zmnienn¹ typu int>
 wartoœæ zwracana: <numbers[i] - pobiera liczbê ca³kowit¹>
 autor: <Kacper Szczud³o>
********************************************************/
void SortSelection::inputNumbers() {
    for (int i = 0; i < n; i++) {
        cout << "Podaj " << i << " elemnt tablicy: ";
        cin >> numbers[i];
    }
}
/********************************************************
 nazwa funkcji: <SortSelection>
 parametry wejœciowe: <brak> - <przechowuje zmnienn¹ typu int>
 wartoœæ zwracana: <numbers[i] - zwraca liczbê ca³kowit¹>
 autor: <Kacper Szczud³o>
********************************************************/
void SortSelection::outputNumbers() {
    for (int i = 0; i < n; i++) {
        cout << "Element[" << i << "] = " << numbers[i] << endl;
    }
}
/********************************************************
 nazwa funkcji: <SortSelection>
 parametry wejœciowe: <startIndex> - <przechowuje zmnienn¹ typu int>
 wartoœæ zwracana: <maxNumberIndex - wartoœæ najwy¿sza>
 autor: <Kacper Szczud³o>
********************************************************/
int SortSelection::searchMax(int startIndex) {
    int maxNumberIndex = startIndex;
    for (int i = startIndex + 1; i < n; i++) {
        if (numbers[i] > numbers[maxNumberIndex]) maxNumberIndex = i;
    }
    return maxNumberIndex;
}
/********************************************************
 nazwa funkcji: <SortSelection>
 parametry wejœciowe: <brak> - <przechowuje zmnienn¹ typu int>
 wartoœæ zwracana: <temp - posortowana tablica liczb ca³kowitych>
 autor: <Kacper Szczud³o>
********************************************************/
void SortSelection::sortNumbers() {
    for (int i = 0; i < n - 1; i++) {
        int temp = numbers[i];
        int searchIndex = searchMax(i);
        numbers[i] = numbers[searchIndex];
        numbers[searchIndex] = temp;
    }
}

int main()
{
    SortSelection myArray;
    myArray.inputNumbers();
    myArray.sortNumbers();
    myArray.outputNumbers();
    return 0;
}

