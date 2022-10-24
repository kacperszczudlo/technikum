#include <iostream>
#include <string>
#include <cstdlib>
#include <stack>
#include "Item.h"
#include "Stack.h"
#include <vector>


using namespace std;
void Cw1();
int main() {
	Cw1();
	return 0;
}

void Cw1() {
    cout << "--------------------- kolejka fifo ---------------------\n";
    Stack s1;
    s1.Push(new Item("first", nullptr));
    s1.Push(new Item("second", nullptr));
    s1.Push(new Item("third", nullptr));
    s1.Push(new Item("fourth", nullptr));
    cout << s1 << endl;
    cout << "Zdejmowanie ze stosu fifo....." << endl;
    while (s1.GetCount() >= 0) {
        Item* pobrany = s1.Pop();
        cout << pobrany << "to element ze stosu" << endl;
        cout << "---------------------------------------------------\n" << endl;
        cout << s1 << endl;
        delete pobrany;
        pobrany = nullptr;
    }
}