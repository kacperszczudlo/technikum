#include <iostream>

using namespace std;
void ex2();
int main()
{
    /*cout << "Hello world!" << endl;
    return 0;*/
    ex2();
}

void ex2(){
    double d1{12};
    double d2{12};
    double* pd1;
    double* pd2;
    pd1 = &d1;
    pd2 = &d2;
    //cout << pd1 << " " << pd2;
    cout << "Iloraz " << *pd1**pd2 << endl;
    cout << "Iloczyn " << *pd1/ *pd2;

}
