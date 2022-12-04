#include <iostream>

using namespace std;

int main()
{
    //int a = 12;
    long long duzo{123213213213};
    int a{123};
    cout << "int a = " << a << endl;
    auto c{21.5};
    cout << "c = " << c << endl;
    cout << "typ c: " << typeid(c).name() << endl;
    cout << duzo << endl;

    char znak1{'a'};
    cout << "znak1 = " << znak1 << endl;
    cout << "znak1 = " << static_cast<int>(znak1) << endl;
    short znak2{69};
    cout << "znak2 = " << znak2 << endl;
    cout << "znak2 = " << static_cast<char>(znak2) << endl;
    return 0;
}
