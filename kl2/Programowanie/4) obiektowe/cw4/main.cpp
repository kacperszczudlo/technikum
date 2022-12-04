#include <string>
#include <iostream>
#include <iomanip>
using namespace std;
void Generuj (int ile) {
for (int i = 1; i <= ile; i++){
    cout <<setw(6) << i << " " << setw(6) << (i * i) << endl;
    cout <<setw(6) << i << " " << setw(12)<< (i*i*i) << endl;
}
}
int main()
{
    cout << "Ile liczb: ";
    int ile;
    cin >>ile;
    if(ile<0 || ile>1000) {
        cout <<"B³êdne dane !!!"<< endl;

    }else{
    Generuj(ile);
    return 0;
    }
}
