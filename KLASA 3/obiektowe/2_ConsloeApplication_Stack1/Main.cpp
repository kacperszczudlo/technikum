#include <iostream>
#include <string>
#include <cstdlib>
#include <stack>
#include "Item.h"
#include "Stack.h"
#include <vector>


using namespace std;
void Cw1();
void Cw2();
int main() {
	Cw1();
	Cw2();
	return 0;
}
void Cw1() {
	cout << "============================ CWICZENIE 1 ============================\n";
	//cout << "czy dziala?" << endl;
	/*Item* i1 = new  Item();
	cout << i1;
	Item* i2 = new Item("nowy element", i1);
	cout << i2;

	delete i1;
	delete i2;
	i1 = nullptr;
	i2 = nullptr;*/
	Stack s1;
	s1.Push(new Item("pierwszy", nullptr));
	s1.Push(new Item("drugi", nullptr));
	s1.Push(new Item("trzeci", nullptr));
	s1.Push(new Item("czwarty", nullptr));
	cout << s1 << endl;
	cout << "Zdejmowanie ze stosu....." << endl;
	Item* pobrany = s1.Pop();
	cout << pobrany << "to element ze stosu" << endl;
	cout << "---------------------------------------\n" << endl;

	cout << s1 << endl; //endl - przejœcie do nowej lini;
	delete pobrany;
	pobrany = nullptr;
}
void Cw2() {
	cout << "============================- CWICZENIE 2 ============================\n";
	vector<string> imiona{ "Anna","Monika","Tomasz","Gerwazy","Urszula" };
	vector<string> reversImiona;
	//utworzyæ stos z imionami
	//drugi wektor imiona ostatni jako pierwszy
	Stack s1;

	for (string imie : imiona) {
		s1.Push(new Item(imie, nullptr));
	}
	cout << s1 << endl;
	Item* it = nullptr;
	while (s1.GetTop() != nullptr) {
		it = s1.Pop();
		reversImiona.push_back(it->getValue());
		delete it;
	}
	cout << "------------------ wektor imion revers ------------------\n";
	for (string imie : reversImiona) {
		cout << imie << endl;
	}
}