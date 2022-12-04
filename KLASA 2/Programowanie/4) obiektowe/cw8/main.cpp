#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
const int MAXSIZE = 1000;
int GetSize(){
int size = 0;
do{
    cout << "Podaj rozmiar tablicy z przedzialu (0," << MAXSIZE << "): ";
    cin >> size;
}while(size <= 0 || size>MAXSIZE);
return size;
}
void FillRandomTab(int t[], int size){
for(auto i = 0;i<size;i++){
    t[i] = rand() % 100;
}
}
void ShowTab(int* t, int size){
for(auto i = 0; i<size;i++){
    cout << "t [ " << i << " ] = " << t[i] << endl;
}
}
int GetMax(int t[], int size,int pocz = 0){
int index = pocz;
int max = t[index];
for(int i = pocz;i<size;i++){
    if(t[i]>max){
        max = t[i];
        index = i;
    }
}return index;
}
void Swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
    //cout << "a = "<< a << "b = " << b << endl;
}
void SortByChoice(int t[],int size){
for(int i = 0; i<size-1;i++){
    Swap(t[i], t[GetMax(t, size, i )]);
}
}
void SortByBubble(int t[],int size){
    for(int i = 0; i < size - 1; i++){
    for(i = 0; i < size - 1; i++){
    if(t[i] < t[i + 1]){
    Swap(t[i], t[i + 1]);
}
}
}
}
int main(){
    wstep();

    if(odp == 1){
        system("cls");
        SortByChoice();
        cout << endl;
        wstep();
    }
    if(odp == 2){
        system("cls");
        SortByBubble();
        cout << endl;
        wstep();
    }
s
    int size = GetSize();
    int* tab = new int[size]; // do wskka tab wpisywany jest poczatek zarezrwoowanej pamieci
    srand(time(0));
    FillRandomTab(tab,size);
    ShowTab(tab, size);
    cout << "Najwiekszy element na miejscu: " << GetMax(tab, size) << endl;
    cout << "**************** Sortowanie *******************\n" << endl;
    SortByChoice(tab, size);
    ShowTab(tab, size);
    cout << "****************Bubble*********************\n" << endl;
    SortByBubble(tab, size);
    ShowTab(tab, size);
    //int g1 = 20;
    //int g2 = 45;
    //Swap(g1,g2);
    //cout << "g1 = "<< g1 << "g2 = " << g2 << endl;
    delete[] tab;
    tab = nullptr;
    return 0;
}
